#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "../include/assembler.h"

InstructionMapping instruction_table[] = {
    {"PSH", PSH},
    {"ADD", ADD},
    {"POP", POP},
    {"SET", SET},
    {"HLT", HLT}
};

InstructionMapping register_table[] = {
    {"A", A},
    {"B", B},
    {"C", C},
    {"D", D},
    {"E", E},
    {"F", F},
    {"IP", IP},
    {"SP", SP}
};

int find_opcode(const char *name) {
    
}

int find_register(const char *name) {
    
}

int assemble_file(const char *filename, int *program) {
    
}

