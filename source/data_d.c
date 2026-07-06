// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include <stdlib.h>
// #include "../header/data_d.h"

// Data D

// Main function
void data_d(void)
{
    // Output
    printf("### DATE D: File open for write, reading. ###\n\n");
    
    // Create & assign
    char text_1[] = "Hello";
    
    // Create a pointer for the file data: need <stdio.h> 
    FILE *save;
    
    // open
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
        // Output
        puts("! successful !");
        
        // save
        fprintf(save, "%s", text_1);
        
        // Output
        printf("text 1: %s\n", text_1);
        
        // close
        fclose(save);
        
        // Output
        puts("File closed.\n");
    } 

    // ### Read file

    // Create
    char text_2[20];
    
    // Create & assign
    int readCount = 0;
    
    // for testing, assign
    // strcpy(text_2,"Hello");
    
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
        while (fscanf(read, "%s", &text_2[0]) !=EOF)
        {
            // Assign: +1
            readCount++;
        }

        // Output
        printf("read char 0: %c\n", text_2[0]);
        printf("read text: %s\n", text_2);
        printf("readCount: %d\n", readCount);
        
        // close
        fclose(read);
        
        // Output
        puts("File closed.");
    }
}