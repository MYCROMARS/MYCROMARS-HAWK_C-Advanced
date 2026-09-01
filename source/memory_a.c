// MALLOC
#include <stdio.h>

// Main Function
void memory_a(void){
    // Output
    printf("### MEMORY A: Allocate Memory with malloc() ###\n\n");

    // Create & assign
    int a = 3;
    
    // Allocate 3 Address's to Pointer with the size of int
    int *pointer = (int *)malloc(sizeof(int)*a);
    
    // Check
    if (pointer == NULL)
    {
        printf("Allocation Failed!\n");  
        //exit(0);
    }
    else {
        // Output
        printf("Memory is allocated successfully.\n\n");
        
        // Assign value to Pointer
        pointer[0] = 1;
        pointer[1] = 2;
        pointer[2] = 3;
        
        // Output
        printf("Values:\n");
        printf("Pointer 0: %d\n", pointer[0]);
        printf("Pointer 1: %d\n", pointer[1]);
        printf("Pointer 2: %d\n", pointer[2]);
        
        printf("\nAddress of Pointer:     %p\n", &pointer);
        printf("Address of Pointer Var: %p\n\n", pointer);
        
        printf("Address of Pointer Var 0: %p\n", &pointer[0]);
        printf("Address of Pointer Var 1: %p\n", &pointer[1]);
        printf("Address of Pointer Var 2: %p\n", &pointer[2]);
        
        // Free memory
        free(pointer);
        
        // Assign
        pointer = NULL;

        // Output
        printf("\nMemory is free now.\n");
        printf("Pointer Var is set to NULL.\n\n");

        printf("Address of Pointer:     %p\n", &pointer);
        printf("Address of Pointer Var: %p\n\n", pointer);
    }
}