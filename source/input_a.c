// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/input_a.h"

// Input A

// Main function
void input_a(void)
{
    // Output
    printf("### INPUT A ###\n\n");

    // Create
    char charInput_a, charInput_b;
    int intInput;
    char u;

    // Create & assign
    int x = 0;

    // Output
    printf("INPUT int with getchar().\n");
    printf("Input a number, only one sign: ");

    // Input
    getchar();
    intInput = getchar();

    // Output
    printf("Your Input was: %c\n\n", intInput);

    // ----------------------------------------
    // Output
    printf("INPUT char with getchar().\n");
    printf("Input a character, only one sign: ");

    // Input
    getchar();
    charInput_a = getchar();

    // Output
    printf("Your Input was: %c\n\n", charInput_a);
    
    // ------------------------------------------
    // Output
    printf("INPUT with scanf().\n");
    printf("Continue with y: ");

    // Input
    getchar();
    scanf("%c", &charInput_b);

    // Output
    printf("Your Input was: %c\n", charInput_b);
    printf(charInput_b == 'y' ? "right!\n\n" : "wrong!\n");

    // Conditional statement: continue with y
    if (charInput_b == 'y')
    {
        // Output
        printf("*** Input a sting ***\n\n");
        printf("Input with getchar() loop.\n");
        printf("Exit with: WindowsOS: (ctrl + z & enter) | macOS: (controle + z)\n");
        printf("Input some characters: ");

        // While loop
        while(1)
        {
            // Input
            u = getchar();

            // Conditional statement
            if(u == EOF)
                break;

            // Output
            putchar(u);
        }
    }
    else{
        // Output
        printf("Input not correct!\n");
    }
}