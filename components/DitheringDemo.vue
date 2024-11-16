<script setup lang="ts">
import { reactive } from 'vue';

const initValues = [
  50, 100, 190, 40, 240,
  200, 125, 5, 200, 10,
  50, 170, 35, 100, 125,
  250, 65, 130, 170, 200,
  150, 55, 220, 40, 120
]
const cells = reactive(Array.from(initValues, (val, index) => ({
  id: index,
  pixelValue: val,
  finalvalue: null,
  ditheredAccumulation: 0
})));

const convert8bitGreyscaleValueToHexCSS = (value: number): string => {
  const hex = value.toString(16)
  return `#${hex.repeat(3)}`
}

const enum FLOYD_PERCENTAGES  {
  SEVEN_SIXTEENTH = 43.75,
  ONE_SIXTEENTH = 6.25,
  FIVE_SIXTEENTH = 31.25,
  THREE_SIXTEENTH = 18.75
}

const calculateDithering = (pixelId: number, type = 'Floyd–Steinberg') => {
  const cols = 5; // Grid column count
  const neighbors = [];

  // Floyd–Steinberg affected neighbots
  if ((pixelId + 1) % cols !== 0) {
    neighbors.push({pixel: pixelId + 1, proportion: FLOYD_PERCENTAGES.SEVEN_SIXTEENTH}); // Right 7/16
  }
  if ((pixelId + 1) % cols !== 0 && pixelId + cols + 1 < cells.length) {
    neighbors.push({pixel: pixelId +cols + 1, proportion: FLOYD_PERCENTAGES.ONE_SIXTEENTH}); // Diagonally right-down 1/16
  }
  if (pixelId + cols < cells.length) {
    neighbors.push({pixel: pixelId +cols, proportion: FLOYD_PERCENTAGES.FIVE_SIXTEENTH}); // Down 5/16
  }
  if (pixelId % cols !== 0 && pixelId + cols - 1 < cells.length) {
    neighbors.push({pixel: pixelId + cols - 1, proportion: FLOYD_PERCENTAGES.THREE_SIXTEENTH}); // Diagonally 3/16
  }

  const expectedValue = cells[pixelId].ditheredAccumulation + cells[pixelId].pixelValue;
  cells[pixelId].finalvalue = expectedValue > 127 ? 255 : 0
  const errorToPropagate = expectedValue - cells[pixelId].finalvalue

  for (const entry of neighbors) {
      applyDithering(entry.pixel, entry.proportion, errorToPropagate);
  }


  return neighbors;
}

const applyDithering = (pixelId: number, proportion: FLOYD_PERCENTAGES, errorToDivide: number) => {
  cells[pixelId].ditheredAccumulation += (errorToDivide * (proportion/100))
}
</script>

<template>
  <div class="dithering-grid">
    <div class="pixel-cell"
         v-for="(cell, index) in cells"
         :key="`cell-${index}`"
         :class="{'immutable': cell.finalvalue !== null}"
         :style="{backgroundColor: convert8bitGreyscaleValueToHexCSS(cell.finalvalue !== null ? cell.finalvalue : cell.pixelValue)}"
         @click="cell.finalvalue === null && calculateDithering(cell.id)">
        {{cell.finalvalue !== null ? cell.finalvalue : cell.pixelValue}}
      <div class="pixel-cell-accumulation" v-if="cell.ditheredAccumulation && cell.finalvalue === null">{{Math.round(cell.ditheredAccumulation)}}</div>
    </div>
  </div>
</template>


<style scoped>
.dithering-grid {
  display: grid;
  gap: 7px;

  grid-template-columns: repeat(5, 90px);
  grid-template-rows: repeat(5, 90px);
}

.pixel-cell {
  border-radius: 20px;
  width: 100%;
  height: 100%;
  transition: background-color 3s ease;

  display: flex;
  justify-content: center;
  align-items: center;

  font-size: 15pt;
  font-weight: bold;
  color: black;

  position: relative;
  cursor: pointer;
}

.pixel-cell-accumulation {
  position: absolute;
  bottom: 0px;
  right: 0px;
  background-color: pink;
  border-top-left-radius: 10px;
  border-bottom-right-radius: 10px;
  padding: 2px 12px;
  font-size: 10pt;
  color: black;
  transition: background-color 3s ease;
}

.pixel-cell:hover {
  /* TODO: change this shit color */
  border: 3px solid cornflowerblue;
}

.immutable {
  border: 1px solid green;
  cursor: unset;
}

</style>
