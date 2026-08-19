// Main Menu 8: TIME

// Main function
void mainMenu_8(int *m)
{
        // Output
        printf("\n*** MATH MENU ***\n");
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
                        time_a();
                        break;

                case 2: 
                        // Function: B
                        
                        break;
                
                case 3: 
                        // Function: C
                        
                        break;

                case 4: 
                        // Function: D
                        
                        break;
                        
                case 5:
                        // Function: E
                        
                        break;

                case 6:
                        // Function: F
                        
                        break;

                case 7:
                        // Function: F
                     
                        break;
                        
                default:
                        // Assign
                        *m = 0;

                        // Output
                        printf("### END ###\n");
                        break;
        }

        // Output
        printf("\n### TIME END ###\n");
        printf(".......................\n");
}  