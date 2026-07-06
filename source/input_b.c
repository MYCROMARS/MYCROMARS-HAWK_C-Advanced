// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/input_b.h"

// Input A

// Create & assign
char value_2[50];

// Catch invalid input
void scanString(void){
    scanf("%s", &value_2[0]);

    // Test
    //printf("b: %s \n", value_2);
}

// Main function
void input_b(void)
{
    // Output
    printf("### INPUT B ###\n\n");

    // Create
    int value_1;

    // Jump mark: start
    start:

    // Output
    printf("Input a number: ");

    // Conditional statement
    if (scanf("%d", &value_1)) {
        // Output
        printf("Your input was: %d\n", value_1);
        printf("Input is correct.\n");
    }
    else{
        // Output
        printf("Input is not a number!\n\n");

        // Test
        //printf("\nYour input: %d\n", value_1);

        // Function: Catch invalid input
        scanString();
        
        // Jump to start
        goto start;
    }
}