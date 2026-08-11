#include <math.h>

// Windows
#ifdef _WIN32 
    #include <windows.h>    // UTF-8
#endif

#define PI 3.14159265

// Create 
char buffer_math_c[50];

// Catch invalid input
void scanString_math_c(void){
    // Input
        scanf("%s", &buffer_math_c[0]);
        buffer_math_c[0] = '\0';
}

// MATH C

// Main Function
void math_c(void){
    // Windows
    #ifdef _WIN32 
        // Terminal auf UTF-8 
        SetConsoleOutputCP(65001);
    #endif

    // Output
    printf("### MATH A: Input Sine to Degree ###\n\n");
    
    // Create
    double rad_1, rad_2, sin1;
    int input = 0;
    
    // Semicircle (Radius = 1) PI/180° = 1 rad
    rad_1 = PI / 180;

    // Output: PI
    printf("PI: %.8f (semicircle)\n", PI);

    // Output: Radiant
    printf("1 Rad = PI/180: %f\n", rad_1);
    

    // Go here
    start:
    
    // Output
    printf("\nInput Sine 0...1: ");

    // Conditional statement: Input Sine
    if (scanf("%lf", &sin1) == 0)  {
        // Output
        printf("\nInput is not a number!\n\n");

        // function: Catch invalid input (Letters instead of numbers)
        scanString_math_c();

        // Go to
        goto start;
    }
    else if (sin1 >= 0 && sin1 <= 1){

        rad_2 = asin(sin1);

        // Output: sin, rad, angle
        printf("sine:  %f\n", sin1);
        printf("Rad:   %f\n", rad_2);
        printf("Angle: %.2f°\n\n", rad_2/rad_1);
    }
    else {
        // Wrong number, not 0...1
        // Output
        printf("\nInput is wrong, not 0...1\n\n");

        // Got to
        goto start;
    }

    // Go here
    RESTART:

    printf("Input (0) EXIT | (1) RESTART: ");
    // statement: Exit or Restart -------------------------------------
    if (scanf("%d", &input) == 0)  {
        // Output
        printf("\nInput is not a number!\n\n");

        // function: Catch invalid input (Letters instead of numbers)
        scanString_math_c();

        // Go to
        goto RESTART;
    }
    else if (input >= 0 && input <= 1){

        // Statement
        if (input == 1){
            // Go to
            goto start;
        }
    }
    else {
        // Wrong number, not 0...1
        // Output
        printf("\nInput is wrong, not 0/1\n\n");

        // Got to
        goto RESTART;
    }

    
    

}