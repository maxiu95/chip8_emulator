#ifndef CHIP8REGISTERS_H
#define CHIP8REGISTERS_H

#include "config.h"

// a register is a storage region inside a processor outside of RAM. store temp information (about to use and faster than RAM)
struct chip8_registers {
	unsigned char V[CHIP8_TOTAL_DATA_REGISTERS]; // 16 8-bit registers assigned Vx- char is 1byte 
	unsigned short I; // 16-bit register to store memory addresses
	unsigned char delay_timer; // special purpose 8-bit registers
	unsigned char sound_timer;
	unsigned short PC; // program counter points to the current instruction running- address in memory of instruction to be executed
	unsigned char SP; // stack pointer points to current instruction in stack
};

#endif