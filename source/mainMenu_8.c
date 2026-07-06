// if it's not working acivate this (on macOS):
// #include <stdio.h>

// Main Menu 8: 

// Main function
void mainMenu_8(int *m)
{
        // Output
        printf("\n*** --- MENU ***\n");
        printf("Press: (0) EXIT\n");
        printf("Press: (1) A | (2) B  | (3) C | (4) D\n");
        printf("Press: (5) E | (6) F  | (7) G | (8) H \n");
        printf("Press: (9) I | (10) J | (11) K\n");
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
                        // Function: A
                        //structure_a();
                        break;

                case 2:
                        // Function: B
                        //structure_b();
                        break;

                case 3:
                        // Function: C
                        //structure_c();
                        break;

                case 4:
                        // Function: D
                        //structure_d();
                        break;

                case 5:
                        // Function: E
                        //structure_e();
                        break;

                case 6:
                        // Function: F
                        //structure_f();
                        break;

                case 7:
                        // Function: G
                        //structure_g();
                        break;

                case 8:
                        // Function: H
                        //structure_h();
                        break;

                case 9:
                        // Function: I
                        //structure_i();
                        break;

                case 10:
                        // Function: J
                        //structure_j();
                        break;

                case 11:
                        // Function: K
                        //structure_k();
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