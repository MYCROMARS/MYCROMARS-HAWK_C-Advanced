// Main Menu 4: BITS

// Main function
void mainMenu_4(int *m)
{
        main_1:

        // Output
        printf("\n*** BITS MENU ***\n");
        printf("Press: (0) EXIT | (1) A | (2) B | (3) C | (4) D | (5) E | (6) F | (7) G\n");
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
                        // Function: A, Decimal to Binary to Decimal
                        bit_a();
                        break;

                case 2:
                        // Function: B, Bitwise AND 
                        bit_b();
                        break;
                
                case 3:
                        // Function: C, Bitwise OR
                        bit_c();
                        break;
                
                case 4:
                        // Function: D, Bitwise NOT
                        bit_d();
                        break;

                case 5:
                        // Function: E, Bitwise shift left 
                        bit_e();
                        break;

                case 6:
                        // Function: F, Bitwise shift right
                        bit_f();
                        break;
                
                case 7:
                        // Function: G,  Decimal to Binary Loop
                        bit_g();

                        // Goto
                        goto main_1;

                default:
                        // Assign
                        *m = 0;

                        // Output
                        printf("### END ###\n");
                        break;
        }

        // Output
        printf("\n### BITS END ###\n");
        printf(".......................\n");
}