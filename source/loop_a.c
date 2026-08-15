// Integrate libraries direct:
// #include <stdio.h>
// #include "../header/loop_a.h"

// LOOP A

// Main function
void loop_a(void)
{
    // Output
    printf("### LOOP A: Do while loop ###\n\n");

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