<script setup lang="ts">

import { onMounted } from "vue";
onMounted(() => {
  const video = document.querySelector("#webcam-video") as HTMLVideoElement;
  if (navigator.mediaDevices.getUserMedia) {
    navigator.mediaDevices.getUserMedia({ video: true })
        .then(function (stream) {
          video.srcObject = stream;
        })
        .catch(function (error) {
          console.log("Ca marche pas mon reuf", error);
        });
  }
})

// TODO: stop webcam after slide
</script>

<template>
    <video autoplay id="webcam-video" />
</template>


<style scoped>
video {
  width: 100%;
  height: 100%;
}
</style>/
