#include <stdio.h>
#include <stdlib.h>

enum status {UNKNOWN, OPTION, INPUT, OUTPUT} stt;

struct string_dictionary {
	stt key;
	char* value;
}

int main(int argc, char** argv) {
	enum status cmdstt = UNKNOWN;
	struct string_dictionary args[argc];
	int numof_inputfile = 0;
	int numof_outputfile = 0;
	for (int i = 1; i < argc; ++i) {
		args[i].value = argv[i];
		switch (argv[i]) {
			case "-i":
				cmdstt = INPUT;
				break;
			case "-o":
				cmdstt = OUTPUT;
				break;
			default:
				args[i].key = cmdstt;
				switch (cmdstt) {
					case INPUT:
						++numof_inputfile;
						break;
					case OUTPUT:
						++numof_outputfile;
						break;
				}
		}
	}
	FILE* ifp[numof_inputfile];
	FILE* ofp[numof_outputfile];
	return 0;
}
