// if it's not working activate this (on macOS):
// #include <stdio.h>
// #include "../header/enum_a.h"

// ENUM A

// Main function
void enum_a(void)
{
    // Output
    printf("\n### ENUM A ###\n");

    // Create Enum list (identifier), Aufzählungskonstanten (int)
    enum box {
        LAPTOP, PEN, WALLET
    };

    // Create & assign (initialize)
    enum box hold = LAPTOP; 

    // Output
    printf("LAPTOP: %d\n", LAPTOP);        // 0
    printf("PEN: %d\n", PEN);              // 1
    printf("WALLET: %d\n\n", WALLET);        // 2

    printf("hold LAPTOP: %d\n\n", hold);   // 0
}