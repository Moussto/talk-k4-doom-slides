<script setup lang="ts">
import { ref, onMounted, reactive, onBeforeMount } from "vue";
import { Jimp, JimpMime } from "jimp";
import floydSteinberg from "floyd-steinberg";

const props = defineProps({
  imageUrl: {
    type: String,
    required: true,
  },
  badgeText: {
    type: String,
    default: "",
  },
  effect: {
    type: String,
    default: "",
  },
});

const dithered = ref("");

const applyEffect = async (image, effect) => {
  if (effect === "") {
    return image.clone().getBase64(JimpMime.png);
  }

  if (effect === "greyscale") {
    return image.clone().greyscale().getBase64(JimpMime.png);
  }

  if (effect === "bw") {
    return image
      .clone()
      .threshold({ max: 127 })
      .contrast(1)
      .getBase64(JimpMime.png);
  }

  if (effect === "floyd-steinberg") {
    const toto = await image.clone().threshold({ max: 127 });
    toto.bitmap = floydSteinberg(toto.bitmap);

    return toto.getBase64(JimpMime.png);
  }
};

onBeforeMount(async () => {
  const image = await Jimp.read(props.imageUrl);
  dithered.value = await applyEffect(image, props.effect);
});
</script>

<template>
  <div class="magic-border">
    <span class="badge" v-if="badgeText">{{
      props.badgeText.toUpperCase()
    }}</span>
    <img :src="dithered" />
  </div>
</template>

<style scoped>
img {
  max-width: 100%;
  height: auto;
}



.badge {
  position: absolute;
  right: -25px;
  top: -10px;
  background: var(--orange-doom-shade-4);
  text-align: center;
  border-radius: 6px;
  color: white;
  font-weight: 500;
  padding: 0.35em 0.4em 0.3em;
  font-size: 0.85em;
  line-height: 1;
}
</style>
