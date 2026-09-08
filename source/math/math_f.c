// MATH F

#include <float.h> // FLT_ROUNDS

// Windows
// #ifdef _WIN32 
//     #include <windows.h>    // UTF-8
// #endif

// Main Function
void math_f(void){
  
    // Output
    printf("### MATH F: Round down and up ###\n\n");

    // Windows
    // #ifdef _WIN32 
    //     // Set terminal to UTF-8 (° degree)
    //     SetConsoleOutputCP(65001);
    // #endif
    
    // Create & assign    
    double x, y;
    long double x2, y2;
    
    // Rounded down to its nearest int ----------------------
    x = 1.7;
    y = floor(x);

    // Output
    printf("floor(x) rounded down: %.1f\n", x);
    printf("Result:                %d\n\n", (int)y);
 
    // Rounded up to its nearest int ------------------------
    x = 1.4;
    y = ceil(x);

    // Output
    printf("ceil(x) rounded up: %.1f\n", x);
    printf("Result:             %d\n\n", (int)y);
    
   
    // Rounds to the nearest int, result long int ------------------
    //x3 = 50001.4;
    x = 1111111111.4;
    y = lround(x);

    // Output
    printf("lround(x) rounded nearest: %.1f\n", x);
    printf("Result long int:           %ld\n\n", (long int)y);
    

    // Rounds to the nearest int, result long long int --------------
    x2 = 911222333444555.1;
    y2 = llround(x2);

    // Output
    printf("llround(x) rounded nearest: %.1Lf\n", x2);
    printf("Result long long int:       %lld\n\n", (long long int)y2);
   

    // Rounds to the nearest int, result long long int ---------------
    x2 = 911222333444555.5;
    y2 = llround(x2);

    // Output
    printf("llround(x) rounded nearest: %.1Lf\n", x2);
    printf("Result long long int:       %lld\n\n", (long long int)y2);

    
    // ***************************************************************
    // FPU rounding mode (Floating Point Unit) 
    // lrint(x) & llrint(x) Uses the current CPU rounding instruction
    printf("\nMy operating system uses the current CPU rounding instruction: mode 1\n");
    printf("Rounding mode FLT_ROUNDS: %d\n\n", FLT_ROUNDS);
    printf("It rounds alternately down and up at .5\n");
    printf("It rounds down for the number 0 and for even numbers. And it rounds up for even numbers.\n\n");

    
    // Rounds to the nearby int, result long int --------------------
    x = 1000000000.5;
    y = lrint(x);
    
    // Output
    printf("lrint(x) rounded nearby: %.1f\n", x);
    printf("Result long int:         %ld\n\n", (long int)y);

    // Rounds to the nearby int, result long int --------------------
    x = 1.5;
    y = lrint(x);
    
    // Output
    printf("lrint(x) rounded nearby: %.1f\n", x);
    printf("Result long int:         %ld\n\n", (long int)y);
    

    // Rounds to the nearby int, result long int -------------------
    x = 2.5;
    y = lrint(x);
    
    // Output
    printf("lrint(x) rounded nearby: %.1f\n", x);
    printf("Result long int:         %ld\n\n", (long int)y);

    // Rounds to the nearby int, result long int -------------------
    x = 3.5;
    y = lrint(x);
    
    // Output
    printf("lrint(x) rounded nearby: %.1f\n", x);
    printf("Result long int:         %ld\n\n", (long int)y);

    // Rounds to the nearby int, result long int -------------------
    x = 4.5;
    y = lrint(x);
    
    // Output
    printf("lrint(x) rounded nearby: %.1f\n", x);
    printf("Result long int:         %ld\n\n", (long int)y);

    // Rounds to the nearby int, result long int -------------------
    x = 5.5;
    y = lrint(x);
    
    // Output
    printf("lrint(x) rounded nearby: %.1f\n", x);
    printf("Result long int:         %ld\n\n", (long int)y);

    // Rounds to the nearby int, result long int -------------------
    x = 6.5;
    y = lrint(x);
    
    // Output
    printf("lrint(x) rounded nearby: %.1f\n", x);
    printf("Result long int:         %ld\n\n", (long int)y);

    // Rounds to the nearby int, result long int -------------------
    x = 7.5;
    y = lrint(x);
    
    // Output
    printf("lrint(x) rounded nearby: %.1f\n", x);
    printf("Result long int:         %ld\n\n", (long int)y);

    // Rounds to the nearby int, result long int -------------------
    x = 8.5;
    y = lrint(x);
    
    // Output
    printf("lrint(x) rounded nearby: %.1f\n", x);
    printf("Result long int:         %ld\n\n", (long int)y);

    // Rounds to the nearby int, result long int -------------------
    x = 9.5;
    y = lrint(x);
    
    // Output
    printf("lrint(x) rounded nearby: %.1f\n", x);
    printf("Result long int:         %ld\n\n\n", (long int)y);


    // Rounds to the nearby int, result long long int --------------
    x2 = 911222333444555.5;
    y2 = llrint(x2);

    // Output
    printf("llrint(x) rounded nearby: %.1Lf\n", x2);
    printf("Result long long int:     %lld\n\n", (long long int)y2);

    // Rounds to the nearby int, result long long int --------------
    x2 = 911222333444888.5;
    y2 = llrint(x2);

    // Output
    printf("llrint(x) rounded nearby: %.1Lf\n", x2);
    printf("Result long long int:     %lld\n", (long long int)y2);
}