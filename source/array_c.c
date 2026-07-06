// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/array_c.h"

// ARRAY C

// Main function
void array_c(void)
{
    // Output
    printf("### Array C: Input value's 1...7 ###\n\n");
    printf("Value input 1...7:\n");

    // Create
    float value[7];
    int x;

    // For loop
    for(x=0; x<7; x++)
    {
        // Output
        printf("Input #%d: ", x+1);

        // Input
        scanf("%f", &value[x]);
    }

    // Output
    puts("\nValue output 1...7:");

    // For loop
    for(x=0; x<7; x++)
        // Output
        printf("Output #%d %.2f\n", x+1, value[x]);
} 