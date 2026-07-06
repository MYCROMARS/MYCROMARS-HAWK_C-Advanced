// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/pointer_f.h"

// POINTER F

// Main function
void pointer_f(int *pointer)
{
    // Output
    printf("Pointer: %d\n", *pointer);

    // Assign
    *pointer = 0;
    
    // Output
    printf("Pointer reset: %d\n", *pointer);
} 