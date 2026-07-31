// if it's not working acivate this (on macOS):
// #include <stdio.h>

// Main Menu 5: 

// Main function
void mainMenu_5(int *m)
{
        // Output
        printf("\n*** DATA MENU ***\n");
        printf("Press: (0) EXIT\n");
        printf("Press: (1) A | (2) B | (3) C | (4) D | (5) E | (6) F | (7) G\n");
        printf("Your Input: ");

        // Input
        scanf("%d", m);

        // Output
        printf("\n");

        // create
        // int value_1;
        // int value_2;
        // int value_3;
        // int value_4;

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
                        data_a();
                        break;

                case 2: 
                        // Function: B
                        data_b();
                        break;
                
                case 3: 
                        // Function: C
                        data_c();
                        break;

                case 4: 
                        // Function: D
                        data_d();
                        break;
                
                case 5:
                        // Function: E
                        data_e();
                        break;

                case 6:
                        // Function: F
                        data_f();
                       break;

                case 7:
                        // Function: G
                        data_g();
                       break;
                        
                default:
                        // Assign
                        *m = 0;

                        // Output
                        printf("### END ###\n");
                        break;
        }

        // Output
        printf("\n### DATA END ###\n");
        printf(".......................\n");
}  