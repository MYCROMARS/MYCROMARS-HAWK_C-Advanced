// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/structure_d.h"

// Structure D

// Main function
void structure_d(void)
{
    // Output
    printf("### Structure D ###\n");
    printf("### Structure with long int, float & double ###\n\n");
    
    // Structure
    struct house_d1 {
        // Create
        long int value_1;
        float value_2;
        double value_3;
        
      // Structure Directory (declaration)
    } dh1_apartment_1;
    
    // Assign
    dh1_apartment_1.value_1 = 2000000000;
    dh1_apartment_1.value_2 = 2000000000;
    
    // Only 6 positions after the point are displayed.
    dh1_apartment_1.value_3 = 2000000000.1111111111;
    
    // Output
    printf("value 1, long int %%ld:\t %ld\n\n", dh1_apartment_1.value_1);
    
    printf("value 2, float %%f:\t %f\n", dh1_apartment_1.value_2);
    printf("value 2, float %%.0f:\t %.0f\n", dh1_apartment_1.value_2);
    printf("value 2, float %%.1f:\t %.1f\n\n", dh1_apartment_1.value_2);

    printf("value 3, double %%f:\t %f\n", dh1_apartment_1.value_3);
    printf("value 3, double %%.0f:\t %.0f\n", dh1_apartment_1.value_3);
    printf("value 3, double %%.1f:\t %.1f\n\n", dh1_apartment_1.value_3);

    printf("value 3, double %%g:\t %g\n", dh1_apartment_1.value_3);
    printf("value 3, double %%e:\t %e\n", dh1_apartment_1.value_3);
    printf("value 3, double %%.2f:\t %.2f\n", dh1_apartment_1.value_3);
} 