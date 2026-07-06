// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/structure_e.h"

// Structure E

// Main function
void structure_e(void)
{
    // Output
    printf("### Structure E: Structure & variable as array ###\n\n");
    
    // Structure
    struct house_e1 {
        // Create
        short int room_1[3];
    };

    // Structure Directory (declaration)
    struct house_e1 eh1_apartment_1[3];
    
    // Assign
    eh1_apartment_1[0].room_1[0] = 10;
    eh1_apartment_1[0].room_1[1] = 20;
    eh1_apartment_1[0].room_1[2] = 30;

    eh1_apartment_1[1].room_1[0] = 100;
    eh1_apartment_1[1].room_1[1] = 200;
    eh1_apartment_1[1].room_1[2] = 300;

    eh1_apartment_1[2].room_1[0] = 1000;
    eh1_apartment_1[2].room_1[1] = 2000;
    eh1_apartment_1[2].room_1[2] = 3000;
   
    // Output
    printf("House 1:\n");
    printf("Apartment 1, room 1 value:\t %d\n", eh1_apartment_1[0].room_1[0]);
    printf("Apartment 1, room 2 value:\t %d\n", eh1_apartment_1[0].room_1[1]);
    printf("Apartment 1, room 3 value:\t %d\n\n", eh1_apartment_1[0].room_1[2]);
    
    printf("Apartment 2, room 1 value:\t %d\n", eh1_apartment_1[1].room_1[0]);
    printf("Apartment 2, room 2 value:\t %d\n", eh1_apartment_1[1].room_1[1]);
    printf("Apartment 2, room 3 value:\t %d\n\n", eh1_apartment_1[1].room_1[2]);
    
    printf("Apartment 3, room 1 value:\t %d\n", eh1_apartment_1[2].room_1[0]);
    printf("Apartment 3, room 2 value:\t %d\n", eh1_apartment_1[2].room_1[1]);
    printf("Apartment 3, room 3 value:\t %d\n", eh1_apartment_1[2].room_1[2]);
} 