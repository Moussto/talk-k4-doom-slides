<script setup lang="ts">
import { useSound } from '@vueuse/sound'
import { useIsSlideActive, useSlideContext, onSlideLeave } from '@slidev/client'
import {watchEffect, onMounted, on, ref, watch, reactive} from "vue";

const props = defineProps({
  useLayout: {
    default: 'default',
  },
  audioSourcePath: {
    type: String,
  }
})


// All this shit instead of onSlideEnter because https://github.com/slidevjs/slidev/issues/1727
const { play, stop } = useSound(props.audioSourcePath, {
  loop: false,
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
  <div class="slidev-layout" :class="['slidev-layout', useLayout]">
    <slot />
  </div>
</template>


<style>

</style>
