// if it's not working acivate this (on macOS):
// #include <stdio.h>

// Main Menu 5: 

// Main function
void mainMenu_5(int *m)
{
        // Output
        printf("\n*** --- MENU ***\n");
        printf("Press: (0) EXIT\n");
        printf("Press: (1) A | (2) B | (3) C | (4) D\n");
        printf("Press: (5) E | (6) F \n");
        printf("Your Input: ");

        // Input
        scanf("%d", m);

        // Output
        printf("\n");

        // create
        // int value_1;
        // int value_2;
        // int value_3;
        // int value_4;

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
                        //pointer_a();
                        break;

                case 2: 
                        // Function: B
                        //pointer_b();
                        break;
                
                case 3: 
                        // Function: C
                        //pointer_c();
                        break;

                case 4: 
                        // Assign
                        //value_1 = 1234567;

                        // Function: D
                        //pointer_d(&value_1);

                        // Output
                        //printf("Int value 1: %d\n", value_1);
                        break;
                
                case 5:
                        // Assign
                        //value_2 = 7;

                        // assign
                        //int *pointer_1 = &value_2;

                        // Function: E
                        //pointer_e(pointer_1);

                        // Output
                        //printf("Int value 2: %d\n", value_2);
                        break;

                case 6:
                        // Output
                        printf("## --- F: --- ###\n\n");

                        // Assign
                        //value_3 = 100;

                        // Create
                        //int *pointer_2;

                        // Asssign
                        //pointer_2 = &value_3;

                        // Output
                        //printf("Int value 3: %d\n\n", value_3);

                        // Function: F
                        //pointer_f(pointer_2);

                        // Output
                        //printf("Int value 3: %d\n", value_3);
                        
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