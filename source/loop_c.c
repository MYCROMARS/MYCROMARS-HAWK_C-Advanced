// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/loop_c.h"

// LOOP C

// Main function
void loop_c(void)
{
    printf("### Loop C: For loop, sunday's in july 2025 ###\n\n");

    // Create & assign: 1. Sunday: 6. July 2025
    int sunday = 6;

    // Create
    int value_1;

    // For loop
    for(value_1=1; sunday<32; value_1++, sunday+=7){
        // Output
        printf("%d. Sunday: %d\n", value_1, sunday);
    }
}