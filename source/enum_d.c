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
        false_,
        true_
    };

    // Create Enum Item
    enum BOOLEAN button;

    // Assign
    button = false_;

    // Output
    printf("button is: %d\n", button);
    
    // Create 
    int input;
    char buffer[50];
    
    // Go here
    start:
    
    // Output
    printf("Switch button? Input 1: \n");
    printf("Exit with all other numbers. \n");
   

    // Input
    if((scanf("%d", &input)) == false_)
    {
        printf("Input is not a number! \n\n");

        scanf("%s", &buffer[0]);
        
        goto start;
    }
    else if (input == 1)
    {
        printf("Correct, your input was: %d\n", input);

        if (button == false_)
        {
            button = true_;
        }
        else if (button == true_)
        {
            button = false_;
        }

        printf("button is now: %d\n\n", button);

        goto start;
    }
    else
    {
        printf("The number is not 1, Program END! \n");
    }
}