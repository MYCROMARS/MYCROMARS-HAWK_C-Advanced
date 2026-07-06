// if it's not working acivate this (on macOS):
// #include <stdio.h>

// Main Menu 7: 

// Main function
void mainMenu_7(int *m)
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
                        // Exit
                        // Assign
                        *m = 0;

                        // Output
                        printf("### EXIT ###\n");
                        break;

                case 1:
                        // Function: A
                       //loop_a();
                        break;

                case 2:
                        // Function: B
                        //loop_b();
                        break;

                case 3:
                        // Function: C
                        //loop_c();
                        break;

                case 4:
                        // Function: D
                        //loop_d();
                        break;

                case 5:
                        // Function: E
                        //loop_e();
                        break;

                case 6:
                        // Function: F
                        //loop_f();
                        break;

                case 7:
                        // Function: G
                        //loop_g();
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