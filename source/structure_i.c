// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/structure_i.h"

// Structure I

// Typedef
typedef struct house_i2 {
    // Create
    int xx;
    int yy;
    
    // Structure Datatype
} ih2_datatype;

// Function: Structure directory
void print_i1(ih2_datatype ih2_apartment_1){
    // Output
    printf("value xx: %d\n", ih2_apartment_1.xx);
    printf("value yy: %d\n", ih2_apartment_1.yy);
}

// Function: Structure directory pointer
void del(ih2_datatype *ih2_pointer_1){
    // Assign
    ih2_pointer_1->xx = 0;
    ih2_pointer_1->yy = 0;
}

// Main function
void structure_i(void)
{
    // Output
    printf("### Structure I: with typedef ###\n\n");
    printf("Structure 1\n");

    // Typedef Structure
    typedef struct house_ih1 {
        // Create
        int x;
        int y;

        // Structure Datatype
    } ih1_datatype;

    // 1. Structure, directory (declaration), assign
    ih1_datatype ih1_apartment_1 = {1, 0};

    // Output
    printf("value x: %d\n", ih1_apartment_1.x);
    printf("value y: %d\n\n", ih1_apartment_1.y);

    // Structure directory (declaration) pointer
    ih1_datatype *ih1_pointer_1;

    // Assign
    ih1_pointer_1 = &ih1_apartment_1;

    ih1_pointer_1->x = 0;
    ih1_pointer_1->y = 1;

    // Output
    printf("Change value with pointer\n");
    printf("value x: %d\n", ih1_apartment_1.x);
    printf("value y: %d\n\n\n", ih1_apartment_1.y);

    printf("Structure 2\n");

    // 2. Structur, directory (declaration), assign
    ih2_datatype ih2_apartment_1 = {1, 0};

    // Function
    print_i1(ih2_apartment_1);

    // Assign
    ih2_apartment_1.xx = 0;
    ih2_apartment_1.yy = 1;

    // Output
    printf("\nChange value\n");

    // Function
    print_i1(ih2_apartment_1);

    // Function
    del(&ih2_apartment_1);

    // Output
    printf("\nChange value\n");

    // Function
    print_i1(ih2_apartment_1);
}