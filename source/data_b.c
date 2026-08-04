// if it's not working acivate this:
#include <stdio.h>
#include <stdlib.h>
// #include "../header/data_b.h"

#ifdef _WIN32
    #include <direct.h>
    //#include <errno.h>
    #include <string.h>   // GNU-Version basename(), verändert nicht den String
    #define CURRENT_path _getcwd

    // Manually define 
    #ifndef _MAX_DRIVE
        #define _MAX_DRIVE 3    // Drive letter + ':' + '\0'
        #define _MAX_DIR 256
        #define _MAX_FNAME 256
        #define _MAX_EXT 256
    #endif

    // #ifndef _ERRNO_T_DEFINED
    //     #define _ERRNO_T_DEFINED
    //     typedef int errno_t;
    // #endif

    // 2. FORWARD DECLARATION: This fixes the "implicit declaration" GCC error
    extern int _splitpath_s(
        const char *path,
        char *drive, size_t driveNumberOfElements,
        char *dir,   size_t dirNumberOfElements,
        char *fname, size_t fnameNumberOfElements,
        char *ext,   size_t extNumberOfElements
    );
    #else
        #include <unistd.h>
        #include <libgen.h>     // POSIX-Version Dateinamen basename(), dirname()
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

        // Output: path
        printf("Show current path: %s\n\n", path_b1);

        // Current folder
        #ifdef _WIN32

        #else 
            char *folder = CURRENT_folder(path_b1);
            printf("On macOS, Linux\n");
            printf("Current folder: %s\n\n", folder);
        #endif
    }
    else {
        perror("ERROR!");
    }


    // 2. Method, output path & Length
    printf("Method 2, output path\n");

    // Create
    char *path_b2;

    if ((path_b2 = CURRENT_path(NULL, 0)) == NULL)
        perror("ERROR!");
    else{
        // Output: path
        printf("show current path: %s\n", path_b2);

        // Output: Length
        printf("String length: %zu\n\n", strlen(path_b2));

        free(path_b2);
    } 
   

    #ifdef _WIN32
        printf("Only on Windows, output path\n");

        // 1. Method, Output path split
        // const char* full_path = "C:\\Users\\Admin\\Documents";
        const char* path_b1_1 = path_b1;

        // Allocate buffers using standard size constants
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

        // Check if the function succeeded (returns 0)
        if (spPath == 0) {
            //printf("Drive:     %s\n\n", drive);  // Outputs: Drive
            //printf("Directory: %s\n\n", dir);    // Outputs: path
            printf("Filename:  %s\n\n", fname);    // Outputs: name
            //printf("Extension: %s\n\n", ext);    // Outputs: Extension
        } else {
            printf("ERROR: %d\n\n", spPath);
        }
    #endif


    // 2. Method, Output path split
    printf("Method 2, output Filename\n");

    const char *path_b1_2 = path_b1;
    //const char* full_path = "C:\\Users\\Admin\\Documents\\text.txt";

    // 1. Find the last separator (handles both Windows backslash and Linux forward slash)
    const char *filename = strrchr(path_b1_2, '\\');

    if (!filename) filename = strrchr(path_b1_2, '/');
    
    // If no slash found, the entire path is the filename
    if (!filename) filename = path_b1_2; 
    else filename++; // Step past the slash pointer

    printf("Filename:  %s\n\n", filename); 

    
    // Extension
    const char *Extension = strrchr(filename, '.');
    
    // 2. Find the extension dot
    if (Extension !=NULL)
    {
        printf("Extension: %s\n", Extension);  
    }
    
    /*
    // Output Length
    printf("path_b1_2 length:  %d\n", path_b1_2); 
    printf("filename length:   %d\n", filename); 
    printf("Name Length:       %d\n", filename-path_b1_2+1); 
    int a = filename-path_b1_2;
    printf("Char:              %c\n", path_b1[a]); 
    
    */          
}

/*

void data_b(void)
{
    // Output
    printf("### DATE B: File open/create for writing/overwriting. ###\n\n");
    
    // Create & assign
    int value_1 = 100;
    
    // Create a pointer for the file data: need <stdio.h> 
    FILE *save;
    
    // Open file
    save = fopen("save.dat", "w");

    // Conditional statement
    if(save == NULL)
    {
        // Output
        puts("! error !");
        
        // Exit: need <stdlib.h> 
        exit (EXIT_FAILURE);
    }
    else{
        
        // save
        fprintf(save, "%d", value_1);

        // Output
        puts("! successful !");
        
        // close
        fclose(save);
        
        // Output
        puts("File closed.");
    }
} 
*/