// Integrate libraries direct:
#include <stdio.h>
#include <stdlib.h>
// #include "../header/data_e.h"

#ifdef _WIN32
    #include <direct.h>             // for _getcwd()
    #define CURRENT_path _getcwd
    //#define MODUS )
    #define MakeFolder_(path) _mkdir(path)
    #define CHANGE_folder _chdir
#else
    #include <unistd.h>     // for getcwd()
    #include <libgen.h>     // basename(), dirname()
    #include <sys/stat.h>   // mkdir()
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
    

}