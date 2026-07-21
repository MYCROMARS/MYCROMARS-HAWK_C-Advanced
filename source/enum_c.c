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

    enum BOOLEAN isNumber;

    isNumber = true;
 
    int number;

    start:

    printf("Input a number 1...5: ");

    if((scanf("%d", &number)) != isNumber)
    {
        printf("Input is not a number! \n\n");
    }
    else if (number >=1 && number <=5)
    {
        printf("correct!\n");
        printf("Your input was: %d\n", number);
    }
    else
    {
        printf("The number is not 1...5 \n\n");
        goto start;
    }
}