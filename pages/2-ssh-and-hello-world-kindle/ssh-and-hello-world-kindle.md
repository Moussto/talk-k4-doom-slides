---
layout: image-right
image: /pages/2-ssh-and-hello-world-kindle/assets/kindle_model.png
backgroundSize: contain
---
<div class="flex w-full h-full flex-col items-center justify-center">
    <h1>Kindle 4th Gen</h1>
    <p v-motion v-click  :initial="{ y: -50 }" :enter="{ y: 0 }">(qui date un peu...)</p>
    <div v-click>
    <div  v-if="$clicks > 1" v-motion :initial="{ y: 50 }" :enter="{ y: 0 }" class="tab">

|         |   |   |   |                                                                             |
|---------|---|---|---|-----------------------------------------------------------------------------|
| Release |   |   |   | <kbd>September 2011</kbd>                                                   |
| Display |   |   |   | <kbd>6"</kbd> <kbd>600x800p</kbd> <kbd>8 bit Greyscale</kbd>                |
| OS      |   |   |   | <kbd>Linux (Amazon)</kbd>                                                   |
| Memory  |   |   |   | <kbd>256 MB DDR</kbd>                                                       |
| CPU     |   |   |   | <kbd>ARM Cortex-A8</kbd><kbd>800MHz</kbd> <br/><kbd>Freescale i.MX508</kbd> |

</div>
</div>
</div>


---
layout: center
---
<img src="/pages/2-ssh-and-hello-world-kindle/assets/eink.gif">
<div class="asset-source" @click="window?.open('https://www.eink.com/tech/detail/How_it_works', '_blank')">Two Particle Ink System - E Ink Carta™</div>


---
layout: default
---
# <div class="doom-gradient">Jailbreak TL;DR</div>
<br/>

<!--
1 -> 5
-->

## <span :class="{ 'is-done': $clicks >= 5 }">  <CheckIcon v-if="$clicks >= 5" class='check-icon'/> Step I : Se faire passer pour un développeur Amazon  </span>
<div v-if="$clicks < 5" v-motion :initial="{ x: 0 }" :leave="{ x: 50 }">
    <br/>
    <div v-click="[1, 5]"><h3>&nbsp&nbsp&nbsp&nbsp <code>Kindle4NTHacking.tar.gz</code>  Fake Dev Key + Diagnostic mode + Script ✨</h3></div>
    <br/>
    <div v-click="[2, 5]"><h3>&nbsp&nbsp&nbsp&nbsp <kbd>CTRL + C</kbd> <kbd>CTRL + V</kbd> via USB </h3></div> 
    <br/>
    <div v-click="[3, 5]"><h3>&nbsp&nbsp&nbsp&nbsp On Kindle <code>Menu -> Settings -> Menu -> Restart</code> </h3></div>
</div>

<br/>

<img  v-click="[4, 5]" v-motion :initial="{ x: 100 }" :enter="{ x: 0 }" :leave="{ x: 100 }" absolute class="rounded bottom-5 right-0" src="/pages/2-ssh-and-hello-world-kindle/assets/real_jailbreak.jpg" w-90>

<!--
5 -> 8
-->

## <span :class="{ 'is-done': $clicks >= 8 }" v-click="5" >  <CheckIcon v-if="$clicks >= 8" class='check-icon'/> Step II : Connexion SSH </span>
<div v-if="$clicks >= 5 && $clicks < 8" v-motion :initial="{ x: 0 }">
    <br/>
    <div v-click="[6, 8]"><h3>&nbsp&nbsp&nbsp&nbsp Package USBNetwork <code>kindle-usbnetwork-0.57.N-k4.zip</code></h3></div>
    <br/>
    <div v-click="[7, 8]">
        <div ml-5 w-150>
```shell
#!/bin/sh
# NOTE: The K4 has a specific default
HOST_IP=192.168.15.201
KINDLE_IP=192.168.15.244
# Allow SSH over WiFi
# NOTE: If you set this to true, the SSHD *WILL* check your passwords!
K3_WIFI="false"
K3_WIFI_SSHD_ONLY="false"
```
        </div> 
    </div> 
</div>

<br/>

<!--
9 -> 15
-->
## <span :class="{ 'is-done': $clicks >= 10 }" v-click="8" >  <CheckIcon v-if="$clicks >= 10" class='check-icon'/> Step III : Virer Amazon de mon Kindle</span>
<div v-if="$clicks >= 8 && $clicks <= 10" v-motion :initial="{ x: 0 }">
    <br/>
    <div v-click="[9, 10]"><h3>&nbsp&nbsp&nbsp&nbsp No Internet updates:  <code>/etc/uks</code> into <code>/etc/uks.disabled</code></h3></div>
    <br/>
</div>


<img v-motion :initial="{ x: 50 }" :enter="{ x: 0 }" v-click="11" absolute class="bottom-0 right-0" src="/pages/2-ssh-and-hello-world-kindle/assets/lil_durk_meme.png" w-90>


---
src: /components/terminal-only.md
---

---
layout: default
---

<br />
<br />
<br />

```shell
touch ./hello.c
```
<br />


```c
#include <stdio.h>

int main() {
   printf("Yo la TZ");
   return 0;
}
```
<br />

```shell
gcc -o hello mysourcefile.c
```
---
src: /components/terminal-only.md
---

---
layout: image-right
image: /pages/2-ssh-and-hello-world-kindle/assets/kindle_model.png
backgroundSize: contain
---

<div class="flex w-full h-full flex-col items-center justify-center">
    <h1>Kindle 4th Gen</h1>

|         |   |   |   |                                                                                                                                                                                                                  |
|---------|---|---|---|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Release |   |   |   | <kbd>September 2011</kbd>                                                                                                                                                                                        |
| Display |   |   |   | <kbd>6"</kbd> <kbd>600x800p</kbd> <kbd>8 bit Greyscale</kbd>                                                                                                                                                     |
| OS      |   |   |   | <kbd>Linux (Amazon)</kbd>                                                                                                                                                                                        |
| Memory  |   |   |   | <kbd>256 MB DDR</kbd>                                                                                                                                                                                            |
| CPU     |   |   |   | <span v-mark.circle="{ color: '#F73201', strokeWidth:2, padding:[15, 15, 15, 15], iterations: 4, animationDuration: 1200}"> <kbd>ARM Cortex-A8</kbd> </span> <kbd>800MHz</kbd> <br/><kbd>Freescale i.MX508</kbd> |

</div>
