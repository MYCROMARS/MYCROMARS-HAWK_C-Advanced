// If it's not working acivate this (on macOS):
// #include <stdio.h>
// #include <stdlib.h>

// Main Menu 0: EXIT 

// Main function
void mainMenu_0(int *m)
{
    // Output
    printf("\n### Program END ###\n");
    printf("*******************\n\n");

    // Exit
    exit(EXIT_SUCCESS);

    // Further exit options:
    // exit(1);
    // exit(EXIT_FAILURE);

    // With a return value—not used here:
    // return EXIT_FAILURE;
    // return EXIT_SUCCESS;
}