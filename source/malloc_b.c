// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include <stdlib.h>
// #include "../header/malloc_b.h"

// Malloc B

// function
int *startMalloc(unsigned int value) {

    // Create & assign: Malloc
    int *pointer = malloc(value*(sizeof(int)));

    // store some data, NULL need <stdio.h>
    if(pointer !=NULL) {

        // For loop
        for (unsigned int i=0; i<value; i++) {
            
            // Assign
            pointer[i] = i*i;
        }

        // Test pointer value
        //printf("pointer: %d\n", pointer);
        //printf("Address pointer: %d\n", &pointer);

        //printf("*pointer: %d\n", *pointer);
        //printf("pointer[0]: %d\n", pointer[0]);
        //printf("pointer[1]: %d\n", pointer[1]);
    }

    // Output
    printf("sizeof int: %ld\n", sizeof(int));
    printf("sizeof int * %d: %ld\n", value, value * sizeof(int));
    printf("Bytes reserved: %ld \n\n", value * sizeof(int));

    return pointer;
}

// Main function
void malloc_b(void)
{
    // Output
    printf("### Malloc B: with input ###\n\n");
    
    // Create & assign
    unsigned int value_1 = 0;
    
    // Output
    printf("How many int multiply: ");
    
    // Conditional statement: Input
    if (scanf("%u", &value_1) !=1) {
    
        // Output
        printf("! Error !\n\n");

        exit(EXIT_SUCCESS);
    }
    
    // Create & assign: Pointer: Function with transfer
    int *store = startMalloc(value_1);

    // Conditional statement
    if (store == NULL){

        // Output
        printf("! Error !\n");

        exit(EXIT_SUCCESS);
    }
    
    // Output
    printf("Output Data:\n");

    // For loop
    for (unsigned i=0; i<value_1; i++) {
    
        // Output
        printf("store[%u]: %u\n", i, store[i]);
    }
    
    // Conditional statement
    if (store != NULL) {
    
        // Clear memory
        free(store);

        printf("\nMemory cleared\n");
    }
}