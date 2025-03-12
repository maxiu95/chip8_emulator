#ifndef CHIP8MEMORY_H
#define CHIP8MEMORY_H

#include "config.h"

// DEFINING MEMORY STRUCTURE OF CHIP8

// array to portray chip8 memory
struct chip8_memory {
	unsigned char memory[CHIP8_MEMORY_SIZE];
};

// setter and getter
void chip8_memory_set(struct chip8_memory* memory, int index, unsigned char value);
unsigned char chip8_memory_get(struct chip8_memory* memory, int index);

#endif