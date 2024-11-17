<script setup lang="ts">
import { ImgComparisonSlider } from '@img-comparison-slider/vue';



/*
Usage:
---
    layout: center
---
    <ImageSliderComparator />

*/

// TODO: find a meme to ilustarte 1bit vs 1 bit with dithering
</script>

<template>
  <ImgComparisonSlider hover="hover">
    <img
        slot="first"
        style="width: 100%"
        src="https://img-comparison-slider.sneas.io/demo/images/before.webp"
    />
    <img
        slot="second"
        style="width: 100%"
        src="https://img-comparison-slider.sneas.io/demo/images/after.webp"
    />
  </ImgComparisonSlider>
</template>


<style scoped>

</style>
