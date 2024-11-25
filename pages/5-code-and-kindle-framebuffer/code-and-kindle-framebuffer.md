---
layout: default
---
# Framebuffer  `/dev/fb0`


---
layout: center
---
# Play with fb0 and dd
dd if=/dev/urandom of=/dev/fb0 bs=600 count=800
echo 1 > /proc/eink_fb/update_display

---
layout: center
---
# dd image prepared en avance
dd if=./imageraw of=/dev/fb0 bs=600 count=800  echo 1 > /proc/eink_fb/update_display

---
layout: center
---
# Lets code the inputs, easy stuff

---
layout: center
---
# color to gresycale -> latex ->  fb0 -> update display

---
layout: center
---
# Demo ? c'est de la merde pwoin pwoin pwoin

