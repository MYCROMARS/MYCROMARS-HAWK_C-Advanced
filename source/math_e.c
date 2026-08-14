#include <math.h>

// Windows
#ifdef _WIN32 
    #include <windows.h>    // UTF-8
#endif



// MATH E

// Main Function
void math_e(void){
  
    // Output
    printf("### MATH E: To the power of ###\n\n");

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
    
    printf("To the power e: %d\n", e);
    printf("Euler's number exp^%d: %.5f\n\n", e, x);
    

    // Euler's number exp^x
    e = 2;
    x = exp(e);
    
    printf("To the power e: %d\n", e);
    printf("Euler's number exp^%d: %.5f\n\n", e, x);
    
    
    // 2 exp^x
    e = 3;
    x = exp2(e);
    
    printf("To the power e: %d\n", e);
    printf("Number 2 exp^%d: %.5f\n\n", e, x);
    
    // x to the power of y
    e = 4;
    x = 3; 
    y = pow(x, e);
    
    printf("To the power e: %d\n", e);
    printf("Number %.f exp^%d: %.5f\n\n", x, e, y);
}