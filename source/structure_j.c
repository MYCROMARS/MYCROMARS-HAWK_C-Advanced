// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/structure_j.h"

// Structure J

// Typedef
typedef struct house_j1{
    // Create
    int value_1;
    int value_2;
    char text_1[14];

    // Structure Datatype
} jh1_datatype;

// Function: Structure directory (declaration)
void print_j1(jh1_datatype jh1_apartment_1)
{
    // Output
    printf("value_1: %d, value_2: %d, text: %s\n", jh1_apartment_1.value_1,
    jh1_apartment_1.value_2, jh1_apartment_1.text_1);
}

// Function 3: Structure directory (declaration)
void multiply_2(jh1_datatype ***pointer_3){
    // Assign
    (**pointer_3)->value_1 *= 10;
    (**pointer_3)->value_2 *= 10;
}

// Function 2: Structure directory (declaration)
void multiply_1(jh1_datatype **pointer_2)
{
    // Assign
    (*pointer_2)->value_1 *= 10;
    (*pointer_2)->value_2 *= 10;
    
    // Function: With transfer: Pointer 
    multiply_2(&pointer_2);
}

// Function 1: Structure directory (declaration)
void startFunction(jh1_datatype *pointer_1)
{
    // For Testing
    //pointer_1->value_1 = 5;
    //pointer_1->value_2 = 8;

    // Assign
    strcpy(pointer_1->text_1, "Doll");

    // Function: With transfer: Pointer 
    multiply_1(&pointer_1);
}

// Main function
void structure_j(void)
{
    // Output
    printf("### Structure J: with typedef, copy string ###\n\n");

    // Structure 1: directory (declaration), assign
    jh1_datatype jh1_apartment_1 = {1, 7, "Ball"};

    // Output:
    printf("Apartment 1:\n");

    // Function: With transfer: Structure
    print_j1(jh1_apartment_1);

    // Function: With transfer: Structure Address
    startFunction(&jh1_apartment_1);

    // Output:
    printf("\nApartment 1: with function multiply\n");

    // Function: With transfer: Structure
    print_j1(jh1_apartment_1);

    // Structure 2: Directory (declaration)
    jh1_datatype jh1_apartment_2;

    // Assign
    jh1_apartment_2.value_1 = 10;
    jh1_apartment_2.value_2 = 70;

    // Assign: need <string.h>
    strcpy(jh1_apartment_2.text_1, "Car");

    // Output:
    printf("\nApartment 2:\n");

    // Function: With transfer: Structure
    print_j1(jh1_apartment_2);
} 