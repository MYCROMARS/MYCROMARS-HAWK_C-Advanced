// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include <stdlib.h>
// #include "../header/data_e.h"

// Data E

// Main function
void data_e(void)
{
    // Output
    printf("### DATE E: File open for reading 2 strings. ###\n\n");
    
    // Create & assign
    char text_1[] = "Hello";
    char text_2[] = "World";
    
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
        fprintf(save, "%s\n%s", text_1, text_2);
        
        // close
        fclose(save);
        
        // Output
        puts("File closed.\n");
    } 

    // ### Read file

    // Create
    char text_3[20];
    char text_4[20];

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
        puts("! successful !");
        
        // While loop: read
        while (fscanf(read, "%s\n %s", &text_3[0], &text_4[0]) !=EOF)
        {
            // Assign: +1
            readCount++;
        }
        
        // Output
        printf("read value 3: %s\n", text_3);
        printf("read value 4: %s\n", text_4);
        printf("readCount: %d\n", readCount);
        
        // close
        fclose(read);
        
        // Output
        puts("File closed.");
    }
}
