---
layout: statement
---
<h1 class="doom-gradient">
vitesse write framebuffer > vitesse maj e-ink
</h1>


<img absolute class="bottom-0 right-0"  src="/pages/6-fps-and-dithering/assets/surpirsed.png" h-50/>


---
layout: default
---
# <span class="doom-gradient">Display mode rates</span>


<br/>
<br/>
<br/>
<br/>

# 8 bit mode : ~500-600ms
# 1 bit mode: ~125ms


---
src: /components/stream-on-term.md
---

---
layout: default
---
# <span class="doom-gradient">Dithering Error Diffusion</span>

<div class="flex w-full h-full items-center justify-center">
<img src="/pages/6-fps-and-dithering/assets/floyd-steinberg.png" h-90/>
</div>

---
layout: full
---

<div class="grid grid-flow-col auto-cols-max">
<DitheringDemo />
<img src="/pages/6-fps-and-dithering/assets/floyd-steinberg.png" h-50 m-10 mt-25/>
</div>

---
layout: center
---
<DitherImage :badge-text="'Original'" :image-url="'/pages/6-fps-and-dithering/assets/spongebob.png'"></DitherImage>

---
layout: center
---
<DitherImage :badge-text="'Greyscale'" :image-url="'/pages/6-fps-and-dithering/assets/spongebob.png'" :effect="'greyscale'"><</DitherImage>

---
layout: center
---
<DitherImage :badge-text="'1 bit (B/W)'" :image-url="'/pages/6-fps-and-dithering/assets/spongebob.png'" :effect="'bw'"></DitherImage>

---
layout: center
---
<DitherImage :badge-text="'1 Bit dithered'" :image-url="'/pages/6-fps-and-dithering/assets/spongebob.png'" :effect="'floyd-steinberg'"></DitherImage>

---
src: /components/stream-on-term.md
---
