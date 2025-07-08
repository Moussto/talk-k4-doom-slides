<script setup lang="ts">
import { onBeforeUnmount, onMounted } from "vue";

let myStream: MediaStream = null;

const stopStream = () => {
  console.log("Removing Webcam elements");
  myStream.getVideoTracks().forEach((track) => track.stop());
};
const startStream = () => {
  console.log("Mounting Webcam elements");
  const video = document.querySelector(
    "#webcam-video-on-top",
  ) as HTMLVideoElement;
  if (navigator.mediaDevices.getUserMedia) {
    navigator.mediaDevices.enumerateDevices().then((devices) => {
      console.log({ devices });

      const topVideoCameraIdeao = devices.find((device) => device.label.includes("Ideao"));
      console.log({topVideoCameraIdeao})

      const constraints = {
        video: {
          deviceId: topVideoCameraIdeao?.deviceId,
        },
      };
      navigator.mediaDevices
        .getUserMedia(constraints)
        .then((stream) => {
          myStream = stream;
          video.srcObject = myStream;
        })
        .catch((error) => console.log("Ca marche pas mon reuf", error));
    });
  }
};

onMounted(startStream);
onBeforeUnmount(stopStream);
</script>

<template>
  <div class="frame-wrapper magic-border">
    <iframe src="http://localhost:8085/?fontSize=21" />
  </div>
  <!-- Use local terminal streamed with ttyd like this `ttyd -W -p 8085 zsh` -->
  <div
    v-drag="'square'"
    v-motion
    :initial="{ y: 500 }"
    :enter="{ y: 0, transition: { delay: 1200 } }"
  >
    <video autoplay id="webcam-video-on-top" />
  </div>
</template>

<style scoped>
iframe {
  height: 100%;
  width: 100%;
  zoom: 0.8;
}

.frame-wrapper {
  height: 100%;
  width: 100%;
}

video {
  overflow: hidden;
  border-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAFQAAABUCAYAAAAcaxDBAAAB4ElEQVR4Xu3d207DMAAEUfr/Hw1C4iVW5ekQJ5RkeN3NpceOk1ZqeXzw3ydXbtV4zF7tNPzZMNCtYKCLr59A/xp0vMRfWRYWn/Nb727q8wwr0Pl4Brp4vgd6Nqi9xO/2GEX3kI3HdznQ+RQOdPElHui7g95tzaTxGGesXkMDnb+XD5SmIOTN0J2A4+aHg9JdcPHrOXx3tMQFKocgUAlG9UBJSOang15tzSRvemu++7Ep0O0QBEpTcsiboRKM6oGSkMwDlWBUD5SEZB6oBKN6oCQk80AlGNUDJSGZByrBqB4oCck8UAlG9UBJSOaBSjCqB0pCMg9UglE9UBKSeaASjOqBkpDMA5VgVA+UhGQeqASjeqAkJPNAJRjVAyUhmQcqwageKAnJPFAJRvVASUjmgUowqgdKQjIPVIJRPVASknmgEozqgZKQzAOVYFQPlIRkHqgEo3qgJCTzQCUY1QMlIZkHKsGoHigJyTxQCUb1QElI5oFKMKovBx0POB6ATui/5/R19o1Hv33Hwx0oG6lGoIqLy7tBx0PQDvmUrtWY3kOeraGBzidAoIsvkEDPBr37c+Ze78095pXfsd97wKtvH+jiEQ70bNDW1Ll4/63myBn5m4f2u326RP7NUBKS+RT0C14fECCV9tbtAAAAAElFTkSuQmCC")
    28 / 28px / 0 round;
  border-width: 12px;
  border-style: solid;
}
</style>
