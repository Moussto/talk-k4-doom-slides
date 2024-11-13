---
layout: section
---
DOOM

--- 
layout: full
---
<SlidevVideo autoplay autoreset="slide">
  <source src="/pages/1-wtf-is-doom/assets/doom_gameplay.mp4" type="video/mp4" />
</SlidevVideo>



---
layout: full
---
Timeline





---
layout: full
---
<div class="container">
    <div class="calc"><img border="rounded" src="/pages/1-wtf-is-doom/assets/calculator.gif" alt=""></div>
    <div class="osci" >
        <SlidevVideo autoplay autoreset="slide" border="rounded" v-click>
            <source src="/pages/1-wtf-is-doom/assets/oscilloscope.webm" type="video/webm" />
        </SlidevVideo>
    </div>
    <div class="thermo">        
        <SlidevVideo autoplay autoreset="slide"  border="rounded" v-click>
            <source src="/pages/1-wtf-is-doom/assets/thermomix.webm" type="video/webm" />
        </SlidevVideo>
    </div>
    <div class="preg">
        <SlidevVideo autoplay autoreset="slide" border="rounded"  v-click>
            <source src="/pages/1-wtf-is-doom/assets/preg.webm" width="480px" type="video/webm" />
        </SlidevVideo>
    </div>
</div>

<style>
.container {  
  height: 100%;
  display: grid;
  grid-template-columns: 1fr 1fr 1fr;
  grid-template-rows: 1fr 1fr 1fr;
  gap: 15px 15px;
  grid-auto-flow: row;
  grid-template-areas:
    "calc osci thermo"
    "calc osci thermo"
    "preg preg thermo";
}

.thermo { grid-area: thermo; }
.preg { grid-area: preg; }
.calc { grid-area: calc; padding-top: 20px}
.osci { grid-area: osci; }

</style>

---
src: /components/stream-on-term.md
---


