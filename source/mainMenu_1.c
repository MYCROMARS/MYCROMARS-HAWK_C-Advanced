// Main Menu 1: LOOP

// Main function
void mainMenu_1(int *m)
{
        // Output
        printf("\n*** LOOP MENU ***\n");
        printf("Press: (0) EXIT\n");
        printf("Press: (1) A | (2) B\n");
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
                        loop_a();
                        break;

                case 2:
                        // Function: B
                        loop_b();
                        break;

                default:
                        // Assign
                        *m = 0;

                        // Output
                        printf("### END ###\n");
                        break;
        }

        // Output
        printf("\n### Loop END ###\n");
        printf(".......................\n");
}