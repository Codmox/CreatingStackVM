#include "../include/virtualMachine.h"

void init_vm(VM *vm, const int *program, int program_size){

}

int fetch(VM *vm) {
    
}

bool underflow(VM *vm){
    
}

bool overflow(VM *vm){
    
}

bool validRegister(VM *vm, int reg){
    
}

void eval(VM *vm, int instr) {
    switch (instr) {
        case HLT:{
            
        }
        case PSH: {
            
        }
        case POP: {
            
        }
        case ADD: {
            
        }
        case SET: {

        }
        case LOD: {
            
        }
        case PRN: {
            
        }
        default:
            printf("Unknown instruction %d\n", instr);
            vm->running = false;
            break;
    }
};

void run(VM *vm){
    while(vm->running){
        eval(vm, fetch(vm));
    }
}