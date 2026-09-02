// RANDOM C
#include <time.h>
#include <windows.h>

// Main Function
void random_c(void){
  
    // Output
    printf("### RANDOM C: ---- ###\n\n");

    time_t TM1;
    TM1 = time(NULL);

    // Create: store Local time
    struct tm *pointer_a;

    // Create
    int seconds_1;
    int seconds_2;
    int randomNumber[2];
    int pause;

    if (time(&TM1) == -1)
    {
        printf("Time not available.\n");
        exit(1);
    }

    // set 1. Random with current time ---------------
    srand((unsigned) time(&TM1));

    // Assign: Random
    pause = (rand() % 10) +1;

    randomNumber[0] = (rand() % 100) +1;
    randomNumber[1] = (rand() % 100) +1;
  
    // Output
    printf("Pause: %d\n", pause);
    printf("Random Number 1: %d\n", randomNumber[0]);
    printf("Random Number 2: %d\n\n", randomNumber[1]);


    // Current time ---------------------------------
    time(&TM1);

    // Assign: Convert to Local Time
    pointer_a = localtime(&TM1);

    // Seconds
    //strftime(save_a, 80, "Seconds (S): %S", pointer_a);
    seconds_1 = pointer_a->tm_sec;
    
    // Output
    //printf("%s\n", save_a);
    printf("Seconds current: %d\n", seconds_1);
    printf("Start Loop...\n");
    
    // Assign: Goal
    seconds_2 = (seconds_1 + pause) % 59;

    // Loop
    while (seconds_1 != seconds_2)
    {
        //Sleep(1000);

        // Current time
        time(&TM1);
    
        // Assign: Convert to Local Time
        pointer_a = localtime(&TM1);
        
        // Assign
        seconds_1 = pointer_a->tm_sec;
    }
    
    // Output
    printf("Seconds current: %d\n", seconds_1);
    printf("Seconds goal:    %d\n\n", seconds_2);


    // set 2. Random with current time ---------------
    srand((unsigned) time(&TM1));

    // Assign: Random
    randomNumber[0] = (rand() % 100) +1;
    randomNumber[1] = (rand() % 100) +1;
  
    // Output
    printf("Random Number 1: %d\n", randomNumber[0]);
    printf("Random Number 2: %d\n", randomNumber[1]);
    

   




 


}