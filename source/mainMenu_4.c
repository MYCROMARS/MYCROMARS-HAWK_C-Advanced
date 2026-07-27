// Main Menu 4: --- 

// Main function
void mainMenu_4(int *m)
{
        // Output
        printf("\n*** BIT OPERATION MENU ***\n");
        printf("Press: (0) EXIT | (1) A | (2) B\n");
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
                        bit_a();
                        break;

                case 2:
                        // Function: B 
                        bit_b();
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