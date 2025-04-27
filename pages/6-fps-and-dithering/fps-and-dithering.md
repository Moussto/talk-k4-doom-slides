---
layout: statement
---

<h1 class="doom-gradient">
fast writing > slow screen
</h1>

<img absolute class="bottom-0 right-0"  src="/pages/6-fps-and-dithering/assets/surpirsed.png" h-50/>

---
layout: default
clicks: 5
---

# <span class="doom-gradient">Display mode rates</span>

<br/>

<div v-click>

## Greyscale 8 bit mode <span v-click=5>**~600ms**</span>

$$
\textcolor{Grey}{I_{\text{gray}}} = 0.2989 \cdot \textcolor{red}{R} + 0.5870 \cdot \textcolor{green}{G} + 0.1140 \cdot \textcolor{blue}{B}
$$

</div>

<br />
<br />

<div v-click>

## B/W 1 bit mode <span v-click=5>**~125ms**</span>

</div>

<div v-click>
$$
\textcolor{Grey}{I_{\text{gray}}} = 0.2989 \cdot \textcolor{red}{R} + 0.5870 \cdot \textcolor{green}{G} + 0.1140 \cdot \textcolor{blue}{B}
$$
</div>

<div v-click>
$$
\textcolor{White}C_{\text{Black/White}} = 0 \longleftarrow \textcolor{Grey}{I_{\text{gray}}} \longrightarrow 255 
$$
</div>

<style>
.katex {
font-size: 2rem
}
</style>

---
src: /components/stream-on-term.md
---

---
layout: default
---

# <span class="doom-gradient">Error Diffusion Dithering</span>

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
