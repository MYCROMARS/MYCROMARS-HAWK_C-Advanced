// Main Menu 4: --- 

// Main function
void mainMenu_4(int *m)
{
        // Output
        printf("\n*** BIT OPERATION MENU ***\n");
        printf("Press: (0) EXIT | (1) A | (2) B | (3) C | (4) D | (5) E | (6) F\n");
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

                default:
                        // Assign
                        *m = 0;

                        // Output
                        printf("### END ###\n");
                        break;
        }

        // Output
        printf("\n### BIT OPERATION END ###\n");
        printf(".......................\n");
}