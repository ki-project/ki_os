CC = gcc
AS = /usr/bin/as
NASM = nasm

.phony: all

all: boot link

boot: asm kinit pic term

asm: boot.asm cli.asm enterProtectedMode.asm exitProtectedMode.asm checkA20.asm enable_A20.asm

kinit: kinit.c kinit.h ln_kinit

pic: pic_setup.c

term: term_opts.c

link: boot
	$(CC) -o bootsect.bin boot.o cli.o
	$(CC) -o boot.bin lkinit.c.o pic_setup.c.o term_opts.c.o cli.asm.o enterProtectedMode.asm.o exitProtectedMode.asm.o checkA20.asm.o enable_A20.asm.o

ln_kinit: kinit.c kinit.h
	$(CC) -o lkinit.o kinit.o kinit.h.gch

boot.asm:
	$(AS) boot.asm -o boot.bin

*.asm:
	$(NASM) $(1) -o $(1).o

*.c:
	$(CC) $(1) -o $(1).o