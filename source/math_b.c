#include <math.h>

// Windows
#ifdef _WIN32 
    #include <windows.h>    // UTF-8
#endif

#define PI 3.14159265


// MATH B

void math_b(void){
    // Output
    printf("### MATH B: From Sine to Degree ###\n\n");
    
    // Windows
    #ifdef _WIN32 
        // Terminal auf UTF-8 
        SetConsoleOutputCP(65001);
    #endif
    
    // Create
    double rad, rad_2, sin1;
    
    // Semicircle (Radius = 1) PI/180° = 1 rad
    rad = PI/180;

    // Output: PI
    printf("PI: %.8f (semicircle)\n\n", PI);

    // Output: Radiant
    printf("1 Rad = PI/180: %f\n\n", rad);
    
    // Assign  asin(sinus), gives the rad, * PI/180 = degree
    sin1 = 1; 
    rad_2 = asin(sin1);

    // Output: sin, rad, angle
    printf("sine:  %.1f\n", sin1);
    printf("Rad:   %f\n", rad_2);
    printf("Angle: %.2f°\n\n", rad_2/rad);
    
    // Assign
    sin1 = 0.5; 
    rad_2 = asin(sin1);

    // Output: sin, rad, angle
    printf("sine:  %.1f\n", sin1);
    printf("Rad:   %f\n", rad_2);
    printf("Angle: %.2f°\n\n", rad_2/rad);
  
    // Assign
    sin1 = 0.422618; 
    rad_2 = asin(sin1);

    // Output: sin, rad, angle
    printf("sine:  %.6f\n", sin1);
    printf("Rad:   %f\n", rad_2);
    printf("Angle: %.2f°\n", rad_2/rad);
}