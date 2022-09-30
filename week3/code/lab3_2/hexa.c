#include <stdio.h>

int main() {
    int instruction[8] = {
        1,
        0,
    };
    int opcode = 0, multiplyer = 1;

    int arrSize = sizeof(instruction) / sizeof(int);

    for (int i = arrSize - 1; i >= 0; i--) {
        opcode += multiplyer * instruction[i];
        multiplyer *= 2;
    }

    printf("Instruction = ");
    for (int i = 0; i < arrSize; i++) {
        printf("%d", instruction[i]);
    }
    printf("\nOpcode = 0x%x\n", opcode);
}