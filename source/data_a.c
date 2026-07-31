// if it's not working acivate this:
#include <stdio.h>
#include <stdlib.h>
// #include "../header/data_a.h"

#ifdef _WIN32
    #include <direct.h>
    #define GetCurrentDir _getcwd
    #define MakeDirectory(path) _mkdir(path)
#else
    #include <unistd.h>
    //#include <sys/stat.h>
    //#define GetCurrentDir getcwd
    //#define MakeDirectory(path) mkdir(path, 0777)
#endif

// Data A

// Main function
void data_a(void)
{
    // Output
    printf("### DATE A: SHOW DIRECTORY ###\n\n");
    
    // Create & assign
    int value_1 = 700;

    char buffer[1024];

    getcwd(buffer, 1024);

    printf("Directory: \n\n%s\n", buffer);
    


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