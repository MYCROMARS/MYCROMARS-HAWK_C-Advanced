// MATH D

// Windows
#ifdef _WIN32 
    #include <windows.h>    // UTF-8
#endif

#define PI_d 3.141592653589793 

// Main Function
void math_d(void){
  
    // Output
    printf("### MATH D: Float, double, long double ###\n");
    
    // Windows
    #ifdef _WIN32 
    // Terminals auf UTF-8 (° degree)
    SetConsoleOutputCP(65001);
    #endif
    
    printf("Here you can see the point at which the computer can no longer represent the numbers accurately.\n");
    printf("For `float`, after the 5th digit.\n");
    printf("For `double`, after the 14th digit.\n");
    printf("For `long double`, after the 15th digit.\n\n");

    printf("PI as string: 3.1415926535897932384626433832795\n\n");

    long double PI_d2 = 3.1415926535897932384626433832795;

    // Output: 15 digits after the decimal point are fine.
    printf("PI: %.15Lf\n", PI_d2);
    printf("PI: %.19Lf\n", PI_d2);
    printf("PI: %.31Lf\n\n", PI_d2);

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
    printf("Sine:                %f\n\n", sin1);

    printf("float sinf(x):       %.6f\n", result_1);
    printf("double sin(x):       %.15f\n", result_2);
    printf("Long double sinl(x): %.19Lf\n\n", result_3);

    printf("result/rad float:       %.7f°\n", result_1/rad_1);
    printf("result/rad double :     %.15f°\n", result_2/rad_2);
    printf("result/rad Long double: %.19Lf°\n", result_3/rad_3);
    printf("\nStandard hardware cannot mathematically achieve greater precision with floating-point numbers.\n\n");
    
    printf("Output with 19 decimal places.\n");
    printf("With `long double`, the values ​​are incorrect after the 15th digit.\n");
    printf("result/rad Long double: %.19Lf°\n\n", result_3/rad_3);


    long double winkel = result_3/rad_3; // Ihr berechnetes Ergebnis
    long double digit_1 = 1e-15L; // Permissible deviation (0.000000000001)

    printf("digit .14 %.19Lf\n", digit_1);

    if (fabsl(winkel - 30.0) < digit_1) {
        printf("Close enough.\n\n");
    }
    else{
        printf("Not close enough.\n\n");
    }
   
    long double digit_3 = 1e-16L; // Permissible deviation (0.000000000000001)

    printf("digit .16 %.19Lf\n", digit_3);

    if (fabsl(winkel - 30.0) < digit_3) {
        printf("Close enough.\n\n");
    }
    else{
        printf("Not close enough.\n");
    }
}