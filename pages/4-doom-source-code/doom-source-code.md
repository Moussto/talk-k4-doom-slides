---
layout: center
---
<img src="/pages/4-doom-source-code/assets/engine.png" width="750" />


---
layout: center
---
<img src="/pages/4-doom-source-code/assets/blackbook.png" width="600" />

---
layout: center
---
Image of WAD here + explnation od engine vs other wad games


---
layout: default
---

<div class="flex w-full  items-center justify-center">

<mdi-github class="github-icon"/>  [ozkl/doomgeneric](https://github.com/ozkl/doomgeneric)

</div>

<img absolute class="bottom-0 left-10"  src="/pages/4-doom-source-code/assets/doomgeneric_source.png" w-150/>
<img absolute class="bottom-0 right-10"  src="/pages/4-doom-source-code/assets/doomgeneric_about.png" h-100/>

<style>
a {
    font-size: 2rem
}

.github-icon {
    height: 30px;
    width: 30px;
    margin-right: 10px;
}
</style>

---
layout: default
---
# <code> doomgeneric_kindle.c </code>
<br />

<div class="w-full h-full flex  flex-col" >

````md magic-move
```c {all|1-2|4-5|7-8|10-11|13-14|all}
// Initialize your platfrom (create window, framebuffer, etc...)
void DG_Init() {}

// This is for setting the window title as Doom sets this from WAD file.
void DG_SetWindowTitle() {}

// Provide keyboard events
void DG_GetKey() {}

// Sleep in milliseconds.
void DG_SleepMs() {}

// Frame is ready in DG_ScreenBuffer. Copy it to your platform's screen.
void DG_DrawFrame() {}
```

```c
// Provide keyboard events
void DG_GetKey() {}

// Frame is ready in DG_ScreenBuffer. Copy it to your platform's screen.
void DG_DrawFrame() {}
```
````
<div v-click class="flex w-full h-2/3 items-center justify-center">
<br>
<h2>Est-ce que c'est de la triche ?</h2>
</div>
</div>

---
layout: statement
---

<h1 class="doom-gradient">Peut-être, mais je fais ce que je veux</h1>
<h6 v-click>- Moi</h6>
