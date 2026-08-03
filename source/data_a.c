// if it's not working acivate this:
#include <stdio.h>
#include <stdlib.h>
// #include "../header/data_a.h"

// Windows
#ifdef _WIN32 
    #include <direct.h>
    #define CURRENT_path _getcwd
#else // macOS, Linux
    #include <unistd.h> // for getcwd()
    #define CURRENT_path getcwd
#endif

// Data A

// Main function
void data_a(void)
{
    // Output
    printf("### DATE A: SHOW DIRECTORY ###\n\n");
    
    // Create 
    char path[1024];

    // Show Directory 
    CURRENT_path(path, 1024);
    printf("Show current path: \n%s\n", path);

 


    // Create a pointer for the file data: need <stdio.h> 
    //FILE *save;
    
    // File open: The file will be created if it doesn’t exist.
    //save = fopen("save.dat", "a");

    // Conditional statement
    /*
    
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
    */
}