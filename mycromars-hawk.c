/*
MYCROMARS HAWK 
C Programming Advanced V0.0.1

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

// useful:
//#include <windows.h>

// Create 
char buffer[50];

// Catch invalid input
void scanString0(void){
    // Input
    scanf("%s", &buffer[0]);
}

// Main function
int main()
{
    // Output
    printf("\n");
    printf("MYCROMARS HAWK\n");
    printf("C Programming Advanced V0.0.1\n\n");

    printf("MYCROMARS HAWK Copyright (C) 2026 Alexander Rudi\n");
    printf("This program comes with ABSOLUTELY NO WARRANTY\n");
    printf("This is free software, and you are welcome to redistribute it \
        under certain conditions.\n");
    printf("Licensed: GNU General Public License v3.0\n");
    printf("https://www.mycromars.com\n");
    
    // Create & assign (initialize)
    int menu = 0;
    int menuB = 0;

    // Jump mark: start
    mainMenu:

    // Output
    printf("\n*** MAIN MENU ***\n");
    printf("Press (0) EXIT \n");
    printf("Press (1) --- | (2) --- | (3) --- | (4) ---\n");
    printf("Press (5) ---     | (6) ---| (7) ---  | (8) ---\n");
    printf("Press (9) ---      | (10) ---\n");

    printf("Your input: ");

    // Conditional statement
    if (scanf("%d", &menu)) {

        // Wrong number, not 1...10
        if (menu < 0 || menu > 10){
            // Output
            printf("\nInput is wrong, not 1...10\n\n");

            // Jump to start
            goto mainMenu;
        }
        // Switch-case statement
        switch (menu)
        {
            case 0:
                    /* Function: Exit */
                    mainMenu_0(&menuB);
        
            case 1:
                    /* Function:  */
                    mainMenu_1(&menuB);
                    break;

            case 2:
                    /* Function:  */
                    //mainMenu_2(&menuB);
                    break;

            case 3:
                    /* Function:  */
                    //mainMenu_3(&menuB);
                    break;

            case 4:
                    /* Function:  */
                    //mainMenu_4(&menuB);
                    break;

            case 5:
                    /* Function:  */
                    //mainMenu_5(&menuB);
                    break;

            case 6:
                    /* Function:  */
                    //mainMenu_6(&menuB);
                    break;

            case 7:
                    /* Function:  */
                    //mainMenu_7(&menuB);
                    break;

            case 8:
                    /* Function:  */
                    //mainMenu_8(&menuB);
                    break;

            case 9: 
                    /* Function:  */
                    //mainMenu_9(&menuB);
                    break;

            case 10:
                    /* Function:  */
                    //mainMenu_10(&menuB);
                    break;

            default:
                    // Output
                    printf("Input is not a number 1...10\n\n");
                    break;
        }
    }
    else {
        // Output
        printf("\nInput is not a number\n\n");

        // function: Catch invalid input
        scanString0();

        // Jump to start
        goto mainMenu;
    }

    // Assign (initialize)
    menu = 0;
    menuB = 0;

    // Jump to start
    goto mainMenu;
}
