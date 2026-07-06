// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/structure_f.h"

// Structure F

// Main function
void structure_f(void)
{
    // Output
    printf("### Structure F: copy structure ###\n\n");
    
    // Structure
    struct house_f1 {
        // Create
        short int value;
    };
    
    // Structure directory (declaration)
    struct house_f1 fh1_apartment_1, fh1_apartment_2;
    
    // Assign
    fh1_apartment_1.value = 7;
    fh1_apartment_2.value = 0;
    
    // Output
    printf("House_1:\n");
    printf("Apartment 1, value:\t %d\n", fh1_apartment_1.value);
    printf("Apartment 2, value:\t %d\n\n", fh1_apartment_2.value);
    
    // Copy struct
    printf("Copy Structure\n");
    fh1_apartment_2 = fh1_apartment_1;
    
    // Output
    printf("Apartment 2, value:\t %d\n", fh1_apartment_2.value);
} 