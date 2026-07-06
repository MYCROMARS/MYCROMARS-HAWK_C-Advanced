// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/loop_e.h"

// LOOP E

// Main function
void loop_e(void){
    printf("### Loop E: For loop: Sort value 1...7 ###\n\n");

    // Create & assign
    const int value_1 = 7;
    int value_2[7] = {7, 6, 5, 4, 3, 2, 1};

    // Create
    int x, y, storeage;

    // Output
    printf("original:\n");

    // For loop
    for(x=0; x<value_1; x++){
        // Output
        printf("%d ", value_2[x]);
    }

    // Output
    printf("\n\n");

    // For loop: 7 times
    for(x=0; x<value_1; x++){

        // For loop: 6 times
        for(y=x+1; y<value_1; y++){

            // Compare and sort
            if (value_2[x] > value_2[y]){
                storeage = value_2[x];
                value_2[x] = value_2[y];
                value_2[y] = storeage;
            }
        }
    }

    // Output
    printf("sorted:\n");
    
    // For loop
    for(x=0; x<value_1; x++){
        // Output
        printf("%d ", value_2[x]);
    }

    // Output
    printf("\n");
}
