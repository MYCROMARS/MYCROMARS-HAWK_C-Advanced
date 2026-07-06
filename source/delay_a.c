// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/delay_a.h"

// Delay A

// Main function 
void delay_a(double value_1)
{
    // Create & assign
    int menu = 0;
    double value_2 = 1;
    double step = 100;
    int counter = 1;
    int multiplier = 10000;

    // Output
    printf("Multiplier: %.d\n", multiplier);

    // Assigne
    value_1 *= multiplier;

    // Output
    printf("Delay size: %.0f\n\n", value_1);

    // *--- MENU ---*
    // Output
    printf("Press: (0) EXIT | (1) START\n");
    printf("Your Input: ");

    // Input
    scanf("%d", &menu);

    // Output: line break
    printf("\n");

    // Conditional statement
    if (menu == 1){
        // Output
        printf("*** DELAY START ***\n");

        // While loop: Timer
        while (value_2 < value_1){
            value_2++;

            // Print every Step: 100
            if (value_2 == counter * step)
            {
                printf("Delay: %f\n", value_2);
                counter++;
            }
        }
    }
    else if (menu == 0){
        // Output
        printf("### Exit ###\n");
    }
}