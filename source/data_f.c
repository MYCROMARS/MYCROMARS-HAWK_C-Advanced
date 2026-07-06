// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include <stdlib.h>
// #include "../header/data_f.h"

// Data F

// Main function
void data_f(void)
{
    // Output
    printf("### DATE F: File open for write and reading int arrays. ###\n\n");
    
    // Create & assign
    int value_1[] = {10, 70};
    int value_2[] = {100, 700};
    
    // Create a pointer for the file data: need <stdio.h> 
    FILE *save;
    
    // File open
    save = fopen("save.dat", "w");
    
    if(save == NULL)
    {
        // Output
        puts("! Error !");
        
        // Exit: need <stdlib.h> 
        exit (EXIT_FAILURE);
    }
    else
    {
        // Output
        puts("!! successful !!");
        
        // save
        fprintf(save, "%d\n%d\n%d\n%d", value_1[0], value_1[1], value_2[0], value_2[1]);
        
        // close
        fclose(save);
        
        // Output
        puts("File closed.\n");
    } 

    // ### Read file

    // Create 
    int value_3[10];
    int value_4[10];

    // Create & assign
    int readCount = 0;
    
    // Create a pointer for the file data: need <stdio.h>
    FILE *read;
    
    // open
    read = fopen("save.dat", "r");
    
    // Conditional statement
    if(read == NULL)
    {
        // Output
        puts("! error !");
        
        // Exit: need <stdlib.h> 
        exit (EXIT_FAILURE);
    }
    else
    {
        // Output
        puts("!! successful !!");
        
        // While loop: read
        while (fscanf(read, "%d\n%d\n%d\n%d", &value_3[0], &value_3[1], &value_4[0], &value_4[1]) !=EOF)
        {
            readCount++;
        }
        
        // Output
        printf("read value: %d\n", value_3[0]);
        printf("read value: %d\n", value_3[1]);
        printf("read value: %d\n", value_4[0]);
        printf("read value: %d\n", value_4[1]);
        printf("read count: %d\n", readCount);
        
        // close
        fclose(read);
        
        // Output
        puts("File closed.");
    }
}