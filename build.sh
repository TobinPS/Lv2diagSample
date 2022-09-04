mkdir objs
ppu-gcc  -x assembler-with-cpp -mhard-float -fmodulo-sched -ffunction-sections -fdata-sections -mcpu=cell -mregnames -D__ASSEMBLY__ -Wa,-mcell -c crt/crt0.S -o objs/crt0.o
ppu-gcc  -x assembler-with-cpp -mhard-float -fmodulo-sched -ffunction-sections -fdata-sections -mcpu=cell -mregnames -D__ASSEMBLY__ -Wa,-mcell -c crt/lv2-crti.S -o objs/lv2-crti.o
ppu-gcc -s source/*.c crt/crt1.c objs/*.o -I $PSL1GHT/ppu/include/ -nodefaultlibs -nostdlib -T crt/lv2.ld -o Lv2diag.elf
scetool -0 SELF -1 TRUE -s FALSE -2 04 -3 10700003FD000001 -4 01000002 -5 APP -6 0003004000000000 -A 0004100000000000 -8 4000000000000000000000000000000000000000000000000000000000000000 -e Lv2diag.elf Lv2diag.self