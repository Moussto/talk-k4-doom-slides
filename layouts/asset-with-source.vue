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

</script>

<template>
  <div class="slidev-layout asset-with-source h-full w-full">
    <div class="my-auto ">
      <div class="asset-content flex flex-col">
        <SlidevVideo autoplay autoreset="slide" border="rounded" v-if="props.videoPath" :style="{'max-width': maxWidth}">
            <source :src="videoPath" type="video/webm" /> <!-- Always webm for now, change this shit -->
        </SlidevVideo>
      <div class="asset-source" @click="openSource"><p>{{ props.source }}</p></div>
      </div>
    </div>
  </div>
</template>


<style>

.asset-source {
  display: flex;
  justify-content: center;
  align-items: center;
  color: var(--silver);
  font-size: 1rem;
  font-weight: lighter;
  font-style: italic;
}

.asset-source:hover {
  cursor: pointer;
  font-weight: normal;
}

.asset-content {
  display: flex;
  justify-content: center;
  align-items: center;
}



</style>
