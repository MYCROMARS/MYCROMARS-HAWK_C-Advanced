// MACRO B

// Define: Constant for Array
#define A1 2000, \
           100, \
           7, \
           5

// Main Function
void macro_b(void){
    // Output
    printf("### MACRO B: Array ###\n\n");

    // Create: Array
    int array[] = {A1};

    // Output
    printf("Array 0: %d\n", array[0]);
    printf("Array 1: %d\n", array[1]);
    printf("Array 2: %d\n", array[2]);
    printf("Array 3: %d\n", array[3]);
}