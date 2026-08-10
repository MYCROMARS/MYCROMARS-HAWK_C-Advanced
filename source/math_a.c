#include <math.h>

#define PI 3.14159265


// MATH B

void math_a(void){
    // Output
    printf("### MATH A: From Degree to Radiant to Sine, Cosine & tangent  ###\n\n");
    
    // Create
    double angle, rad, sin1, cos1, tan1;
    
    // Assign
    angle = 45.0;
    
    // Semicircle (Radius = 1) PI/180° = 1 rad
    rad = PI / 180;
    
    // Output: PI
    printf("PI: %.8f (semicircle)\n\n", PI);

    // Output: Radiant
    printf("1 Rad = PI/180: %f\n\n", rad);
    
    //Assign: sin(Angle * 1 Radiant)
    sin1 = sin(angle*rad);
    cos1 = cos(angle*rad);
    tan1 = tan(angle*rad);
    
    // Output: sin, cos, tan
    printf("%.2f° * rad = %f sin(rad): %f\n", angle, angle*rad, sin1);
    printf("%.2f° * rad = %f cos(rad): %f\n", angle, angle*rad, cos1);
    printf("%.2f° * rad = %f tan(rad): %f\n\n", angle, angle*rad, tan1);
    

    //Assign
    rad = PI/180; 
    sin1 = sin(rad);

    // Output sin at 1°
    printf("1°  =   1 rad: %f sin(rad): %f\n", rad, sin1);
    

    // Assign
    rad = PI/4; 
    sin1 = sin(rad);

    // Output: sin at 45°
    printf("45° = 1/4 rad: %f sin(rad): %f\n", rad, sin1);
    

    //  Assign
    rad = PI/2; 
    sin1 = sin(rad);
    
    // Output: sin at 90°
    printf("90° = 1/2 rad: %f sin(rad): %f\n\n", rad, sin1);
    
    
    //  Assign
    rad = PI/180; 
    rad = rad * 25;
    sin1 = sin(rad);

    // Output: sin at 90°
    printf("25° = 25 rad:  %f sin: %f\n", rad, sin1);
    
}