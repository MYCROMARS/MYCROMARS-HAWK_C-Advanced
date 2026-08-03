// if it's not working acivate this:
#include <stdio.h>
#include <stdlib.h>
// #include "../header/data_d.h"

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
    printf("Input folder name: ");
    scanf("%99s", folderName);
    
    if (MakeFolder_(folderName) == -1){
        printf("Folder cannot be created!");
    }
    else{
        printf("successful!\n");
    }
    
    // Go to folder ---------------------
    printf("\nGo to this folder\n");

    if (CHANGE_folder(folderName) == -1){
        printf("failed!");
    }
    else{
        printf("successful!\n");
    }
    
    // Show Directory -----------------------------
    if (CURRENT_path(path, sizeof(path)) != NULL) {
        printf("Show current path: %s\n\n", path);
    } else {
        perror("error!");
    }

    // Go folder up ---------------
    printf("Go folder up\n");

    if (CHANGE_folder("..") == -1){
        printf("failed!");
    }
    else{
        printf("successful!\n");
    }

    // Show folder --------------------------------
    if (CURRENT_path(path, sizeof(path)) != NULL) {
        printf("Show current path: %s\n\n", path);
    } else {
        perror("error!");
    }
}



/*

// Main function
void data_d(void)
{
    // Output
    printf("### DATE D: File open for write, reading. ###\n\n");
    
    // Create & assign
    char text_1[] = "Hello";
    
    // Create a pointer for the file data: need <stdio.h> 
    FILE *save;
    
    // open
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
        // Output
        puts("! successful !");
        
        // save
        fprintf(save, "%s", text_1);
        
        // Output
        printf("text 1: %s\n", text_1);
        
        // close
        fclose(save);
        
        // Output
        puts("File closed.\n");
    } 

    // ### Read file

    // Create
    char text_2[20];
    
    // Create & assign
    int readCount = 0;
    
    // for testing, assign
    // strcpy(text_2,"Hello");
    
    // Create a pointer for the file data: need <stdio.h> 
    FILE *read;
    
    // open
    read = fopen("save.dat", "r");
    
    // Conditional statement
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
        
        // While loop: read
        while (fscanf(read, "%s", &text_2[0]) !=EOF)
        {
            // Assign: +1
            readCount++;
        }

        // Output
        printf("read char 0: %c\n", text_2[0]);
        printf("read text: %s\n", text_2);
        printf("readCount: %d\n", readCount);
        
        // close
        fclose(read);
        
        // Output
        puts("File closed.");
    }
*/
