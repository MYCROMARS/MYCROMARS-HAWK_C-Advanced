// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/loop_a.h"

// LOOP A

// Main function
void loop_a(void)
{
    // Output
    printf("### Loop A: While loop 1...12 ###\n\n");

    // Assign
    int value = 1;

    // While Loop
    while(value <= DOZEN)
    {
        // Output
        printf("value: %d\n", value);

        // Assign
        value++;
    }
}