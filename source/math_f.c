#include <math.h>

// Windows
#ifdef _WIN32 
    #include <windows.h>    // UTF-8
#endif

// MATH F

// Main Function
void math_f(void){
  
    // Output
    printf("### MATH E: Round down ###\n\n");

    // Windows
    #ifdef _WIN32 
        // Terminals auf UTF-8 (° degree)
        SetConsoleOutputCP(65001);
    #endif

    // Create & assign    
    double x3, y3;

    // Rounded down to its nearest int ------------------------
    x3 = 1.7;
    y3 = floor(x3);

    // Output
    printf("\nRounded down: %.1f\n", x3);
    printf("Result:         %d\n\n", (int)y3);
    
    
    // Rounds to the nearest int, result long long int
    x3 = 100000000000011.40000;
    y3 = llround(x3);

    // Output
    printf("Rounded nearest:      %.5f\n", x3);
    printf("Result long long int: %lld\n\n", (long long int)y3);
   

    // Rounds to the nearest int, result long long int
    x3 = 100000000000011.50000;
    y3 = llround(x3);

    // Output
    printf("Rounded nearest:      %f\n", x3);
    printf("Result long long int: %lld\n\n", (long long int)y3);
    
    
    // Rounds to the nearby int, result long int
    x3 = 20001.4;
    y3 = lrint(x3);

    // Output
    printf("Rounded nearby:   %f\n", x3);
    printf("Result long int:  %ld\n\n", (long int)y3);
   
    // Rounds to the nearby int, result long int
    x3 = 20001.5;
    y3 = lrint(x3);

    // Output
    printf("Rounded nearby:   %f\n", x3);
    printf("Result long int:  %ld\n\n", (long int)y3);
}