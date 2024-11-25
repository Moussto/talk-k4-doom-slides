---
layout: two-cols
---

# <span class="doom-gradient">Framebuffer</span> `/dev/fb0`

<img v-click height="300" src="/pages/5-code-and-kindle-framebuffer/assets/k4-resolution.png">


::right::
<br />
<br />
<br /><br />

<v-clicks>

## Chaque pixel:
<br />

- ### 8 bit encoded
<br />

- ### ~~50~~ 256 nuances de gris possibles

<eight-bit-color-details />

<br />

- ### Raw binary into `/dev/fb0`


</v-clicks>

<style>
img {
    height: 400px;
}
</style>


---
src: /components/stream-on-term.md
---
<!-- dd if=./imageraw of=/dev/fb0 bs=600 count=800  echo 1 > /proc/eink_fb/update_display -->


---
layout: default
---
# color to gresycale -> latex ->  fb0 -> update display

show dg frame code, 

how to push that shit in fb0, 
but before, 
need to apply greyscale conversion with formula

$$
I_{\text{gray}} = 0.2989 \cdot \textcolor{red}{R} + 0.5870 \cdot \textcolor{green}{G} + 0.1140 \cdot \textcolor{blue}{B}
$$

<style>
.katex {
font-size: 2rem
}
</style>

---
layout: center
---
# Lets code the inputs, easy stuff, reverse mapping
show /input and how to lock the file

---
layout: center
---
# Demo ? c'est de la merde pwoin pwoin pwoin
