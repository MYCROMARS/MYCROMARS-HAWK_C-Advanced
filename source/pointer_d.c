// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/pointer_d.h"

// POINTER D

// Main function
void pointer_d(int *pointer){

    // Output
    printf("### POINTER D: Address of int to function ###\n\n");
    printf("Pointer: %d\n", *pointer);

    // Assign
    *pointer = 0;

    // Output
    printf("Pointer reset: %d\n", *pointer);
} 