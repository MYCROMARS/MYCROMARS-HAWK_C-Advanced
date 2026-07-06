// if it's not working activate this (on macOS):
// #include <stdio.h>
// #include "../header/calculation_a.h"

// useful:
// #include <math.h>
// #include <time.h>

// WindowsOS:
// #include <synchapi.h>

// Calculation A

// Main function
void calculation_a(void)
{
    // Output
    printf("\n### CALCULATION A: a + b = c ###\n");

    // Create & assign (initialize)
    int value_1 = 0;
    int value_2 = 0;
    int sum = 0;

    // Output
    printf("Input value 1: ");

    // Input
    scanf("%d", &value_1);

    // Output
    printf("Input value 2: ");

    // Input
    scanf("%d", &value_2);

    // Calculation
    sum = (value_1 + value_2);

    // Output
    printf("Sum: %d\n", sum);
}