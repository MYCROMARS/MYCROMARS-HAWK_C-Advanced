// MACRO C

// Define: Constant for Array
#define F1(a, b) ((a) < (b) ? (a) : (b))

// Main Function
void macro_c(void){

    // Create & assign
    int a = 10;
    int b = 100;
    int c;

    // Assign: Function
    c = F1(a, b);

    // Output
    printf("if a < b than result is a\n\n");

    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);
}