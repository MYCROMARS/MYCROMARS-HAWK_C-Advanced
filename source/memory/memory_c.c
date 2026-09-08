// MEMORY C
#include <stdio.h>

// Main Function
void memory_c(void){
    // Output
    printf("### MEMORY C: Allocate Memory with calloc() ###\n\n");

    // Create & assign
    int a = 4;
    
    // Allocate 4 Address's to Pointer with the size of int
    int *pointer = (int *)calloc(a, sizeof(int));
    
    // Check
    if (pointer == NULL)
    {
        printf("Allocation Failed!\n");  
        //exit(0);
    }
    else {
        // Output
        printf("Memory is allocated successfully.\n\n");
        
        // Output
        printf("Value initialization with 0:\n");
        
        for (int i = 0; i < a; i++)
        {
            printf("Pointer %d: %d\n", i, pointer[i]);
        }

        // Assign value to Pointer
        pointer[0] = 1;
        pointer[1] = 2;
        pointer[2] = 3;
        pointer[3] = 4;
        
        // Output
        printf("\nValues assigned:\n");
        for (int i = 0; i < a; i++)
        {
            printf("Pointer %d: %d\n", i, pointer[i]);
        }
        
        printf("\nAddress of Pointer:     %p\n", &pointer);
        printf("Address of Pointer Var: %p\n\n", pointer);

        for (int i = 0; i < a; i++)
        {
            printf("Address of Pointer Var %d: %p\n", i, &pointer[i]);
        }
        
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