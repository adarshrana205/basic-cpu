// copyright 2017 Philip Bohun
#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

enum instr {
	CLF,
	CMP, CMPI, CMPF, CMPFI,
	MOV, MOVF,
	STI, STF, LDI, LDF,
	LII, LIF,
	PSH, POP,
	PSHF, POPF,
	INC, DEC,
	ADD, SUB, MUL, DIV,
	ADDF, SUBF, MULF, DIVF,
	JLZ, JGZ, JEZ, JNZ, JMP,
	SHL, SHR,
	BAND, BOR, BNOT, BXOR,
	LAND, LOR, LNOT,
	HLT,
	NUM_INSTRUCTIONS
};

#endif // INSTRUCTIONS_H
