// MACRO D

// Define: Constant for Array
#define T1(typ, a, b) {typ var1 = a; \
                        typ var2 = b; \
                        a = var2; \
                        b = var1; \
                    }

// Main Function
void macro_d(void){
    // Output
    printf("### MACRO D: Create variable in define ###\n\n");

    // Create & assign
    int a = 10;
    int b = 20;
    
    // Output
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    printf("\nSwitch a & b\n");

    // Assign: Function
    T1(int, a, b);

    // Output
    printf("a: %d\n", a);
    printf("b: %d\n", b);
}