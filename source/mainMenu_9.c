// if it's not working acivate this (on macOS):
// #include <stdio.h>

// Main Menu 9:  ---

// Main function
void mainMenu_9(int *m)
{
        // Output
        printf("\n*** --- MENU ***\n");
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
                        // Assign
                        *m = 0;

                        // Output
                        printf("### EXIT ###\n");
                        break;

                case 1:
                        // Function: A
                        //malloc_a();
                        break;

                case 2:
                        // Function: B
                        //malloc_b();
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