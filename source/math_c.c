#include <math.h>

// Windows
#ifdef _WIN32 
    #include <windows.h>    // UTF-8
#endif

#define PI 3.14159265

// Create 
char buffer[50];

// Catch invalid input
void scanString_math_c(void){
    // Input
        scanf("%s", &buffer[0]);
        buffer[0] = '\0';
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
    printf("### MATH A: From Sine to Degree ###\n\n");
    
    // Create
    double rad, sin1;
    
    // Semicircle (Radius = 1) PI/180° = 1 rad
    rad = PI / 180;

    // Output: PI
    printf("PI: %.8f (semicircle)\n\n", PI);

    // Output: Radiant
    printf("1 Rad = PI/180: %f\n\n", rad);
    
    // Assign  asin(sinus), gives the rad, * PI/180 = degree
    sin1 = 1; 

    start:

    // Conditional statement
    if (scanf("%f", &sin1) == 0)  {
        // Output
        printf("\nInput is not a number!\n\n");

        // function: Catch invalid input (Letters instead of numbers)
        scanString_math_c();

        // Go to
        goto start;
    }
    else if (sin1 >= 0 && sin1 <= 1){

    
        
    }
    else {
        // Wrong number, not 0...1
        // Output
        printf("\nInput is wrong, not 0...1\n\n");

        // Got to
        goto start;
    }


    rad = asin(sin1);

    // Output: sin, rad, angle
    printf("sine:  %.1f\n", sin1);
    printf("Rad:   %f\n", rad);
    printf("Angle: %.2f°\n\n", rad/(PI/180));
    

}