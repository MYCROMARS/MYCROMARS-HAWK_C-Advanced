// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/malloc_a.h"

// Malloc A

// Main function
void malloc_a(void)
{
    // Output
    printf("### Malloc A: with pointer ###\n\n");

    // This is not necessary, but it is written in some books:
    //void* malloc(size_t size);
    
    // Create
    int *pointer;
    
    // Assign: Storeage reservation
    pointer = malloc(7 * sizeof(int));
    
    // Output
    printf("sizeof int: %ld\n", sizeof(int));
    printf("Size of *pointer: %lu\n", sizeof(*pointer));
    printf("7 * sizeof int: %ld\n", 7 * sizeof(int));
    printf("Bytes reserved: %ld \n", 7 * sizeof(int));
} 

