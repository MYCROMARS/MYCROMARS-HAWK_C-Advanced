// Integrate libraries direct:
// #include <stdio.h>
// #include "../header/enum_c.h"

// ENUM C

// Main function
void enum_c(void)
{
    // Output
    printf("### ENUM C: Enum Boolean ###\n\n");
    
    // Create Enum Boolean 
    enum BOOLEAN{
        false_,     // 0
        true_       // 1
    };

    // Create Enum Item
    enum BOOLEAN isNumber;

    // Assign
    isNumber = true_;
 
    // Create
    int number;

    // Go here
    start:

    // Output
    printf("Input a number 1...5: ");

    // Input
    if((scanf("%d", &number)) != isNumber)
    {
        // Output
        printf("Input is not a number! \n\n");
    }
    else if (number >=1 && number <=5)
    {
        // Output
        printf("correct!\n");
        printf("Your input was: %d\n", number);
    }
    else
    {
        // Output
        printf("The number is not 1...5 \n\n");

        // Go to
        goto start;
    }
}