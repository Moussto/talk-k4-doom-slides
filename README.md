Useful commands if your stupid ass forgets

```
// Get Kernel info
uname -a

// Run docker in k4-doom
docker run -it -v ./:/code ubuntu-with-build-essential bash

// compile binary from simple gcc
gcc -o hello hello.c


// random output
dd if=/dev/urandom of=/dev/fb0 bs=600 count=800
echo 1 > /proc/eink_fb/update_display


// raw image
dd if=./imageraw of=/dev/fb0 bs=600 count=800 && echo 1 > /proc/eink_fb/update_display


// Run k4-doom
./doom -episode 1 --mode greyscale

./doom -episode 1 --mode blackwhite 

./doom -episode 1

```
