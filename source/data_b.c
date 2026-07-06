// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include <stdlib.h>
// #include "../header/data_b.h"

// Data B

// Main function
void data_b(void)
{
    // Output
    printf("### DATE B: File open/create for writing/overwriting. ###\n\n");
    
    // Create & assign
    int value_1 = 100;
    
    // Create a pointer for the file data: need <stdio.h> 
    FILE *save;
    
    // Open file
    save = fopen("save.dat", "w");

    // Conditional statement
    if(save == NULL)
    {
        // Output
        puts("! error !");
        
        // Exit: need <stdlib.h> 
        exit (EXIT_FAILURE);
    }
    else{
        
        // save
        fprintf(save, "%d", value_1);

        // Output
        puts("! successful !");
        
        // close
        fclose(save);
        
        // Output
        puts("File closed.");
    }
} 