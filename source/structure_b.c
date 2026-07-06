// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/structure_b.h"

// Structure B

// Main function
void structure_b(void){
    // Output
    printf("### Structure B: with short int, char & char array ###\n");

    // Structure
    struct house_b1 {
        // Create
        short int window;
        short int door;

        // Structure Directory, assign
    } hb1_apartment_1 = {4, 3}, hb1_apartment_2 = {7, 4};

    // Output
    printf("1. Apartment has %d Windows, and %d Doors.\n", hb1_apartment_1.window, hb1_apartment_1.door);
    printf("2. Apartment has %d Windows, and %d Doors.\n\n", hb1_apartment_2.window, hb1_apartment_2.door);
    
    // Structure: Char, Char Array
    struct house_b2 {
        // Create
        char x;
        char y[3]; // must be 1 character more than required
        char text_1[32];
        
        // Structure Directory (declaration)
    } hb2_apartment_1;
    
    // Assign
    hb2_apartment_1.x = 'B';
    hb2_apartment_1.y[0] = 'B';
    hb2_apartment_1.y[1] = 'C';
    
    strcpy(hb2_apartment_1.text_1,"Berlin City");
    
    // Output
    printf("Char x: %c\n", hb2_apartment_1.x); // B
    printf("Char y, Letter 1: %c\n", hb2_apartment_1.y[0]); // B
    printf("Char y, Letter 2: %c\n", hb2_apartment_1.y[1]); // C
    
    // Assign
    strcpy(hb2_apartment_1.y,"XY");
    
    // Output
    printf("1. Char Array string: %s\n", hb2_apartment_1.y);
    printf("2. Char Array String: %s\n", hb2_apartment_1.text_1);
}