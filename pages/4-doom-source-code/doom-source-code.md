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
# TODO explanation doomgeneric

---
layout: default
---
# <code> doomgeneric_my-platform.c </code>
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
<div v-click>
<br>
<h2>Est-ce que c'est de la triche ?</h2>
</div>
</div>

---
layout: statement
---

<h1>Peut-être, mais je fais ce que je veux</h1>
<h6 v-click>- Moi</h6>

---
layout: statement
---

<h1>I'ma do what I want when I want</h1>
<h6 v-click>- Kendrick Lamar</h6>
