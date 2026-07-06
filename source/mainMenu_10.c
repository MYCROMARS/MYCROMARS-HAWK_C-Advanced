// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include <stdlib.h>

// Main Menu 10: ---

// Main function
void mainMenu_10(int *m)
{
        // Output
        printf("\n*** --- MENU ***\n");
        printf("Press: (0) EXIT\n");
        printf("Press: (1) A | (2) B | (3) C | (4) D\n");
        printf("Press: (5) E | (6) F | (7) G\n");
        printf("Your Input: ");
        
        // Input
        scanf("%d", m);
        
        // Output
        printf("\n");

        // Switch-case statement
        switch (*m)
        {
                case 0:
                        // Assign
                        *m = 0;

                        // Output
                        printf("### EXIT ###\n");
                        break;
                        
                case 1:
                        // Function: Data A
                        // File successfully opened/created for writing to end of file.
                        //data_a();
                        break;

                case 2:
                        // Function: Data B
                        // File successfully opened/created for writing/overwriting.
                        //data_b();
                        break;

                case 3:
                        // Function: Data C
                        // File successfully opened for reading integer.
                        //data_c();
                        break;

                case 4:
                        // Function: Data D 
                        // File successfully opened for reading string.
                        //data_d();
                        break;

                case 5:
                        // Function: Data E
                        // File successfully opened for reading 2 strings.
                        //data_e();
                        break;

                case 6:
                        // Function: Data F
                        // File successfully opened for reading int Array.
                        //data_f();
                        break;

                case 7:
                        // Function: Data G
                        // File successfully opened for reading int Array.
                        //data_g();
                        break;

                default:
                        // Assign
                        *m = 0;
                        
                        // Output
                        printf("### END ###\n");
                        break;
        }

        // Output
        printf("\n### --- END ###\n");
        printf(".......................\n");
} 