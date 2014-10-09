#include <stdio.h>

typedef int Opcode;
enum {
	EXIT=-1,
	NONE,
	INC,
	DEC,
	PUSH,
	POP,
	ADDS,
	MULS,
};

int main(int argc, char *argv[]) {
	int regi = 0, stack=0;
	Opcode ops[] = {INC, DEC, DEC, PUSH, INC, INC, INC, MULS, ADDS, EXIT};

	int i;
	for (i = 0; ops[i] != EXIT; i++) {
		switch (ops[i]) {
			case INC: regi++; break;
			case DEC: regi--; break;
			case PUSH: stack = regi; break;
			case POP: regi = stack; break;	
			case ADDS: regi += stack; break;	
			case MULS: regi *= stack; break;	
		}
	}

	printf("regi: %d\n", regi);
	printf("stack: %d\n", stack);
	return 0;
}

