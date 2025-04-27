<script setup lang="ts">
import { ref, watch } from "vue";
import { useSound } from "@vueuse/sound";

const volume = ref(0.7);

const { play, sound } = useSound("../assets/fanfare.mp3", {
  volume: volume.value,
});

watch(volume, (newVolume) => {
  if (sound.value) {
    sound.value.volume(newVolume);
  }
});
</script>

<template>
  <div class="sound-tester">
    <button @click="play">Play at</button>

    <div style="padding-left: 10px">
      <label for="volume"> {{ Math.round(volume * 100) }}%</label>
      <input
        id="volume"
        type="range"
        min="0"
        max="1"
        step="0.01"
        v-model="volume"
      />
    </div>
  </div>
</template>

<style scoped>
.sound-tester {
  display: flex;
  flex-direction: row;
  align-items: start;
}

button {
  font-weight: bold;
}
</style>
