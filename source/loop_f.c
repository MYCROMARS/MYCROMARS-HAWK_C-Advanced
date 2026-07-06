// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/loop_f.h"

// LOOP F

// Main function
void loop_f(void)
{
    // Output
    printf("### Loop F: For loop: 7x two int ###\n\n");

    // For loop
    for(int x=0, y=0; y<=7; x++, y++)
    {
        // Output
        printf("x= %d y= %d\n", x, y);
    }
}