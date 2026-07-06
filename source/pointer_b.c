// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/pointer_b.h"

// POINTER B

// Main function
void pointer_b(void)
{
    // Output
    printf("### POINTER B: Pointer of array ###\n\n");

    // Create and Assign: Array 
    int value[7] = {1, 2, 3, 4, 5, 6, 7};

    // Create: Pointer
    int *pointer;

    // Assign: Address of array to pointer
    pointer = value;

    // Output
    printf("value[7]: 1, 2, 3, 4, 5, 6, 7\n");
    printf("Pointer = value\n\n");
    
    printf("Pointer 0: %d\n", *(pointer+0));
    printf("Pointer 1: %d\n", *(pointer+1));
    printf("Pointer 2: %d\n", *(pointer+2));
    printf("Pointer 3: %d\n", *(pointer+3));
    printf("Pointer 4: %d\n", *(pointer+4));
    printf("Pointer 5: %d\n", *(pointer+5));
    printf("Pointer 6: %d\n", *(pointer+6));
}