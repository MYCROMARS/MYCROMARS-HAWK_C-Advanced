#include <math.h>

// Windows
#ifdef _WIN32 
    #include <windows.h>    // UTF-8
#endif



// MATH E

// Main Function
void math_e(void){
  
    // Output
    printf("### MATH E: To the power & root of a number ###\n\n");

    // Windows
    #ifdef _WIN32 
        // Terminals auf UTF-8 (° degree)
        SetConsoleOutputCP(65001);
    #endif


    // Create & assign
    int e = 1;
    double x;
    double y;

    // Euler's number exp^x
    x = exp(e);

    // Output
    printf("To the power e: %d\n", e);
    printf("Euler's number exp^%d: %.5f\n\n", e, x);
    
    
    // Euler's number exp^x
    e = 2;
    x = exp(e);

    // Output
    printf("To the power e: %d\n", e);
    printf("Euler's number exp^%d: %.5f\n\n", e, x);
    
    
    // 2 exp^x
    e = 3;
    x = exp2(e);

    // Output
    printf("To the power e: %d\n", e);
    printf("Number 2 exp^%d: %.5f\n\n", e, x);
    
    
    // x to the power of y
    e = 4;
    x = 3; 
    y = pow(x, e); // e can be : 1/2

    // Output
    printf("To the power e: %d\n", e);
    printf("Number %.f exp^%d: %.5f\n\n", x, e, y);
    
    
    // squuare root of x
    x = 4;
    y= sqrt(x);

    // Output
    printf("Number x: %.f\n", x);
    printf("Squuare root of sqrt(%.f): %.2f\n\n", x, y);


    // qube root of x
    x = 8;
    y= cbrt(x);

    // Output
    printf("Number x: %.f\n", x);
    printf("Qube root of sqrt(%.f): %.2f\n\n", x, y);
}