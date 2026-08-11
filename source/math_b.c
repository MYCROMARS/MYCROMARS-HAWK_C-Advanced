#include <math.h>

// Windows
#ifdef _WIN32 
    #include <windows.h>    // UTF-8
#endif

#define PI 3.14159265


// MATH A

void math_b(void){
    // Windows
    #ifdef _WIN32 
        // Terminal auf UTF-8 
        SetConsoleOutputCP(65001);
    #endif

    // Output
    printf("### MATH A: From Sine to Degree ###\n\n");
    
    // Create
    double rad, sin1, cos1, tan1;
    
    // Semicircle (Radius = 1) PI/180° = 1 rad
    rad = PI / 180;

    // Output: PI
    printf("PI: %.8f (semicircle)\n\n", PI);

    // Output: Radiant
    printf("1 Rad = PI/180: %f\n\n", rad);
    
    // Assign  asin(sinus), gives the rad, * PI/180 = degree°
    sin1 = 1; 
    rad = asin(sin1);

    // Output: sin, rad, angle
    printf("sine:  %.1f\n", sin1);
    printf("Rad:   %f\n", rad);
    printf("Angle: %.2f°\n\n", rad/(PI/180));
    
    // Assign
    sin1 = 0.5; 
    rad = asin(sin1);

    // Output: sin, rad, angle
    printf("sine:  %.1f\n", sin1);
    printf("Rad:   %f\n", rad);
    printf("Angle: %.2f°\n\n", rad/(PI/180));
  
    // Assign
    sin1 = 0.422618; 
    rad = asin(sin1);

    // Output: sin, rad, angle
    printf("sine:  %.6f\n", sin1);
    printf("Rad:   %f\n", rad);
    printf("Angle: %.2f°\n", rad/(PI/180));
}