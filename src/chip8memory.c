#include <assert.h>
#include "chip8memory.h"

// FUNCTIONS TO DEAL WITH MEMORY OF CHIP8 DEVICE

// check memory value is in bounds
static void chip8_memory_in_bounds(int index) {
	assert(index >=0 && index < CHIP8_MEMORY_SIZE);
}

// assign value to memory index
void chip8_memory_set(struct chip8_memory* memory, int index, unsigned char value){
	chip8_memory_in_bounds(index);
	memory->memory[index] = value;
}

// return value from memory via index
unsigned char chip8_memory_get(struct chip8_memory* memory, int index){
	return memory->memory[index];
}