#include <math.h>

#define PI 3.14159265


// MATH A

void math_a(void){
    // Output
    printf("### MATH A: From Degree to Sine, Cosine, tangent  ###\n\n");
    
    double a, rad, sin1, cos1, tan1;
    double x, y, radius, alpha;
    
    a = 45.0;
    
    // Halbkreis PI / 180 Grad, 1 ° = v
    rad = PI / 180;
    
    printf("PI: %.8f\n", PI);
    printf("1 Rad = PI/180: %f\n\n", rad);
    
    // benötigt den PI/180 wert
    sin1 = sin(a*rad);
    cos1 = cos(a*rad);
    tan1 = tan(a*rad);
    
    printf("%.2f° * rad: %f = %f sin(rad): %f\n", a, rad, a*rad, sin1);
    printf("%.2f° * rad: %f = %f cos(rad): %f\n", a, rad, a*rad, cos1);
    printf("%.2f° * rad: %f = %f tan(rad): %f\n\n", a, rad, a*rad, tan1);
    
    // 1°
    rad = PI/180; 
    sin1 = sin(rad);
    printf("1°  = rad: %f sin: %f\n", rad, sin1);
    
    // 45°
    rad = PI/4; 
    sin1 = sin(rad);
    printf("45° = rad: %f sin: %f\n", rad, sin1);
    
    //  90°
    rad = PI/2; 
    sin1 = sin(rad);
    printf("90° = rad: %f sin: %f\n\n", rad, sin1);
    
    
    printf("\n### From Sine to Degree  ###\n\n");
    //  asin(sinus), gives the rad, * PI/180 = degree°
    sin1 = 1; 
    rad = asin(sin1);
    printf("sine: %.1f\n", sin1);
    printf("Rad: %f\n", rad);
    printf("Angle = %f/(PI/180): %.2f°\n\n", rad, rad/(PI/180));
    
    sin1 = 0.5; 
    rad = asin(sin1);
    printf("sine: %.1f\n", sin1);
    printf("Rad: %f\n", rad);
    printf("Angle = %f/(PI/180): %.2f°\n", rad, rad/(PI/180));
   

}