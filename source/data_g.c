// if it's not working acivate this (on macOS): 
// #include <stdio.h>
// #include <stdlib.h>
// #include "../header/data_g.h"

// Data G

// Main function
void data_g(void)
{
    // Output
    printf("### DATE A: File open for write and reading int arrays. ###\n\n");
    
    // Create & assign
    int value_1[] = {100, 700};
    int value_2[] = {1000, 7000};
    
    // Create a pointer for the file data: need <stdio.h> 
    FILE *save;
    
    // File open
    save = fopen("save.dat", "w");
    
    if(save == NULL)
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
        
        // save
        fprintf(save, "%d %d\n%d %d", value_1[0], value_1[1], value_2[0], value_2[1]);
        
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
    
    // File open
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
        puts("!! successful !!.");
        
        // While loop: read
        while (fscanf(read, "%d%d\n%d%d", &value_3[readCount], &value_3[readCount+1], &value_4[readCount], &value_4[readCount+1]) !=EOF)
        {
            readCount++;
        }
        
        // Output
        printf("read value 3: %d %d\n", value_3[0], value_3[1]);
        printf("read value 4: %d %d\n", value_4[0], value_4[1]);
        printf("read count: %d\n", readCount);
        
        // close
        fclose(read);
        
        // Output
        puts("File closed.");
    }
}