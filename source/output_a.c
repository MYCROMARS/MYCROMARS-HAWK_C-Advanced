// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/output_a.h"

// Output A
// Main function
void output_a(void) {
    // Output character, tab, return: 

    printf("Character with: \\\\= \\\n\n");

    printf("Character with: \\\'= \'\n\n");

    printf("Character with: \\\"= \"\n\n");

    printf("Character with: \\\?= \?\n\n");
    
    printf("Backspace with: \\b= \bTest\n\n");
    
    printf("V Tab with: \\f= \fTest\n\n");
    
    printf("Next Line with: \\n= \nTest\n\n");
    
    printf("Carriage Return with: \\rTest---- =\n");
    printf("Carriage Return\rTest----\n\n");    // Test---- = 8 characters, overright at start
    
    printf("H Tab with: \\t= \tTest\n\n");
    printf("V Tab with: \\v= \vTest\n");
    
    //printf("Alert with: \a\n");


    // Output: not working: 
    /*
    printf("Character with: ??<= {\n\n");
    printf("Character with: ??>= }\n\n");

    printf("Character with: ??-= ~\n\n");

    printf("Character with: ??!= |\n\n");

    printf("Character with: ??'= ^\n\n");

    printf("Character with: ??(= [\n\n");
    printf("Character with: ??)= ]\n\n");

    printf("Character with: ??/= \\n\n");

    printf("Character with: ??= #\n\n");
    */
}