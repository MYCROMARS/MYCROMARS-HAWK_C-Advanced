// if it's not working acivate this:
#include <stdio.h>
#include <stdlib.h>
// #include "../header/data_a.h"

#ifdef _WIN32
    #include <direct.h>
    //#define GetCurrentDir _getcwd
    //#define MakeDirectory(path) _mkdir(path)
    #define MODUS )
#else
    #include <unistd.h>
    #include <libgen.h>
    #include <sys/stat.h>
    #define MODUS ,0711)
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
    //int value_1 = 700;
    char buffer[1024];

    // Show Directory ------------------------
    //getcwd(buffer, 1024);
    //printf("Directory: \n%s\n", buffer);

    if (getcwd(buffer, sizeof(buffer)) != NULL) {
        printf("Show folder path: \n%s\n\n", buffer);

        //char *folder = basename(buffer);
        //printf("Show actual folder: \n%s\n\n", folder);
    } else {
        perror("error!");
    }
    
    // Create: Folder ------------------------
    char pfadname[200];

    printf("What should the new folder be named?: ");
    
    scanf("%199s", pfadname);
    
    if (mkdir(pfadname MODUS == -1){
        printf("Can not create folder!");
    }
    else{
        printf("New folder created: %s\n", pfadname);
    }
    
    
    // Got to folder
    printf("\nGo to this folder\n");

    if (chdir(pfadname) == -1){
        printf("failed!");
    }
    
    // Show Derectory
    if (getcwd(buffer, sizeof(buffer)) != NULL) {
        char *folder = basename(buffer);
        printf("Show actual folder: \n%s\n", folder);
    } else {
        perror("error!");
    }

    // Got folder up
    printf("\nGo folder up\n");

    if (chdir("..") == -1){
        printf("failed!");
    }

    // Show path
       if (getcwd(buffer, sizeof(buffer)) != NULL) {
        char *folder = basename(buffer);
        printf("Show actual folder: \n%s\n\n", folder);
    } else {
        perror("error!");
    }

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