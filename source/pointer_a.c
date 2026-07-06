// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/pointer_a.h"

// POINTER A

// Main function
void pointer_a(void) {
    printf("### POINTER A: Pointer of int ###\n\n");

    // create
    int value;

    // Assign
    value = 700;

    // Output
    printf("value: %d\n", value);
    printf("Size of value: %lu\n", sizeof(value));
    printf("address &value: %p\n\n", &value);

    // Pointer
    int *p;

    // Assign: Address of int to pointer
    p = &value;

    // Output
    printf("Address of int to pointer\n");
    printf("*p: %d\n", *p);
    printf("Size of *p: %lu\n", sizeof(*p));
    printf("address p: %p\n\n", p);

    // Assign: Change Pointer
    *p = 1000;
    
    // Output
    printf("change pointer\n");
    printf("*p: %d\n", *p);
    printf("value: %d\n", value);
} 