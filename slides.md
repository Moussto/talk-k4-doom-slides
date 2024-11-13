---
# You can also start simply with 'default'
theme: default
background: ./assets/img/doom_bg.png
# some information about your slides (markdown enabled)
title: K4 DOOM
titleTemplate: '%s'
monaco: false
layout: cover
# apply unocss classes to the current slide
# slide transition: https://sli.dev/guide/animations.html#slide-transitions
transition: slide-left
mdc: true
overviewSnapshots: true

fonts:
  sans: League Spartan
  mono: Fira Code

themeConfig:
  primary: '#5d8392'
---

<h1>UN PIXEL PUIS UN AUTRE</h1>
<span class="subtitle">Comment porter Doom sur kindle</span>

<style>
    h1 {
        font-weight: bold;
    }
    .subtitle {
        color: white;
        font-size: 20pt;
    }
</style>

---
src: ./pages/1-wtf-is-doom/wtf-is-doom.md
---

---
src: ./pages/2-ssh-and-hello-world-kindle/ssh-and-hello-world-kindle.md
---

---
src: ./pages/3-cross-compilation/cross-compilation.md
---

---
src: ./pages/4-doom-source-code/doom-source-code.md
---

---
src: ./pages/5-code-and-kindle-framebuffer/code-and-kindle-framebuffer.md
---

---
src: ./pages/6-fps-and-dithering/fps-and-dithering.md
---


