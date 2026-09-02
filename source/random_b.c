// RANDOM A
#include <time.h>

// Main Function
void random_b(void){
  
    // Output
    printf("### RANDOM B: Range ###\n\n");

    // set Random with current time
    srand(time(NULL));

    // Create & assign
    int randomNumber[2];

    randomNumber[0] = (rand() % 10) +1;
    randomNumber[1] = (rand() % 10) +1;

    // Output
    printf("Random Range 1: %d\n", randomNumber[0]);
    printf("Random Range 2: %d\n", randomNumber[1]);

}