// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/structure_h.h"

// Structure H

// Main function
void structure_h(void)
{
    // Output
    printf("### Structure H: short int's initialized with 0 ###\n\n");

    // Structure
    struct house_h1 {
        // Create
        short int room_1;
        short int room_2;
    };

    // Structure Directory (declaration), assign
    struct house_h1 hh1_apartment_1 = {0};

    // Output
    printf("Output:\n");
    printf("Apartment 1 room 1 = %d\n", hh1_apartment_1.room_1);
    printf("Apartment 1 room 2 = %d\n", hh1_apartment_1.room_2);
} 