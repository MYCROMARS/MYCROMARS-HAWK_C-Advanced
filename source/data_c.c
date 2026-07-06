// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include <stdlib.h>
// #include "../header/data_c.h"

// Data C

// Main function
void data_c(void)
{
    // Output
    printf("### DATE C: File open for reading integer. ###\n\n");
    
    // Create & assign
    int value_1 = 0;
    int readCount = 0;

    // Create
    char text[100];
    
    // Create a pointer for the file data: need <stdio.h> 
    FILE *read;
    
    // Open file
    read = fopen("save.dat", "r");
    
    // You could activate one of the following code, and deactivate all others:
    
    // Conditional statement: Read Numbers with: fscanf() 
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
        
        // While loop
        while (fscanf(read, "%d", &value_1) !=EOF)
        {
            // Assign: +1
            readCount++;
        }

        // Output
        printf("read value 1: %d\n", value_1);
        printf("read count: %d\n", readCount);

        // close
        fclose(read);
        
        // Output
        puts("File closed.");
    }
    
    /*
    // Conditional statement: Read string with: fgetc()
    if (read != NULL)
    {
        // Output
        printf("!! successful !!\n");

        // While loop
        while ((text[readCount] = fgetc(read)) != EOF)
        {
            // Output
            putchar(text[readCount]);

            // Assign: +1
            readCount++;
        }
    
        // close 
        fclose(read);
    
        // Output not correct
        printf("\nRead value: %s\n\n", text);

    } else printf("! error !\n");
    */


   /*
    // Conditional statement: Read string with: fscanf()
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
        
        // While loop
        while (fscanf(read, "%s", &text[0]) !=EOF)
        {
            // Assign: +1
            readCount++;
        }
        
        // Output
        printf("read text: %s\n", text);
        printf("read count: %d\n", readCount);
        
        // close
        fclose(read);
        
        // Output
        puts("File closed\n");
    }
    */
} 