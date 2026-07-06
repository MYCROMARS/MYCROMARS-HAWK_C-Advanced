// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/array_a.h"

// ARRAY A

// Main function
void array_a(void)
{
    // Output
    printf("### Array A: Multiply Value's 1...7 ###\n\n");
    printf("Value [7]: 1, 2, 3, 4, 5, 6, 7\n\n");

    // Create & assign: Array
    int value[ArraySize_a] = {1, 2, 3, 4, 5, 6, 7};

    // Assign: Multiply
    value[0] *= 2;
    value[1] *= 2;
    value[2] *= 2;
    value[3] *= 2;
    value[4] *= 2;
    value[5] *= 2;
    value[6] *= 2;

    // Output
    printf("Value 0; 1*2= %d\n", value[0]);
    printf("Value 1; 2*2= %d\n", value[1]);
    printf("Value 2; 3*2= %d\n", value[2]);
    printf("Value 3; 4*2= %d\n", value[3]);
    printf("Value 4; 5*2= %d\n", value[4]);
    printf("Value 5; 6*2= %d\n", value[5]);
    printf("Value 6; 7*2= %d\n", value[6]);
} 