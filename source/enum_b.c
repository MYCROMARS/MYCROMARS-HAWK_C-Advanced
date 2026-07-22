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
    enum LIST {
        WATCH = 2, 
        CANDIES = 4, 
        BOTTLE = 0,
        NEXT      // startet weiterzählung nach 0
    }ITEM;

     // Output
    printf("WATCH: %d\n", WATCH);       // 2
    printf("CANDIES: %d\n", CANDIES);   // 4
    printf("BOTTLE: %d\n", BOTTLE);     // 0
    printf("NEXT: %d\n\n", NEXT);       // 1

    // Assign
    ITEM = WATCH;
    printf("ITEM WATCH: %d\n", ITEM);     // 2

    // Assign
    ITEM = CANDIES;
    printf("ITEM CANDYS: %d\n", ITEM);    // 4

    // Assign
    ITEM = BOTTLE;
    printf("ITEM BOTTLE: %d\n", ITEM);    // 0

    // Assign
    ITEM = NEXT;
    printf("ITEM NEXT: %d\n\n", ITEM);    // 1 
}