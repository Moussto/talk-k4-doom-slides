---
layout: layout-with-sound
useLayout: center
image: /pages/3-cross-compilation/assets/sped_up.gif
audioSourcePath: /pages/3-cross-compilation/assets/requiem_d_minor_7.mp3
preload: true
---

<div class="flex w-full h-full flex-col items-center justify-center">
    <h1 class="doom-gradient" v-motion :initial="{ opacity: 0, scale: 0.6 }" :enter="{ opacity: 1, scale: 1 }" :delay="500" :duration="9000">CROSS COMPILATION</h1>
</div>
<SlidevVideo absolute timestamp='12' class="bottom-0 left-0" autoplay autoreset="slide" width="300px" v-motion :initial="{ opacity: 0 }" :enter="{ opacity:1, transition: {duration: 4000}}">
    <source src="/pages/3-cross-compilation/assets/willem_meme.webm" type="video/webm" />
</SlidevVideo>

<style>
h1 {
  letter-spacing: 2px;
}
</style>

---
layout: center
---

<img src="/pages/3-cross-compilation/assets/initial.png" width="800" />

---
layout: center
---

<img src="/pages/3-cross-compilation/assets/mac-arm.png" width="500" />

---
layout: statement
---

<h1 class="doom-gradient">Crosstool-NG can build all these kinds of toolchains, or is aiming at it, anyway</h1>
<h6>- crosstool-ng official doc</h6>

---
layout: default
---

# <span class="doom-gradient">Toolchain</span> <code class='title-code' >arm-cortex_a8-linux-gnueabi-gcc</code>

<br/>

<!--
1 -> 4
-->

## <span :class="{ 'is-invalid': $clicks >= 4 }"> <CrossIcon v-if="$clicks >= 4" class='cross-icon'/> Step I : Installer crosstool-NG sur macOS</span>

<div v-if="$clicks < 4" v-motion :initial="{ x: 0 }" :leave="{ x: 50 }">
    <br/>
    <div v-click="[1, 4]"><h3>&nbsp&nbsp&nbsp&nbsp<code>brew install</code> beaucoup de trop de packages</h3></div>
    <br/>
    <div v-click="[2, 4]"><h3>&nbsp&nbsp&nbsp&nbsp Monter un disque virtuel entier sensible a la casse pour crosstool-NG &nbsp <img src="/pages/3-cross-compilation/assets/eyesshaking.gif" width="30" class="inline" /></h3></div> 
    <br/>
    <div v-click="[3, 4]"><h3>&nbsp&nbsp&nbsp&nbsp J'ai failli briquer mon Mac </h3></div>
</div>

<br/>

<!--
5 -> 9
-->

## <span :class="{ 'is-done': $clicks >= 9 }" v-click="5"> <CheckIcon v-if="$clicks >= 9" class='check-icon'/> Step I : Installer crosstool-NG sur Ubuntu (Docker) </span>

<div v-if="$clicks >= 5 && $clicks < 9" v-motion :initial="{ x: 0 }" :leave="{ x: 50 }">
    <br/>
    <div v-click="[6, 9]"><h3>&nbsp&nbsp&nbsp&nbsp Installer crosstool-NG sur Ubuntu</h3></div>
    <br/>
    <div v-click="[7, 9]"><h3>&nbsp&nbsp&nbsp&nbsp Configurer la toolchain arm-cortex_a8-linux-gnueabi-gcc 🛠</h3></div> 
    <div v-click="[7, 9]" w-100 mx-7>

|              |                  |     |            |                          |
| ------------ | ---------------- | --- | ---------- | ------------------------ |
| Architecture | <kbd>Armv7</kbd> |     | C lib      | <kbd>glibc</kbd>         |
| Compiler     | <kbd>gcc</kbd>   |     | CC version | <kbd>linaro 4.17</kbd>   |
| Interface    | <kbd>EABI</kbd>  |     | Endianness | <kbd>Little endian</kbd> |

</div>
</div>

<br/>

<img  v-click="[8, 9]" v-motion :initial="{ x: 100 }" :enter="{ x: 0 }" :leave="{ x: 100 }" absolute class="bottom-15 right-0" src="/pages/3-cross-compilation/assets/crosstool-ng-menu.png">

<!--
10 -> 12
-->

## <span :class="{ 'is-done': $clicks >= 12 }" v-click="10"> <CheckIcon v-if="$clicks >= 12" class='check-icon'/> Step II : Générer la toolchain</span>

<div v-if="$clicks >= 10 && $clicks < 13" v-motion :initial="{ x: 0 }" :leave="{ x: 50 }">
    <br/>
    <div v-click="[11, 12]">
```shell{2}
[INFO ]  Finalizing the toolchain directory: done in 7.09s (at 35:29)
[INFO ]  Build completed at 20241024.190213 (elapsed: 35:28.74)
[INFO ]  Finishing installation...
```
        <h3>&nbsp&nbsp&nbsp&nbsp Attendre 35 minutes </h3>

</div>
</div>

---
layout: center
---

<img src="/pages/3-cross-compilation/assets/final-overview.png" />
<img  v-click v-motion :initial="{ x: 100 }" :enter="{ x: 0 }" :leave="{ x: 100 }" absolute class="-bottom-7 right-0" w-65 src="/pages/3-cross-compilation/assets/pedro-overengineer.gif">

<!--
Hello world
-->

---
src: /components/terminal-only.md
---
