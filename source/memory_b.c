// MALLOC
#include <stdio.h>

// Main Function
void memory_b(void){
    // Output
    printf("### MEMORY B: Re-allocation Memory with realloc() ###\n\n");

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
        


        // *** Re-allocation ***
        // Assign
        a = 5;

        // Re-allocate 5 Address's to Pointer
        pointer = (int *)realloc(pointer, sizeof(int)*a);

        // Check
        if (pointer == NULL)
        {
            printf("Re-allocation Failed!\n");  
            //exit(0);
        }
        else {
            // Output
            printf("\nMemory is Re-allocated successfully.\n\n");
            
            // Assign value 
            pointer[3] = 4;
            pointer[4] = 5;
            
            // Output
            printf("Values:\n");

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
        }

        // Free memory
        free(pointer);
    
        // Assign
        pointer = NULL;
       
        // Output
        printf("\nMemory is free now.\n");
        printf("Pointer Var is set to NULL.\n\n");

        // Output  
        printf("Address of Pointer:     %p\n", &pointer);
        printf("Address of Pointer Var: %p\n\n", pointer);
    }
}