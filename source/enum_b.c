// Integrate libraries direct:
// #include <stdio.h>
// #include "../header/enum_b.h"

// ENUM B

// Main function
void enum_b(void)
{
    // Output
    printf("\n### ENUM B: Pass value ###\n\n");

    // Create Enum list (identifier)
    enum LIST {
        WATCH = 2, 
        CANDIES = 4, 
        BOTTLE = 0,
        NEXT      // starts counting
    }ITEM;

    // Output
    printf("WATCH: %d\n", WATCH);       // 2
    printf("CANDIES: %d\n", CANDIES);   // 4
    printf("BOTTLE: %d\n", BOTTLE);     // 0
    printf("NEXT: %d\n\n", NEXT);       // 1

    // Assign
    ITEM = WATCH;

    // Output
    printf("ITEM WATCH: %d\n", ITEM);   // 2

    // Assign
    ITEM = CANDIES;

    // Output
    printf("ITEM CANDYS: %d\n", ITEM);  // 4
    
    // Assign
    ITEM = BOTTLE;

    // Output
    printf("ITEM BOTTLE: %d\n", ITEM);  // 0
    
    // Assign
    ITEM = NEXT;

    // Output
    printf("ITEM NEXT: %d\n\n", ITEM);  // 1 
}