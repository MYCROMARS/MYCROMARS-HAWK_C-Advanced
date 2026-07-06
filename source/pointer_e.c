// If it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/pointer_e.h"

// POINTER E

// Main function
void pointer_e(int *pointer){

    // Output
    printf("### POINTER E: Address of pointer to function ###\n\n");
    printf("Pointer: %d\n", *pointer);

    // Assign
    *pointer = 0;

    // Output
    printf("Pointer reset: %d\n", *pointer);
} 