---
layout: two-cols
clicks: 8
---

# <div class="doom-gradient">Doom de Wish</div>

<br />
<br />

<v-clicks>

- <h1>Pas de son </h1>
- <h1> Monochrome </h1>
- <h1> Portrait mode </h1>
- <h1> ~ 10 fps </h1>

</v-clicks>

::right::

# <div class="doom-gradient" v-click=5>Mais...</div>

<br />
<br />

<v-clicks>

- <h1>Level up en C</h1>
- <h1>❤️ X-Compilation <sup>(c'est faux)</sup></h1>
- <h1>Coder avec des limitations</h1>
- <h1>Internet Culture</h1>

</v-clicks>

---
layout: two-cols
---

# <div class="doom-gradient">MOUSTAPHA AGACK</div>

<div class="flex flex-col h-full">

<div class="w-4/5 h-3/4">

##### _Smash my keyboard for a living—results vary, but sometimes cool stuff happens_

<br/>

##### Full Stack Engineer at <img src="./assets/zenika.png" width=65 pb-0.5 pl-1 pr-1 inline> and <img src="./assets/homeserve-inline.png" width=90 pl-1 pb-0.5 inline>

<br/>

<div class="grid grid-cols-2 pt-3">
  <div>

##### <logos-bluesky class="social-icon"/> moussto

##### <mdi-github class="social-icon"/> moussto

##### <logos-twitter class="social-icon"/> mousstoh

##### <logos-linkedin-icon class="social-icon"/> moustapha-agack

  </div>

  <div class="ml-15 text-center">
    <div class="magic-border"><img src="./assets/riviera-qr.png" width=125></div>
    <div class="mt-3">OpenFeedback</div>
  </div>

</div>

</div>

<div class="sources justify-self-end">

###### <streamline-computer-screen-1-screen-device-electronics-monitor-diplay-computer class="source-icon"/>[moussto/talk-k4-doom-slides](https://github.com/Moussto/talk-k4-doom-slides/)

###### <streamline-programming-script-file-code-1-code-files-angle-programming-file-bracket class="source-icon"/>[moussto/k4-doom](https://github.com/Moussto/k4-doom)

</div>

</div>
::right::

<div class="thanks" w-full h-full>

###### S/O <streamline-hearts-symbol />

|                                  |                                                                                                                                      |                                                                                |
| -------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------ | ------------------------------------------------------------------------------ |
| Game Engine Black Book DOOM      | [Fabien Sanglard](https://fabiensanglard.net/gebbdoom/)                                                                              | <streamline-interface-content-book-content-books-book-close/>                  |
| Kindle Developer's Corner        | [Mobilereads.com](https://www.mobileread.com/forums/forumdisplay.php?f=150)                                                          | <streamline-interface-layout-2-column-header-layout-layouts-masthead-sidebar/> |
| Doomgeneric                      | [ozkl/doomgeneric](https://github.com/ozkl/doomgeneric)                                                                              | <streamline-code-monitor-1 />                                                  |
| Toolchain Types                  | [Crosstool-NG](https://crosstool-ng.github.io/docs/toolchain-types/)                                                                 | <streamline-interface-file-text-text-common-file />                            |
| Kindle Hacks                     | [Sotiris Papatheodorou](https://git.sr.ht/~sotirisp/kindle-hacks)                                                                    | <streamline-code-monitor-1 />                                                  |
| Dithering Eleven Algorithms      | [Tanner Helland](https://tannerhelland.com/2012/12/28/dithering-eleven-algorithms-source-code.html)                                  | <streamline-interface-file-text-text-common-file />                            |
| Error Diffusion Dithering        | [Computerphile](https://www.youtube.com/watch?v=ico4fJfohMQ)                                                                         | <streamline-computer-logo-youtube-youtube-clip-social-video/>                  |
| Dithering for Eink Display Panel | [Daiyu Ko](https://community.nxp.com/t5/i-MX-Processors-Knowledge-Base/Dithering-Implementation-for-Eink-Display-Panel/ta-p/1100219) | <streamline-interface-layout-2-column-header-layout-layouts-masthead-sidebar/> |
| Zenika Friends 🙏🏽                |                                                                                                                                      |                                                                                |

<br/>
<br/>
<br/>
<br/>

<div class="justify-self-end">
    <PoweredBySlidev class="slidev-thanks"/>
</div>

</div>

<style>
.source-icon {
    height: 13px;
    width: 13px;
    margin-right: 10px;
}

.social-icon {
    height: 20px;
    width: 20px;
    margin-right: 10px;
    margin-top: 5px;
}

.thanks {
    font-size: 12px;
    border-radius: 16px;
    box-shadow: 0 4px 30px rgba(0, 0, 0, 0.1);
    backdrop-filter: blur(4.7px);
    -webkit-backdrop-filter: blur(4.7px);
    border: 1px solid rgba(255, 255, 255, 0.3);
    padding: 20px;
    background: linear-gradient(rgba(0, 0, 0, 0.8), rgba(0, 0, 0, 0.7), rgba(0, 0, 0, 0.6)), url("/assets/img/doom_bg.png");
    background-position: center top;
}

td {
    padding-top: 0.4rem;
    padding-bottom: 0.4rem;
}

</style>

---
layout: full
dragPos:
  square: 594,271,324,174
---

# <div class="doom-gradient">DIAGNOSTIC SLIDE</div>

<RenderWhen context="visible" class="stream-on-term-container">
    <StreamOnTerminal/>
</RenderWhen>

<br />

<AudioDiagnostic />

<style>
.stream-on-term-container {
    height: 50%;
}
</style>
