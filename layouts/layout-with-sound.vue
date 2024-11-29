<script setup lang="ts">
import { useSound } from '@vueuse/sound'
import { useIsSlideActive, useSlideContext, onSlideLeave } from '@slidev/client'
import { watchEffect, onMounted, ref, watch, reactive, computed } from "vue";
import { handleBackground } from "./helper/layoutHelper";

const props = defineProps({
  useLayout: {
    default: 'default',
  },
  image: {
    type: String,
  },
  audioSourcePath: {
    type: String,
  },
  backgroundSize: {
    type: String,
    default: 'cover',
  }
})

const style = computed(() => handleBackground(props.image, false, props.backgroundSize))


// All this shit instead of onSlideEnter because https://github.com/slidevjs/slidev/issues/1727
const { play, stop } = useSound(props.audioSourcePath, {
  loop: false,
  volume: 0.7,
})

const startup = reactive({ songPlay: false })
watch(() => startup.songPlay, (songPlay) => {
  if(songPlay) {
    play()
  }
  startup.songPlay = false
  }
)
const isActive = useIsSlideActive()
const { $clicksContext } = useSlideContext()
watchEffect(() => {
  if (isActive.value && $clicksContext.isMounted) {
    startup.songPlay = true
  }
})


onSlideLeave(() => {stop()})

</script>

<template>
  <div class="grid grid-cols-2 w-full h-full auto-rows-fr">
    <div class="slidev-layout" :class="['slidev-layout', useLayout]">
      <slot />
    </div>
    <div class="sound-image-right w-full h-full" :style="style" />
  </div>
</template>



<style>
.sound-image-right {
  filter: brightness(30%);
}
</style>
