// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/loop_a.h"

// LOOP A

// Main function
void loop_a(void)
{
    // Output
    printf("\n### Loop A: Do while loop ###\n\n");

    // Create & assign
    int value = 1;

    // Do while Loop
    do 
    {
        // Output
        printf("value: %d\n", value);

        // Assign
        value++;
    } while(value < 11);
}