<script setup lang="ts">
import {ref} from "vue";

const props = defineProps({
  source: {
    default: 'Source and Author',
  },
  videoPath: {
    default: null
  },
  originalSource: {
    default: ''
  },
  maxWidth: {
    default: null
  }
})

const maxWidth = ref(props.maxWidth)

const openSource = () => {
  window.open(props.originalSource, '_blank').focus();
}

// Change this shit
const isImage = () => props.videoPath?.includes('jpeg') || props.videoPath?.includes('png')
</script>

<template>
  <div class="slidev-layout asset-with-source h-full w-full">
    <div class="my-auto ">
      <div class="asset-content flex flex-col">
        <img :src="videoPath" v-if="isImage()" />
        <SlidevVideo v-else autoplay autoreset="slide" border="rounded" v-if="props.videoPath" :style="{'max-width': maxWidth}">
            <source :src="videoPath" type="video/webm" /> <!-- Always webm for now, change this shit -->
        </SlidevVideo>
      <div class="asset-source" @click="openSource">{{ props.source }}</div>
        <slot></slot>
      </div>
    </div>
  </div>
</template>


<style>


.asset-content {
  display: flex;
  justify-content: center;
  align-items: center;
}

.asset-video {
    border-image:  url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABUAAAAVCAYAAACpF6WWAAAA2klEQVQ4T+WVUQ6DIAyGW/fkdplF738FbzN5Gqw/FUSJc6g8rYkJqfJZWvqXx44d08rgcPA18tj5JZZwfTVHbARKEaJft0P+ny2O6WW/D0ANS4UmVgIM29aMRaRHgEuwpotfEimWZ4AR/JRTC4xRqHtBDvfKhFT4418RZZqGf4eOXSOFsllT7RVksxnkBlTIKdWAVom0AhQdWiGnHkpOJIAeF7Rq0OZJ+rwKnhKVWf6CSPtLp7J1RAdSPbXCyUQa8HZ4/9wMEZhMDzb9TcYBho+moNjCCMNBJ/AHFJSNa/Sc/xUAAAAASUVORK5CYII=") 7 /  7px / 0 round;
    border-width:  2px;
    border-style:  solid;
}

</style>
