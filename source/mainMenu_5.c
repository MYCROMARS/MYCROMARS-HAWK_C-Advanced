// Integrate libraries direct:
// #include <stdio.h>

// Main Menu 5: DATA

// Main function
void mainMenu_5(int *m)
{
        // Output
        printf("\n*** DATA MENU ***\n");
        printf("Press: (0) EXIT | (1) A | (2) B | (3) C | (4) D \n");
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