// Integrate libraries direct:
// #include <stdio.h>
// #include "../header/enum_a.h"

// ENUM A

// Main function
void enum_a(void)
{
    // Output
    printf("\n### ENUM A: Enum List ###\n");

    // Create Enum list (identifier), Enumeration constants (int)
    enum LIST {
        LAPTOP, PEN, WALLET
    };

    // Create & assign (initialize)
    enum LIST ITEM = LAPTOP; 

    // Output
    printf("LAPTOP: %d\n", LAPTOP);     // 0
    printf("PEN: %d\n", PEN);           // 1
    printf("WALLET: %d\n\n", WALLET);   // 2

    printf("ITEM: %d\n\n", ITEM);       // 0
}