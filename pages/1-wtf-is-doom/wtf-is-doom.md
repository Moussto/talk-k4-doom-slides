---
layout: image-right
image: /pages/1-wtf-is-doom/assets/doom-poster.png
backgroundSize: contain

---
<div class="flex w-full h-full items-center justify-center">
    <h1>DOOM</h1>
</div>

---
layout: full
---
<SlidevVideo autoplay autoreset="slide" border="rounded">
  <source src="/pages/1-wtf-is-doom/assets/doom_gameplay.mp4" type="video/mp4" />
</SlidevVideo>


---
layout: full
---
Timeline

Timeline stuff here


---
layout: asset-with-source
videoPath: /pages/1-wtf-is-doom/assets/calculator.webm
originalSource: https://www.youtube.com/watch?v=nduMTX86Zl0
source: LGR - Running Doom on a Calculator! TI-83 Plus
---

---
layout: asset-with-source
videoPath: /pages/1-wtf-is-doom/assets/oscilloscope.webm
originalSource: https://www.youtube.com/watch?v=OU16lIx_pC8
source: MrSlehofer - Doom on an Oscilloscope (Tektronix 2220)
maxWidth: 80%
---

---
layout: asset-with-source
videoPath: /pages/1-wtf-is-doom/assets/thermomix.webm
originalSource: https://www.reddit.com/r/itrunsdoom/comments/by5x1n/oc_made_a_thermomix_clone_run_doom_with_a_friend/
source: Siphonay - Made a Thermomix clone run Doom with a friend
maxWidth: 30%
---


---
layout: asset-with-source
videoPath: /pages/1-wtf-is-doom/assets/preg.webm
originalSource: https://www.youtube.com/watch?v=V1gcoyo5Ssk
source: Nev's Tech Bits - @Foon Got Doom Running On A Pregnancy Tester
maxWidth: 90%
---

---
layout: full
---
<img absolute class="bottom-0 left-10"  src="/pages/1-wtf-is-doom/assets/doom_github_source_only.png" w-150/>
<img v-click  :initial="{ x: 50 }" :enter="{ x: 0 }" absolute class="bottom-0 right-10"  src="/pages/1-wtf-is-doom/assets/doom_github_about.png" h-100/>

<style>
.slidev-layout {
    position: relative;
    padding: 0;
}
</style>
