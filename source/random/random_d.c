// RANDOM C
#include <time.h>

// Platform: Windows
#ifdef _WIN32 
    #include <windows.h>
#elifdef __APPLE__
    #include<unistd.h>
#elifdef __linux__
    #include<unistd.h>
#endif

// Main Function
void random_d(void){
  
    // Output
    printf("### RANDOM D: Random float Range ###\n\n");

    // Create
    float randomNumber[5];
    float div = 1.1;
    float range = 100.0;
    
    // Create: Time
    time_t TM1;
    
    // Get Time
    TM1 = time(NULL);
    
    // Create: store Local time in pointer
    struct tm  *pointer_a;

    // Check
    if (time(&TM1) == -1)
    {
        printf("Time not available.\n");
        exit(1);
    }

    // set 1. Random with current time ---------------
    srand((unsigned int)time(&TM1));

    randomNumber[0] = ((float)rand()/(float)(RAND_MAX));
    randomNumber[1] = ((float)rand()/(float)(RAND_MAX)) * range;

    // With fmodf
    randomNumber[2] = (float)rand();
    randomNumber[3] = randomNumber[2]/div;
    randomNumber[4] = fmodf((float)rand()/div, range); // need math.h
  
    // Output
    //printf("Pause: %d seconds\n", pause);
    printf("Random float Number 1: %f\n", randomNumber[0]);
    printf("float (range: %.1f):  %f\n\n", range, randomNumber[1]);

    printf("(float)rand():         %f\n", randomNumber[2]);
    printf("randomNumber[2]/%.1f:   %f\n", div, randomNumber[3]);
    printf("fmodf (range: %.1f):  %f\n", range, randomNumber[4]);
}