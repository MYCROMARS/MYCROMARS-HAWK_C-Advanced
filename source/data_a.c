// Integrate libraries direct:
#include <stdio.h>
#include <stdlib.h>
// #include "../header/data_a.h"

// Windows
#ifdef _WIN32 
    #include <direct.h> // for _getcwd()
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

    // Path
    CURRENT_path(path, 1024);

    // Output
    printf("Show current path: \n%s\n", path);
}