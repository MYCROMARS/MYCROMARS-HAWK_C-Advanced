// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/loop_g.h"

// LOOP G

// Main function
void loop_g(void)
{
    // Output
    printf("### Loop G: while loop: 9x two int ###\n\n");

    // Create
    int x, y;

    // Assign
    x = y = 0;
    
    // While loop
    while(y<=9)
    {
        printf("x= %d y= %d\n", x, y);
        x++;
        y++;
    }
} 