// Integrate libraries direct:
#include <stdio.h>
#include <stdlib.h>
// #include "../header/data_d.h"

#ifdef _WIN32
    #include <direct.h>     // for _getcwd()
    #define CURRENT_path _getcwd
    //#define MODUS )
    #define MakeFolder_(path) _mkdir(path)
    #define CHANGE_folder _chdir
#else
    #include <unistd.h>     // for getcwd()
    #include <sys/stat.h>   // for mkdir()
    #define CURRENT_path getcwd
    #define MakeFolder_(path) mkdir(path, 0755)
    #define CHANGE_folder chdir
#endif

// Data D

// Main function
void data_d(void)
{
    // Output
    printf("### DATE D: CREATE FOLDER, GO TO FOLDER & GO UP ###\n\n");
    
    // Create 
    char path[1024];
    char folderName[100];
    
    // Create Folder ------------------------
    // Output
    printf("Input folder name: ");

    // Input
    scanf("%99s", folderName);
    
    // Create: Directory
    if (MakeFolder_(folderName) == -1){
        // Output
        printf("Folder cannot be created!");
    }
    else{
        // Output
        printf("successful!\n");
    }
    
    // Go to folder ---------------------
    // Output
    printf("\nGo to this folder\n");

    // Go to
    if (CHANGE_folder(folderName) == -1){
        // Output
        printf("failed!");
    }
    else{
        // Output
        printf("successful!\n");
    }
    
    // Show Directory -----------------------------
    if (CURRENT_path(path, sizeof(path)) != NULL) {
        // Output
        printf("Show current path: %s\n\n", path);
    } else {
        // Output: Error
        perror("error!");
    }

    // Go folder up ---------------
    // Output
    printf("Go folder up\n");

    // Go up
    if (CHANGE_folder("..") == -1){
        // Output
        printf("failed!");
    }
    else{
        // Output
        printf("successful!\n");
    }
    
    // Show Directory --------------------------------
    if (CURRENT_path(path, sizeof(path)) != NULL) {
        // Output
        printf("Show current path: %s\n", path);
    } else {
        // Output: Error
        perror("error!");
    }
}