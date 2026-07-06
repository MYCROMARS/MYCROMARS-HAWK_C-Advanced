// if it's not working acivate this (on macOS):
// #include <stdio.h>

// Main Menu 6: ---

// Main function
void mainMenu_6(int *m)
{
        // Output
        printf("\n*** --- MENU ***\n");
        printf("Press: (0) EXIT\n");
        printf("Press: (1) A | (2) B | (3) C | (4) D\n");
        printf("Press: (5) E | (6) F\n");
        printf("Your input: ");

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
                        //array_a();
                        break;

                case 2:
                        // Function: B
                        //array_b();
                        break;

                case 3:
                        // Function: C
                        //array_c();
                        break;

                case 4:
                        // Function: D
                        //array_d();
                        break;

                case 5:
                        // Function: E
                        //array_e();
                        break;

                case 6:
                        // Function: F
                        //array_f();
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