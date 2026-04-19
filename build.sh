#!/bin/bash
set -e

# 编译启动文件
gcc -ffreestanding -m64 -mno-red-zone -fno-stack-protector -Wall -nostdlib -c boot.S -o boot.o

# 编译内核代码
gcc -ffreestanding -m64 -mno-red-zone -fno-stack-protector -Wall -nostdlib -c kernel.c -o kernel.o

# 链接生成内核
ld -T kernel.ld -nostdlib -o domicro-kernel.bin boot.o kernel.o

echo "✅ 编译完成！内核文件：domicro-kernel.bin"
