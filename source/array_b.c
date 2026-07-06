// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/array_b.h"

// ARRAY B

// Main function
void array_b(void)
{
    // Output
    printf("### Array B: Two-dimensional ###\n\n");
    printf("Value [4]][4]: {{1, 2, 3, 4},{10, 20, 30, 40},{100 200, 300, 400},{1000, 2000, 3000,4000}}\n\n");

    // Create & assign
    int value[ArraySize_b][ArraySize_b] = {{1,2,3,4},{10, 20, 30, 40},{100, 200, 300, 400},{1000,2000, 3000, 4000}};

    // Output
    printf("1. column\n");
    printf("Value [0][0]: %d\n", value[0][0]);
    printf("Value [0][1]: %d\n", value[0][1]);
    printf("Value [0][2]: %d\n", value[0][2]);
    printf("Value [0][3]: %d\n\n", value[0][3]);

    printf("2. column\n");
    printf("Value [1][0]: %d\n", value[1][0]);
    printf("Value [1][1]: %d\n", value[1][1]);
    printf("Value [1][2]: %d\n", value[1][2]);
    printf("Value [1][3]: %d\n\n", value[1][3]);

    printf("3. column\n");
    printf("Value [2][0]: %d\n", value[2][0]);
    printf("Value [2][1]: %d\n", value[2][1]);
    printf("Value [2][2]: %d\n", value[2][2]);
    printf("Value [2][3]: %d\n\n", value[2][3]);
    
    printf("4. column\n");
    printf("Value [3][0]: %d\n", value[3][0]);
    printf("Value [3][1]: %d\n", value[3][1]);
    printf("Value [3][2]: %d\n", value[3][2]);
    printf("Value [3][3]: %d\n\n", value[3][3]);

    printf("Multiply Array\n\n");

    // Assign: Multiply
    value[0][0] *= 2;
    value[0][1] *= 2;
    value[0][2] *= 2;
    value[0][3] *= 2;

    // Output
    printf("Value [0][0]*2: %d\n", value[0][0]);
    printf("Value [0][1]*2: %d\n", value[0][1]);
    printf("Value [0][2]*2: %d\n", value[0][2]);
    printf("Value [0][3]*2: %d\n", value[0][3]);
} 