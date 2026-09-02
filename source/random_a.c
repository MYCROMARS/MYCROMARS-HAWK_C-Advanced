// RANDOM A
//#include <time.h>

// Main Function
void random_a(void){
  
    // Output
    printf("### RANDOM A: srand() & rand() ###\n\n");

    // set Random with current time
    srand(time(NULL));

    // Create: Int Array
    int randomNumber[4];

    // Assign: Random
    randomNumber[0] = rand();
    randomNumber[1] = rand();
    randomNumber[2] = rand();
    randomNumber[3] = rand();

    // Output
    printf("Random Number 1: %d\n", randomNumber[0]);
    printf("Random Number 2: %d\n", randomNumber[1]);
    printf("Random Number 3: %d\n", randomNumber[2]);
    printf("Random Number 4: %d\n\n", randomNumber[3]);


    // set Random 
    time_t TM;
    srand((unsigned) time(&TM));

      // Create: Int Array
    int randomNumber_2[4];

    // Assign: Random
    randomNumber_2[0] = rand();
    randomNumber_2[1] = rand();
    randomNumber_2[2] = rand();
    randomNumber_2[3] = rand();

    // Output
    printf("Random Number 1: %d\n", randomNumber_2[0]);
    printf("Random Number 2: %d\n", randomNumber_2[1]);
    printf("Random Number 3: %d\n", randomNumber_2[2]);
    printf("Random Number 4: %d\n", randomNumber_2[3]);
}