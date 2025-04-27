---
layout: image-right
image: /pages/2-ssh-and-hello-world-kindle/assets/kindle_model.png
backgroundSize: contain
clicks: 3
---

<div class="flex w-full h-full flex-col items-center justify-center">
    <h1><span class="doom-gradient">Kindle</span> 4th Gen</h1>
    <p v-motion v-click :initial="{ y: -50 }" :enter="{ y: 0 }">(qui date un peu...)</p>
    <div v-motion v-click :initial="{ y: 500 }" :enter="{ y: 0, transition: { delay: 0, duration: 400 } }" class="tab">
        <div v-if="$clicks > 1 && $clicks < 3">
            <SlidevVideo  autoplay autoreset="slide" border="rounded">
                <source src="/pages/2-ssh-and-hello-world-kindle/assets/eink.webm" type="video/webm" />
            </SlidevVideo>
        </div>
        <div v-if="$clicks > 2" v-click="[3, 4]" v-motion :initial="{ y: 500 }" :enter="{ y: 0, transition: { delay: 0, duration: 400 } }">

|         |     |     |     |                                                                             |
| ------- | --- | --- | --- | --------------------------------------------------------------------------- |
| Release |     |     |     | <kbd>September 2011</kbd>                                                   |
| Display |     |     |     | <kbd>6"</kbd> <kbd>600x800p</kbd> <kbd>8 bit Greyscale</kbd>                |
| OS      |     |     |     | <kbd>Linux (Amazon)</kbd>                                                   |
| Memory  |     |     |     | <kbd>256 MB DDR</kbd>                                                       |
| CPU     |     |     |     | <kbd>ARM Cortex-A8</kbd><kbd>800MHz</kbd> <br/><kbd>Freescale i.MX508</kbd> |

</div>
</div>
</div>

---
layout: default
---

# <div class="doom-gradient">Jailbreak TL;DR</div>

<br/>

<!--
1 -> 7
-->

<img  v-if="$clicks < 2" v-click="[1, 2]" v-motion :initial="{ x: 100 }" :enter="{ x: 0 }" :leave="{ x: 100 }" absolute class="rounded bottom-5 right-0" src="/pages/2-ssh-and-hello-world-kindle/assets/mobilereads.png" w-150>

## <span v-click="[2, 7]" :class="{ 'is-done': $clicks >= 7 }"> <CheckIcon v-if="$clicks >= 7" class='check-icon'/> Step I : Se faire passer pour un développeur Amazon </span>

<div v-if="$clicks < 7" v-motion :initial="{ x: 0 }" :leave="{ x: 50 }">
    <br/>
    <div v-click="[3, 7]"><h3>&nbsp&nbsp&nbsp&nbsp <code>Kindle4NTHacking.tar.gz</code>  Fake Dev Key + Diagnostic mode + Script ✨</h3></div>
    <br/>
    <div v-click="[4, 7]"><h3>&nbsp&nbsp&nbsp&nbsp <kbd>CTRL + C</kbd> <kbd>CTRL + V</kbd> via USB </h3></div> 
    <br/>
    <div v-click="[5, 7]"><h3>&nbsp&nbsp&nbsp&nbsp On Kindle <code>Menu -> Settings -> Menu -> Restart</code> </h3></div>
</div>

<br/>

<img  v-click="[6, 7]" v-motion :initial="{ x: 100 }" :enter="{ x: 0 }" :leave="{ x: 100 }" absolute class="rounded bottom-5 right-0" src="/pages/2-ssh-and-hello-world-kindle/assets/real_jailbreak.jpg" w-90>

<!--
8 -> 11
-->

## <span  v-click="8" :class="{ 'is-done': $clicks >= 11 }" > <CheckIcon v-if="$clicks >= 11" class='check-icon'/> Step II : Connexion SSH </span>

<div v-if="$clicks >= 9 && $clicks < 12" v-motion :initial="{ x: 0 }">
    <br/>
    <div v-click="[9, 11]"><h3>&nbsp&nbsp&nbsp&nbsp Package USBNetwork <code>kindle-usbnetwork-0.57.N-k4.zip</code></h3></div>
    <br/>
    <div v-click="[10, 11]">
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

## <span v-click="12" :class="{ 'is-done': $clicks >= 14 }"  > <CheckIcon v-if="$clicks >= 14" class='check-icon'/> Step III : Virer Amazon de mon Kindle</span>

<div v-if="$clicks >= 13 && $clicks <= 14" v-motion :initial="{ x: 0 }">
    <br/>
    <div v-click="[13, 14]"><h3>&nbsp&nbsp&nbsp&nbsp No Internet updates:  <code>/etc/uks</code> into <code>/etc/uks.disabled</code></h3></div>
    <br/>
</div>

<img v-motion :initial="{ x: 50 }" :enter="{ x: 0 }" v-click="15" absolute class="bottom-0 right-0" src="/pages/2-ssh-and-hello-world-kindle/assets/lil_durk_meme.png" w-90>

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
   printf("Can I kick it ?");
   printf("Yes you can");
   return 0;
}
```

<br />

```shell
gcc -o hello hello.c
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
<h1><span class="doom-gradient">Kindle</span> 4th Gen</h1>

|         |     |     |     |                                                                                                                                                                                                                  |
| ------- | --- | --- | --- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Release |     |     |     | <kbd>September 2011</kbd>                                                                                                                                                                                        |
| Display |     |     |     | <kbd>6"</kbd> <kbd>600x800p</kbd> <kbd>8 bit Greyscale</kbd>                                                                                                                                                     |
| OS      |     |     |     | <kbd>Linux (Amazon)</kbd>                                                                                                                                                                                        |
| Memory  |     |     |     | <kbd>256 MB DDR</kbd>                                                                                                                                                                                            |
| CPU     |     |     |     | <span v-mark.circle="{ color: '#F73201', strokeWidth:2, padding:[15, 15, 15, 15], iterations: 4, animationDuration: 1200}"> <kbd>ARM Cortex-A8</kbd> </span> <kbd>800MHz</kbd> <br/><kbd>Freescale i.MX508</kbd> |

</div>
