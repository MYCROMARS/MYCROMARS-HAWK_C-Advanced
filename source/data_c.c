// Data C

// Integrate libraries direct:
#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
    #include <direct.h>
    #define MODUS )
    #define MakeFolder(path) _mkdir(path)
#else
    //#include <unistd.h>
    #include <sys/stat.h>   // for mkdir()
    #define MODUS ,0755)
    #define MakeFolder(path) mkdir(path)
#endif

// Main function
void data_c(void)
{
    // Output
    printf("### DATE C: CREATE FOLDER ###\n\n");
    
    // Create
    char folderName[100];
    
    // Output
    printf("Input folder name: ");
    
    // Input
    scanf("%99s", folderName);
    
    // Create: Directory
    if (MakeFolder(folderName MODUS == -1){
        // Output
        printf("Folder cannot be created!");
    }
    else{
        // Output
        printf("successful!\n");
    }
}