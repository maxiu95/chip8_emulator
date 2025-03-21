#ifndef CHIP8_H
#define CHIP8_H

#include "config.h"
#include "chip8memory.h"
#include "chip8registers.h"

// DEFINING CHIP8 DEVICE AND INTERNALS

struct chip8{
	struct chip8_memory memory;
	struct chip8_registers registers;
};

#endif