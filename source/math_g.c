// MATH G

#include <float.h> // FLT_MAX

// Windows
#ifdef _WIN32 
    #include <windows.h>    // UTF-8
    // Terminals auf UTF-8 (° degree)
    SetConsoleOutputCP(65001);
#endif

// Main Function
void math_g(void){
  
    // Output
    printf("### MATH E: Test, long int, long long, float ###\n");

    // Create & assign
    long int x1;
    long long int y1;

    float x2, y2;

    // Test long int
    x1 = 2147483647;
    printf("Output long int: %ld\n", x1);

    // Test long long
    y1 = 9223372036854775807;
    printf("Output long long int: %lld\n\n", y1);
    
    // Test float %.7f
    x2 = 3.1111111;
    printf("Output float: %.7f\n\n", x2);

    // Test float 3.4E+38
    x2 = 300001.4111;
    printf("Output float: %f\n", x2);
    printf("Output float: %.4f\n\n", x2);
    
    // Test float max %e
    printf("Output float max: %e\n", FLT_MAX);
    printf("Output float max-max: %e\n\n", FLT_MAX-FLT_MAX);
    
    // Test float %e
    x2 = 155555500002222222222333333333344444444.0;
    printf("Output float e+38:       %e\n", x2);
    
    // Test Calculation
    x2 = x2 + x2;
    printf("Output Adition x2 + x2 : %e\n", x2);
}