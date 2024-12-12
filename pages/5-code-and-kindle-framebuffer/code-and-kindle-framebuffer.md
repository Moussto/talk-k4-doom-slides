---
layout: two-cols
---

# <span class="doom-gradient">Framebuffer</span> <code class='title-code'>/dev/fb0</code>

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

- ### <span class="gidot-easter-egg" v-mark.strike-through="{ color: 'white', strokeWidth:1, iterations: 3, animationDuration: 4000, delay: 1500}" >50 Shades Of Grey</span>
- ### <span>256 nuances de gris possibles</span>

<eight-bit-color-details />

<br />

- ### Raw binary into `/dev/fb0`


</v-clicks>

<style>
@import url('https://fonts.googleapis.com/css2?family=GFS+Didot&display=swap');

img {
    height: 400px;
}

.gidot-easter-egg {
    font-size: 25px;
    font-family: "GFS Didot", serif;
    font-weight: 400;
    font-style: italic;
}
</style>


---
src: /components/stream-on-term.md
---
<!-- dd if=./imageraw of=/dev/fb0 bs=600 count=800  echo 1 > /proc/eink_fb/update_display -->

---
layout: center
---

<<< @/pages/5-code-and-kindle-framebuffer/assets/snippets/fb0.c c {all|1|3|6-8|10-16|20-26|all}

---
layout: default
---
# <span class="doom-gradient">Inputs</span> <code class='title-code'>/dev/input/event1</code>

<<< @/pages/5-code-and-kindle-framebuffer/assets/snippets/inputs.c c {all|1|3|5-12|13|18|21|all}

---
layout: default
---
# <span class="doom-gradient">Makefile</span>

<<< @/pages/5-code-and-kindle-framebuffer/assets/snippets/makef makefile {all|1|9|all}{maxHeight:'400px'}

---
src: /components/stream-on-term.md
---

