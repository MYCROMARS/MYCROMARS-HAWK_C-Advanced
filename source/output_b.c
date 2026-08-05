// Integrate libraries direct:
//#include <stdio.h>
// #include "../header/output_b.h"

// Output B
// Main function
void output_b(void) {
    // Output
    printf("\n### OUTPUT B: Array and Pointer of Array ###\n\n");

    // Array
    int x[] = {1,2};
    
    // Output
    printf("Array x[0]: %d\n", x[0]);          // 1
    printf("Array x[1]: %d\n", x[1]);          // 2
    printf("Array x[0]: %p\n", x[0]);          // 0x1
    printf("Array x[1]: %d\n", &x[1]);         // 1862347652
    printf("Array x[0]: %p\n", &x[0]);         // 0x16f012b80
    
    printf("\n");
    
    // Pointer Array
    int *p = (int[]) {10,20};   

    // alternative spelling:
    // int x2[] = {10,20};
    // int *p = x2;
    
    // Output
    printf("Pointer p[0]:   %d\n", p[0]);       // 10
    printf("Pointer p[1]:   %d\n\n", p[1]);     // 20

    printf("Pointer *p:     %d\n", *p);         // 10
    printf("Pointer *(p+0): %d\n", *(p+0));     // 10
    printf("Pointer *(p+1): %d\n\n", *(p+1));   // 20
    
    printf("Pointer p:      %p\n", p);           // 6156790648
    printf("Pointer &p[0]:  %p\n", &p[0]);       // 6156790648
    printf("Pointer &p[1]:  %p\n\n", &p[1]);     // 6156790652
        
    printf("Pointer p:      %d\n", p);           // 1861823352
    printf("Pointer &p[0]:  %d\n", &p[0]);       // 1861823352
    printf("Pointer &p[1]:  %d\n", &p[1]);       // 1861823356

    printf("\n");
}