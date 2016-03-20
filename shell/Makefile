CC = gcc
SRC = "shell.c shell.h _start_ki.c"
OBJ = "shell.o shell.h.gch _start_ki.o"
EXE = shell.x
CFLAGS = "-O3 -ffreestanding -Werror"

.phony: all

all: src ln

src: shell.c shell.h _start_ki.c

*.c:
	$(CC) $_ $(CFLAGS)

*.h:
	$(CC) $_ $(CFLAGS)

ln: src
	$(CC) -o $(EXE) $(OBJ)