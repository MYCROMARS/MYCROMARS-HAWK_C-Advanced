// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/loop_b.h"

// LOOP B

// Main function
void loop_b(void)
{
    // Output
    printf("### Loop B ###\n\n");

    // Create & assign
    int value = 1;

    // Do while Loop
    while (value <= 11)
    {
        // Output
        printf("value: %d\n", value);
        
        // Assign
        value++;

        if (value >= 5)
            continue;
            printf("++\n");
    
    } 
} 