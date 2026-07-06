// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/array_d.h"

// ARRAY D

// Main function
void array_d(void)
{
    // Output
    printf("### Array D: Switch value 1 & 7 ###\n\n");

    // Create & assign
    int value[] = {1, 2, 3, 4, 5, 6, 7};

    // Create
    int storage;
    int x;

    // Output
    puts("Value 1...7:");

    // For loop
    for(x=0; x<7; x++)
        // Output
        printf("Value: %d\n", value[x]);

    // Output
    printf("\n");
    
    // switch: 1 & 7, array[0] = 1
    storage = value[6];
    value[6] = value[0];
    value[0] = storage;

    // Output
    puts("Result after switch:");

    // For loop
    for(x=0; x<7; x++)
        // Output
        printf("Result: %d\n", value[x]);
} 