// if it's not working acivate this:
#include <stdio.h>
#include <stdlib.h>
// #include "../header/data_e.h"

#ifdef _WIN32
    #include <direct.h>
    #define CURRENT_path _getcwd
    //#define MODUS )
    #define MakeFolder_(path) _mkdir(path)
    #define CHANGE_folder _chdir
#else
    #include <unistd.h>
    #include <libgen.h>     // POSIX-Version Dateinamen basename(), dirname()
    #include <sys/stat.h>   // Dateigröße, Zugriffsrechte, Dateityp, mkdir()
    #define CURRENT_path getcwd
    #define MakeFolder_(path) mkdir(path, 0755)
    #define CHANGE_folder chdir
#endif

// Data E

// Main function
void data_e(void)
{
    // Output
    printf("### DATE E: ---- ###\n\n");
    
    // Create 
    char path[1024];
    char folderName[100];
    
  // Show Content ---------------
    printf("Show content\n");

    if (CHANGE_folder("..") == -1){
        printf("failed!\n");
    }
    else{
        printf("successful!\n");
    }





}