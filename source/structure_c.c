// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/structure_c.h"

// Structure C

// Main function
void structure_c(void){
    // Output
    printf("### Structure C ###\n");
    printf("### 1. Structure with char array string ###\n");
    printf("### 2. Structure in structure ###\n\n");

    // Structure 1
    struct house_c1 {
        // Create
        char toy_1[15];
        char toy_2[15];
        char toy_3[15];

      // Structure Directory
    } ch1_apartment_1;
   
    // Assign
    strcpy(ch1_apartment_1.toy_1,"Ball");
    strcpy(ch1_apartment_1.toy_2,"Car");
    strcpy(ch1_apartment_1.toy_3,"Water gun");
    
    // Output
    printf("house 1, Apartment 1, toy 1: %s\n", ch1_apartment_1.toy_1);
    printf("house 1, Apartment 1, toy 2: %s\n", ch1_apartment_1.toy_2);
    printf("house 1, Apartment 1, toy 3: %s\n\n", ch1_apartment_1.toy_3);
    
    // Structure 2: Struckture in Structure
    struct house_c2 {
        // Create
        short int value_1;

        // Structure 1, Apartment 2: Directory (declaration)
        struct house_c1 ch1_apartment_2;

        // Structure 3
        struct house_c3 {
            // Create
            char toy_1[10];

          // Structure Directory (declaration)
        } ch3_apartment_1;

      // Structure directory (declaration)
    } ch2_apartment_1;
    
    // Assign
    ch2_apartment_1.value_1 = 7;
    
    // Assign
    strcpy(ch2_apartment_1.ch1_apartment_2.toy_1,"Football");
    strcpy(ch2_apartment_1.ch1_apartment_2.toy_2,"Electric Car");
    strcpy(ch2_apartment_1.ch1_apartment_2.toy_3,"Slingshot");
    
    // Assign
    strcpy(ch2_apartment_1.ch3_apartment_1.toy_1,"Doll");
    
    // Output
    printf("House 1, apartment 1, value 1: %d\n", ch2_apartment_1.value_1);
    
    printf("House 1, apartment 1, room 1, box 1, toy 1: %s.\n", ch2_apartment_1.ch1_apartment_2.toy_1);
    printf("House 1, apartment 1, room 1, box 1, toy 2: %s.\n", ch2_apartment_1.ch1_apartment_2.toy_2);
    printf("House 1, apartment 1, room 1, box 1, toy 3: %s.\n\n", ch2_apartment_1.ch1_apartment_2.toy_3);
    
    printf("House 1, apartment 1, room 2, box 1, toy 1: %s.\n", ch2_apartment_1.ch3_apartment_1.toy_1);
} 