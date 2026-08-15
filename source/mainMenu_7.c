// Main Menu 7: MATH

// Main function
void mainMenu_7(int *m)
{
        // Output
        printf("\n*** MATH MENU ***\n");
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
                        // Function: A
                        math_a();
                        break;

                case 2: 
                        // Function: B
                        math_b();
                        break;
                
                case 3: 
                        // Function: C
                        math_c();
                        break;

                case 4: 
                        // Function: D
                        math_d();
                        break;
                        
                case 5:
                        // Function: E
                        math_e();
                        break;

                case 6:
                        // Function: F
                        math_f();
                        break;

                case 7:
                        // Function: F
                        math_g();
                        break;
                        
                default:
                        // Assign
                        *m = 0;

                        // Output
                        printf("### END ###\n");
                        break;
        }

        // Output
        printf("\n### MATH END ###\n");
        printf(".......................\n");
}  