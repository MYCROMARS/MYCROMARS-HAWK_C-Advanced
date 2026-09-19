// Output B

// Main function
void output_b(void) {
    // Output
    printf("### OUTPUT B: Array and Pointer of Array ###\n\n");

    // Array
    int x[] = {1,2};
    
    // Output: 
    // some are deactivated, they have compiler warnings, but you can activate them
    printf("Array x[0]: %d\n", x[0]);          // 1
    printf("Array x[1]: %d\n\n", x[1]);        // 2
    //printf("Array x[0]: %p\n", x[0]);          // 0x1   hexadezimal number
    //printf("Array x[1]: %p\n\n", x[1]);        // 0x2   hexadezimal number
    //printf("Address x[0]: %d\n", &x[0]);       // address
    //printf("Address x[1]: %d\n", &x[1]);       // address
    printf("Address x[0]: %p\n", &x[0]);       // address as a hexadezimal number
    
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
    
    printf("Address p:      %p\n", p);          // Address as a hexadezimal number
    printf("Address &p[0]:  %p\n", &p[0]);      // Address as a hexadezimal number
    printf("Address &p[1]:  %p\n\n", &p[1]);      // Address as a hexadezimal number
        
    //printf("Address p:      %d\n", p);           // Address
    //printf("Address &p[0]:  %d\n", &p[0]);       // Address
    //printf("Address &p[1]:  %d\n", &p[1]);       // Address
}