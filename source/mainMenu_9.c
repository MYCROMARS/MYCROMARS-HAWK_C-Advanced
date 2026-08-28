// Main Menu 8: TIME

// Main function
void mainMenu_9(int *m)
{
        // Output
        printf("\n*** MALLOC MENU ***\n");
        printf("Press: (0) EXIT | (1) A \n");
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
                        malloc_a();
                        break;

                
                default:
                        // Assign
                        *m = 0;

                        // Output
                        printf("### END ###\n");
                        break;
        }

        // Output
        printf("\n### MALLOC END ###\n");
        printf(".......................\n");
}  