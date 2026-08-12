#include <math.h>

// Windows
#ifdef _WIN32 
    #include <windows.h>    // UTF-8
#endif

//#define PI 3.14159265
  #define PI_d 3.14159265358979323846

// MATH D

// Main Function
void math_d(void){
  
    // Output
    printf("### MATH D: float, double, long double ###\n\n");

    // Windows
    #ifdef _WIN32 
        // Terminals auf UTF-8 (° degree)
        SetConsoleOutputCP(65001);
    #endif

    //long double PI_3 = 3.14159265358979323846;

       // Create
    float rad_1;
    double rad_2;
    long double rad_3;
    
    // Semicircle (Radius = 1) PI/180° = 1 rad
    rad_1 = PI_d/180;
    rad_2 = PI_d/180;
    rad_3 = PI_d/180;

    // float sinhf(float x);             Single-Precision .6  decimal places
    // double sinh(double x);            Medium-Precision .15 decimal places
    // long double sinhl(long double x); High-Precision   .19 decimal places
    

    //Assign
    
    float sin1 = 0.5f;
    double sin2 = sin1;
    long double sin3 = sin1;
    
    // 1. built-in C function
    float result_1 = asinf(sin1);
    double result_2 = asin(sin2);
    long double result_3 = asinl(sin3);
    
  
    // Output
    printf("Sine:                 %f\n\n", sin1);

    printf("float sinf(x):       %.6f\n", result_1);
    printf("double sin(x):       %.15f\n", result_2);
    printf("Long double sinl(x): %.19Lf\n\n", result_3);

    printf("result/rad float:       %.7f°\n", result_1/rad_1);
    printf("result/rad double :     %.16f°\n", result_2/rad_2);
    printf("result/rad Long double: %.19Lf°\n", result_3/rad_3);
    printf("\nStandard hardware cannot mathematically achieve greater precision with floating-point numbers.\n\n");
    
    printf("Output with 14 decimal places\n");
    printf("result/rad Long double: %.14Lf°\n\n", result_3/rad_3);


    long double winkel = result_3/rad_3; // Ihr berechnetes Ergebnis

    long double epsilon_1 = 1e-14L; // Erlaubte Abweichung (0.000000000001)
    printf("epsilon .14 %.19Lf\n", epsilon_1);

    if (fabsl(winkel - 30.0) < epsilon_1) {
        printf("The angle is close enough.\n\n");
    }
    else{
        printf("Not close enough.\n\n");
    }
   
    long double epsilon_3 = 1e-16L; // Erlaubte Abweichung (0.000000000000001)
    printf("epsilon .16 %.19Lf\n", epsilon_3);

    if (fabsl(winkel - 30.0) < epsilon_3) {
        printf("The angle is close enough.\n\n");
    }
    else{
        printf("Not close enough.\n\n");
    }
}