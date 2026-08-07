// Integrate libraries direct:
#include <stdio.h>
#include <stdlib.h>
// #include "../header/data_b.h"

// Windows
#ifdef _WIN32
    #include <direct.h>     // for _getcwd()
    //#include <errno.h>
    #include <string.h>  
    #define CURRENT_path _getcwd

    // Define 
    #ifndef _MAX_DRIVE
        #define _MAX_DRIVE 3    
        #define _MAX_DIR 256
        #define _MAX_FNAME 256
        #define _MAX_EXT 256
    #endif

    // DECLARATION: fixes "implicit declaration" GCC error
    extern int _splitpath_s(
        const char *path,
        char *drive, size_t driveNumberOfElements,
        char *dir,   size_t dirNumberOfElements,
        char *fname, size_t fnameNumberOfElements,
        char *ext,   size_t extNumberOfElements
    );
    #else // macOS, Linux
        #include <unistd.h>     // for getcwd()
        #include <libgen.h>     // for basename(), dirname()
        #define CURRENT_path getcwd
        #define CURRENT_folder(path) basename(path)
#endif

// Data B

// Main function
void data_b(void)
{
    // Output
    printf("### DATE B: SHOW DIRECTORY & CURRENT FOLDER ###\n\n");
    
    // Create 
    char path_b1[100]; // 100 byte
   
    // Show Directory ------------------------
    if (CURRENT_path(path_b1, sizeof(path_b1)) != NULL) 
    {
        // Output: size of
        printf("sizeof char path: %lu byte\n\n", sizeof(path_b1));
        printf("sizeof char path: %zu byte\n\n", sizeof(path_b1));

        // Output: path
        printf("Show current path: %s\n\n", path_b1);

        // Windows
        #ifdef _WIN32

        #else // macOS, Linux
            // Create: Current folder
            char *folder = CURRENT_folder(path_b1);

            // Output
            printf("On macOS, Linux\n");
            printf("Current folder: %s\n\n", folder);
        #endif
    }
    else {
        // Output: Error
        perror("ERROR!");
    }

    // 2. Method, output path & Length
    // Output
    printf("Method 2, output path\n");

    // Create
    char *path_b2;

    // Pass path
    if ((path_b2 = CURRENT_path(NULL, 0)) == NULL)
        // Output: Error
        perror("ERROR!");
    else{
        // Output: path
        printf("show current path: %s\n", path_b2);

        // Output: Length
        printf("String length: %zu\n\n", strlen(path_b2));

        // Clear storage
        free(path_b2);
    } 
   
    // Windows
    #ifdef _WIN32
        // Output
        printf("Only on Windows, output path\n");

        // 1. Method, Output path split
        // const char* full_path = "C:\\Users\\Admin\\Documents";
        const char* path_b1_1 = path_b1;

        // Create
        char drive[_MAX_DRIVE];
        char dir[_MAX_DIR];
        char fname[_MAX_FNAME];
        char ext[_MAX_EXT];

        // Split the path securely
        int spPath = _splitpath_s(
            path_b1_1, 
            drive, _MAX_DRIVE, 
            dir, _MAX_DIR, 
            fname, _MAX_FNAME, 
            ext, _MAX_EXT
        );

        // Check (returns 0)
        if (spPath == 0) {
            //printf("Drive:     %s\n\n", drive);  // Outputs: Drive
            //printf("Directory: %s\n\n", dir);    // Outputs: path
            printf("Filename:  %s\n\n", fname);    // Outputs: name
            //printf("Extension: %s\n\n", ext);    // Outputs: Extension
        } else {
            // Output
            printf("ERROR: %d\n\n", spPath);
        }
    #endif


    // 2. Method, Output path split
    // Output
    printf("Method 2, Output Filename or Foldername\n");

    // Pass path
    const char *path_b1_2 = path_b1;
    // or (test this path)
    // const char* full_path = "C:\\Users\\Admin\\Documents\\text.txt";

    // Find the last separator (Windows backslash)
    const char *filename = strrchr(path_b1_2, '\\');
    
    // Find the last separator (Linux forward slash)
    if (!filename) filename = strrchr(path_b1_2, '/');
    
    // entire path is the filename
    if (!filename) filename = path_b1_2; 
    else filename++; // Step past the slash pointer

    // Output
    printf("Filename:  %s\n\n", filename); 

    // Extension dot
    const char *Extension = strrchr(filename, '.');
    
    // Extension 
    if (Extension !=NULL)
    {
        // Output
        printf("Extension: %s\n", Extension);  
    }
    
    // Output Length
    //printf("path_b1_2 length:       %d\n", path_b1); 
    //printf("filename length:        %d\n", filename); 
    printf("filename - path_b1_2+1: %ld\n", filename-path_b1_2+1); 
    
    // Assign
    int a = filename-path_b1_2;
    
    // Output
    printf("First Character:      %c\n", path_b1[a]);        
}