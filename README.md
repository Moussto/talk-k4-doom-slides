<p align="center">
  <img width="1018" height="368" alt="Screenshot 2025-07-12 at 17 20 01" src="https://github.com/user-attachments/assets/d6708847-c0b0-4cc7-b9fa-e3c886ece1f1" />
</p>
<p align="center">
  <em>Slides & Notes from my talk on porting DOOM to the Kindle 4</em>
</p>

<p align="center">
  <a href="https://github.com/Moussto/k4-doom">
    <img src="https://img.shields.io/badge/Project-K4--Doom--talk-informational?style=for-the-badge&logo=doom&logoColor=white&color=E7352C" alt="K4 DOOM Project Badge" />
  </a>
  <a href="https://github.com/Moussto/talk-k4-doom-slides">
    <img src="https://img.shields.io/github/last-commit/Moussto/talk-k4-doom-slides?style=for-the-badge&color=brightgreen" alt="Last Commit Badge" />
  </a>
  <a href="https://github.com/Moussto/talk-k4-doom-slides">
    <img src="https://img.shields.io/badge/Slidev-3B8070?style=for-the-badge&logo=slidev&logoColor=white" alt="Slidev Badge" />
  </a>
</p>


<p align="center">
</p>

---

This repository contains slides and notes from my talk on porting DOOM to the Kindle 4.

Actual DOOM port on https://github.com/Moussto/k4-doom

---

## 📸 Demos & Replay

[demo.webm](https://github.com/user-attachments/assets/fde101e7-d3e2-4830-b719-76512cab9a0e)

<p align="center">
  <a href="https://www.youtube.com/watch?v=Cw-Ol-hzD1I">
    <img src="https://img.shields.io/badge/DevQuest replay-efbfb7?style=for-the-badge&logo=slidev&logoColor=white" alt="DevQuest 2025" />
  </a>

  <a href="https://www.youtube.com/watch?v=9hvCSK7c8s4">
    <img src="https://img.shields.io/badge/MIXIT replay-2c233d?style=for-the-badge&logo=slidev&logoColor=white" alt="MIXIT 2025" />
  </a>

</p>

---


## Run the slides


```shell
// Launch the slides
bun install && bun dev

// Use local zsh (or shell of choice) streamed with ttyd 
ttyd -W -p 8085 zsh 

```

## 🧪 Useful Commands for Kindle SSH 

> _Personal notes for reference during development._

```shell
// Get Kernel info
uname -a

// Run docker in k4-doom
docker run -it -v ./:/code ubuntu-with-build-essential bash

// cCmpile binary from simple gcc
gcc -o hello hello.c


// Display random output
dd if=/dev/urandom of=/dev/fb0 bs=600 count=800
echo 1 > /proc/eink_fb/update_display


// Display raw image buffer
dd if=./imageraw of=/dev/fb0 bs=600 count=800 && echo 1 > /proc/eink_fb/update_display


// Run k4-doom
./doom -episode 1 --mode greyscale

./doom -episode 1 --mode blackwhite 

./doom -episode 1
```
