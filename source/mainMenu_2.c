// Main Menu 2: ENUM

// Main function
void mainMenu_2(int *m)
{
    // Output
    printf("\n*** ENUM MENU ***\n");
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
                // Function
                enum_a();
                break;

        case 2:
                // Function
                enum_b();
                break;
        
        case 3:
                // Function
                enum_c();
                break;

        case 4:
                // Function
                enum_d();
                break;

        case 5:
                // Function
                enum_e();
                break;

        case 6:
                // Function
                enum_f();
                break;

        default:
                // Assign
                *m = 0;

                // Output
                printf("### END ###\n");
                break;
    }

    // Output
    printf("\n### Enum END ###\n");
    printf(".......................\n");
}