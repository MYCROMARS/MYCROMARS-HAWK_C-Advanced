// if it's not working activate this (on macOS):
// #include <stdio.h>
// #include "../header/enum_b.h"

// ENUM B

// Main function
void enum_b(void)
{
    // Output
    printf("\n### ENUM B ###\n");

    // Create Enum list (identifier)
    enum box {
        WATCH = 2, 
        CANDIES = 4, 
        BOTTLE = 0,
        NEXT      // startet weiterzählung nach 0
    }hold;

     // Output
    printf("WATCH: %d\n", WATCH);       // 2
    printf("CANDIES: %d\n", CANDIES);   // 4
    printf("BOTTLE: %d\n", BOTTLE);     // 0
    printf("NEXT: %d\n\n", NEXT);       // 1

    hold = WATCH;
    printf("hold WATCH: %d\n", hold);     // 2
    hold = CANDIES;
    printf("hold CANDYS: %d\n", hold);    // 4
    hold = BOTTLE;
    printf("hold BOTTLE: %d\n", hold);    // 0
    hold = NEXT;
    printf("hold NEXT: %d\n\n", hold);    // 1 
}