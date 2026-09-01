// Main Menu 8: TIME

// Main function
void mainMenu_9(int *m)
{
        // Output
        printf("\n*** MEMORY MENU ***\n");
        printf("Press: (0) EXIT | (1) A | (2) B | (3) C \n");
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
                        memory_a();
                        break;

                case 2:
                        // Function: B
                        memory_b();
                        break;

                case 3:
                        // Function: C
                        memory_c();
                        break;

                
                default:
                        // Assign
                        *m = 0;

                        // Output
                        printf("### END ###\n");
                        break;
        }

        // Output
        printf("\n### MEMORY END ###\n");
        printf(".......................\n");
}  