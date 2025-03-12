INCLUDES= -I ./include
FLAGS= -g

OBJECTS= ./build/chip8memory.o
all: ${OBJECTS}
	gcc ${FLAGS} ${INCLUDES} ./src/main.c ${OBJECTS} -L ./lib -l SDL3 -arch x86_64 -o ./bin/main

./build/chip8memory.o:./src/chip8memory.c
	gcc ${FLAGS} ${INCLUDES} ./src/chip8memory.c -c -o ./build/chip8memory.o

clean:
	rm -rf build/*