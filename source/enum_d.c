// if it's not working activate this (on macOS):
// #include <stdio.h>
// #include "../header/enum_d.h"

// ENUM D

// Main function
void enum_d(void)
{
    // Output
    printf("\n### ENUM D ###\n");
       
    // Create Enum Boolean 
    enum BOOLEAN{
        false,
        true
    };

    enum BOOLEAN button;

    button = false;
    printf("button is: %d\n", button);
    
    // Create 
    int input;
    char buffer[50];
    
    start:
    
    printf("Switch button? Input 1: \n");
    printf("Exit with all other numbers. \n");
   

    if((scanf("%d", &input)) == false)
    {
        printf("Input is not a number! \n\n");

        scanf("%s", &buffer[0]);
        
        goto start;
    }
    else if (input == 1)
    {
        printf("Correct, your input was: %d\n", input);

        if (button == false)
        {
            button = true;
        }
        else if (button == true)
        {
            button = false;
        }

        printf("button is now: %d\n\n", button);

        goto start;
    }
    else
    {
        printf("The number is not 1, Program END! \n");
    }
}