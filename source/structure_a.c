// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/structure_a.h"

// Structure A

// Main function
void structure_a(void)
{
    // Output
    printf("### Structure A: with int ###\n\n");

    // 1. Structure: Method 1
    struct house_a1 {
        short int window;
        short int door;
    };

    // Structure Directory (declaration)
    struct house_a1 ha1_apartment_1;
    struct house_a1 ha1_apartment_2;

    // other spelling:
    // struct house1 h1_apartment_1, h1_apartment_2;
    
    // Assign
    ha1_apartment_1.window = 5;
    ha1_apartment_1.door = 2;
    ha1_apartment_2.window = 7;
    ha1_apartment_2.door = 3;

    // Output:
    printf("House 1:\n");
    printf("The Apartment 1 has %d Windows, and %d Doors.\n", ha1_apartment_1.window, ha1_apartment_1.door);
    printf("The Apartment 2 has %d Windows, and %d Doors.\n\n", ha1_apartment_2.window,ha1_apartment_2.door);
    
    // 2. Structure: other spelling
    struct house_a2 {
        // Create
        int window;
        int door;
        
        // Structure Directory (declaration)
    } ha2_apartment_1, ha2_apartment_2;

    // Assign
    ha2_apartment_1.window = 5;
    ha2_apartment_1.door = 3;
    ha2_apartment_2.window = 10;
    ha2_apartment_2.door = 5;

    // Output:
    printf("House 2:\n");
    printf("The Apartment 1 has %d Windows, and %d Doors.\n", ha2_apartment_1.window, ha2_apartment_1.door);
    printf("The Apartment 2 has %d Windows, and %d Doors.\n", ha2_apartment_2.window,ha2_apartment_2.door);
}
