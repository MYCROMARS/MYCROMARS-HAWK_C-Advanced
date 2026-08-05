// Integrate libraries direct:
// #include <stdio.h>
// #include "../header/enum_d.h"

// ENUM D

// Main function
void enum_d(void)
{
    // Output
    printf("\n### ENUM D: Pass & switch value ###\n\n");
       
    // Create Enum Boolean 
    enum BOOLEAN{
        false_,
        true_
    };

    // Create: Enum Item
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
        // Output
        printf("Input is not a number! \n\n");

        // function: Catch invalid input (Letters instead of numbers)
        scanf("%s", &buffer[0]);
        
        // Go to
        goto start;
    }
    else if (input == 1)
    {
        // Output
        printf("Correct, your input was: %d\n", input);

        // Conditional statment
        if (button == false_)
        {
            // Assign
            button = true_;
        }
        else if (button == true_)
        {
            // Assign
            button = false_;
        }

        // Output
        printf("button is now: %d\n\n", button);

        // Go to
        goto start;
    }
    else
    {
        // Output
        printf("The number is not 1, Program END! \n");
    }
}