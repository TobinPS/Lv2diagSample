# LV2Diag sample

This is a simple LV2Diag sample. It is built using only system calls because no C runtime is available (unless you initialize it) or ship one statically with Lv2diag.

It will blink your LED yellow for 30 seconds and shut off.

To build, you must have ps3toolchain, PSL1GHT, and scetool.

Simply run build.sh to build.

## Running
Put your PS3 into factory service mode, and place the .self into a USB named exactly `Lv2diag.self`. The USB must be plugged into what maps to dev_usb000.

If you successfully run it, you will see the blinking LED, which will run for 30 seconds before powering off the PS3. Below is the LV2 output as well.


```
lv2(2): 
lv2(2): ###
lv2(2): ### Factory diagnostic mode
lv2(2): ###
lv2(2): 
lv2(2): mounting the USB mass storage (usb000) : ..........OK
lv2(2): creating the initial system process : OK
lv2(2): Spawned LV2Diag
lv2(2): Exiting...
lv2(2): 
lv2(2): Prepare to shutdown .......
lv2(2): Going to shutdown.

```