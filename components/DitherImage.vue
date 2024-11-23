<script setup lang="ts">
import {ref, onMounted, reactive, onBeforeMount} from "vue";
import { Jimp, JimpMime } from "jimp";
import floydSteinberg from 'floyd-steinberg';

const props = defineProps({
  imageUrl: {
    type: String,
    required: true,
  },
  effect: {
    type: String,
    default: ""
  }
});


const dithered = ref('')

const applyEffect = async (image, effect) => {
  if(effect === '') {
    return image.clone().getBase64(JimpMime.png)
  }

  if(effect === 'greyscale') {
    return image.clone().greyscale().getBase64(JimpMime.png)
  }

  if(effect === 'bw') {
    return image.clone().threshold({ max: 127 }).contrast(1).getBase64(JimpMime.png)
  }

  if(effect === 'floyd-steinberg') {
    const toto = await image.clone().threshold({ max: 127 })
    toto.bitmap =  floydSteinberg(toto.bitmap)

    return toto.getBase64(JimpMime.png)
  }
}


onBeforeMount( async () => {
  const image = await Jimp.read(props.imageUrl);
  dithered.value = await applyEffect(image, props.effect)
});

</script>

<template>
    <img :src="dithered"  />
</template>

<style scoped>
img {
  max-width: 100%;
  height: auto;
  border: 1px solid #ddd;
  border-radius: 8px;
  padding: 5px;
  background-color: #f5f5f5;
}
</style>
