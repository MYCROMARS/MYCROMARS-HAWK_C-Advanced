// MACRO C

// Define: Constant for Array
#define F1(a, b) ((a) < (b) ? (b) : (a))

// Main Function
void macro_c(void){
    // Output
    printf("### MACRO C: Function ###\n\n");

    // Create & assign
    int a = 10;
    int b = 100;
    int c;

    // Assign: Function
    c = F1(a, b);

    // Output
    printf("a: %d\n", a);
    printf("b: %d\n\n", b);
    printf("Output the larger value:\n");
    printf("c: %d\n", c);
}