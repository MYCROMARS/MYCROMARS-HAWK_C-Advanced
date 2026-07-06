// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/structure_g.h"

// Structure G

// Main function
void structure_g(void)
{
    // Output
    printf("### Structure G ###\n");
    printf("### short int, long int, pointer of structure variable, sizeof ###\n\n");
    
    // Structure
    struct house_g1 {
        // Create
        short int value_1;
        long int value_2;
    };

    // Structure directory (declaration)
    struct house_g1 gh1_apartment_1, *g_pointer_1;

    // Assign
    gh1_apartment_1.value_1 = 1;
    gh1_apartment_1.value_2 = 7;

    // Assign pointer
    g_pointer_1 = &gh1_apartment_1;

    // Output
    printf("House_1:\n");
    printf("Size of Apartment 1:\t\t %lu Bytes\n", sizeof(gh1_apartment_1));
    printf("Size of Apartment 1 value 1:\t %lu Bytes\n", sizeof(gh1_apartment_1.value_1));
    printf("Size of Apartment 1 value 2:\t %lu Bytes\n\n", sizeof(gh1_apartment_1.value_2));
    
    printf("Address Apartment 1: %p\n", &gh1_apartment_1);
    printf("Apartment 1 value 1: %hd\n", gh1_apartment_1.value_1);
    printf("Apartment 1 value 2: %ld\n\n", gh1_apartment_1.value_2);
    
    printf("Address Apartment 1 value 1: %p\n", &gh1_apartment_1.value_1);
    printf("Address Apartment 1 value 2: %p\n\n", &gh1_apartment_1.value_2);
    
    printf("Size of Pointer 1: %lu\n\n", sizeof(*g_pointer_1));
    
    printf("Address Pointer 1: %p\n\n", &g_pointer_1);
    
    printf("Pointer 1 value 1: %hd\n", g_pointer_1->value_1);
    printf("Pointer 1 value 2: %ld\n\n", g_pointer_1->value_2);
    
    printf("Address Pointer 1 value 1: %p\n", &g_pointer_1->value_1);
    printf("Address Pointer 1 value 2: %p\n", &g_pointer_1->value_2);
} 