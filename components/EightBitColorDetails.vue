<script setup lang="ts">
import { ref, computed } from "vue";
const value = ref(128); // Default value
const toBinary = (value) => (value >>> 0).toString(2)
const binaryValue = computed(() => toBinary(value.value).padStart(8, "0"));
</script>

<template>
  <div class="grid grid-cols-3 gap-5 pt-10  place-items-center	">
    <div class="range">
      <input
          type="range"
          min="0"
          max="255"
          v-model="value"
          class="slider"
      />
    </div>
      <div class="preview" :style="{ backgroundColor: `rgb(${value}, ${value}, ${value})` }">
        <span class="preview-text">{{ value }}</span>
      </div>
      <span class="binary">{{ binaryValue }}</span>
  </div>
</template>

<style scoped>

.preview {
  width: 100%;
  height: 100%;
  border-radius: 4px;
  display: flex;
  align-items: center;
  justify-content: center;
  color: white;
  font-weight: bold;
  font-size: 18px;
  -webkit-text-stroke: 1px black;

}

.binary {
  border: 2px solid var(--orange-doom-shade-4);
  border-radius: 4px;
  font-family:  monospace;
  color: whitesmoke;
  background: black;
  padding: 4px 8px;

}

.range input{
  height:4px;
  width:125px;
  border-radius:5px;
  background-color: var(--orange-doom-shade-4);
  outline:none;
}
.range input::-moz-range-thumb {
  -webkit-appearance:none;
  width:7px;
  height:7px;
  border-radius:50%;
  background-color:var(--orange-doom-shade-4);
}
</style>
