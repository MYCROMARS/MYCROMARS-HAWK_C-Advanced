// Integrate libraries direct:
// #include <stdio.h>

// Main Menu 6: MACRO

// Main function
void mainMenu_6(int *m)
{
        // Output
        printf("\n*** MACRO MENU ***\n");
        printf("Press: (0) EXIT\n");
        printf("Press: (1) A | (2) B | (3) C | (4) D\n");
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
                        macro_a();
                        break;

                case 2: 
                        // Function: B
                        macro_b();
                        break;
                
                case 3: 
                        // Function: C
                        macro_c();
                        break;

                case 4: 
                        // Function: D
                        macro_d();
                        break;
                
                case 5:
                        // Function: E
                      
                        break;
                        
                default:
                        // Assign
                        *m = 0;

                        // Output
                        printf("### END ###\n");
                        break;
        }

        // Output
        printf("\n### MACRO END ###\n");
        printf(".......................\n");
}  