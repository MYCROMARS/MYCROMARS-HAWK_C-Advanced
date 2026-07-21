// if it's not working activate this (on macOS):
// #include <stdio.h>
// #include "../header/enum_c.h"

// ENUM C

// Main function
void enum_c(void)
{
    // Output
    printf("\n### ENUM C ###\n");

    // Create Enum Boolean 
    enum BOOLEAN{
        false,
        true
    };

    enum BOOLEAN button;

    button = false;
    printf("button is: %d\n", button);
    
    printf("Switch button..\n");

    button = true;
    printf("button is: %d\n", button);
    

    // or
    //enum BOOLEAN { false, true } button;
    
    // or
    //enum BOOLEAN button;

    //if ( button == false){
        //.
        //.
        //.
    //}
    //button = true;
}