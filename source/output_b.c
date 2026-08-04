// if it's not working acivate this (on macOS):
//#include <stdio.h>
// #include "../header/output_b.h"

// Output B
// Main function
void output_b(void) {
    // Output
    printf("\n### OUTPUT B ###\n\n");

    int x[] = {1,2};
    printf("int: %d\n", x[0]);      // 1
    //printf("int: %p\n", x[0]);      // 0x1
    printf("int: %p\n", &x[0]);     // 0x16f012b80
    printf("int: %d\n\n", x[1]);    // 2

    //printf("int: %d\n\n", &x[1]);        // 1862347652

    // Pointer Array
    int *p = (int[]) {10,20};               
    printf("int 0: %d\n", p[0]);            // 10
    printf("int 1: %d\n\n", p[1]);          // 20

    printf("Valu 0 *p: %d\n", *p);              // 10
    printf("Value 0 *(p+0): %d\n", *(p+0));     // 10
    printf("Value 1 *(p+1): %d\n\n", *(p+1));   // 20
    
    printf("Address p: %p\n", p);           // 6156790648
    printf("Address &p: %p\n", &p[0]);      // 6156790648
    printf("Address &p: %p\n\n", &p[1]);    // 6156790652
    
    //printf("Address d: %d\n", p);           // 1861823352
    //printf("Address &p: %d\n", &p[0]);      // 1861823352
    //printf("Address &p: %d\n", &p[1]);      // 1861823356
    printf("\n");
}