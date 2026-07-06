// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include <stdlib.h>
// #include "../header/data_a.h"

// Data A

// Main function
void data_a(void)
{
    // Output
    printf("### DATE A: File open/create for writing to end of file. ###\n\n");
    
    // Create & assign
    int value_1 = 700;
    
    // Create a pointer for the file data: need <stdio.h> 
    FILE *save;
    
    // File open: The file will be created if it doesn’t exist.
    save = fopen("save.dat", "a");

    // Conditional statement
    if(save == NULL)
    {
        // Output
        puts("! error !");
        
        // Exit: need <stdlib.h> 
        exit (EXIT_FAILURE);
    }
    else
    {
        // save
        fprintf(save, "%d", value_1);

        // Output
        puts("! successful !\n");
        puts("The file was created, you can open it: save.dat\n");
        
        // close
        fclose(save);
        
        // Output
        puts("File closed.");
    }
}