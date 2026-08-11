/*
MYCROMARS HAWK 
C Programming Advanced v0.5.1

Copyright (C) 2026 Alexander Rudi
Licensed: GNU General Public License v3.0

Source code:
https://github.com/MYCROMARS/MYCROMARS-HAWK_C-Advanced

Contact:
https://www.mycromars.com
info@mycromars.com

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <https://www.gnu.org/licenses/>.
*/

// header file
#include "header.h"

// Create 
char buffer[50];

// Catch invalid input
void scanString0(void){
    // Input
        scanf("%s", &buffer[0]);
        buffer[0] = '\0';
}

// Main function
int main()
{
    // Output
    printf("\n");
    printf("MYCROMARS HAWK\n");
    printf("C Programming Advanced v0.5.1\n\n");

    printf("MYCROMARS HAWK Copyright (C) 2026 Alexander Rudi\n");
    printf("This program comes with ABSOLUTELY NO WARRANTY\n");
    printf("This is free software, and you are welcome to redistribute it under certain conditions.\n");
    printf("Licensed: GNU General Public License v3.0\n");
    printf("https://www.mycromars.com\n");
    
    // Create & assign (initialize)
    int menu = 0;
    int menuB = 0;
    const int menuMax = 7;

    // Jump mark: start
    mainMenu:

    // Output
    printf("\n*** MAIN MENU ***\n");
    printf("Press (0) EXIT \n");
    printf("Press (1) LOOP | (2) ENUM | (3) OUTPUT | (4) BIT | (5) DATA\n");
    printf("Press (6) MACRO | (7) MATH \n");
   
    printf("Your input: ");

    // Conditional statement
    if (scanf("%d", &menu) == 0)  {
        // Output
        printf("\nInput is not a number!\n\n");

        // function: Catch invalid input (Letters instead of numbers)
        scanString0();

        // Go to
        goto mainMenu;
    }
    else if (menu >= 0 && menu <= menuMax){

        // Switch-case statement
        switch (menu)
        {
        case 0:
                /* Function: Exit */
                mainMenu_0(&menuB);
        
        case 1:
                /* Function: Loop */
                mainMenu_1(&menuB);
                break;

        case 2:
                /* Function: ENUM */
                mainMenu_2(&menuB);
                break;

        case 3:
                /* Function: OUTPUT */
                mainMenu_3(&menuB);
                break;
        
        case 4:
                /* Function: BITS */
                mainMenu_4(&menuB);
                break;

        case 5:
                /* Function: DATA */
                mainMenu_5(&menuB);
                break;
       
         case 6:
                /* Function: MACRO */
                mainMenu_6(&menuB);
                break;

         case 7:
                /* Function: MATH */
                mainMenu_7(&menuB);
                break;
         
        default:
                // Output
                printf("This Menu %d is not available!\n\n", menu);
                break;
        }
    }
    else {
        // Wrong number, not 9...menuMax
        // Output
        printf("\nInput is wrong, not 0...%d\n\n", menuMax);

        // Go to
        goto mainMenu;
    }

    // Assign (initialize)
    menu = 0;
    menuB = 0;

    // Go to
    goto mainMenu;
}