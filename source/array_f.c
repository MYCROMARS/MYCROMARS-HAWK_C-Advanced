// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/array_f.h"

// ARRAY F

// function
void arrayPlus(char a)
{
    // Assign
    a++;

    // Output
    putchar(a);
}

// Main function
void array_f(void)
{
    // Output
    printf("### Array F: Char array, go one letter further ###\n\n");

    // Create & assign
    char charText[] = "Qtch";
   
    // Create
    int x;

    // Output
    printf("%s, Array +1:\n", charText);

    // For loop
    for (x = 0; x < 4; x++){

        // Function: Qtch to Rudi
        arrayPlus(charText[x]);
    }

    // Output
    printf("\n\n");

    // For loop
    for (x = 0; x < 4; x++)
        // Qtch to Rudi
        printf("char: %c +1 = %c\n", charText[x], charText[x]+1);
}