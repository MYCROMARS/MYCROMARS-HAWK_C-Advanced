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
void random_c(void){
  
    // Output
    printf("### RANDOM C: ---- ###\n\n");

    // Create
    int seconds_1;
    int seconds_2;
    int randomNumber[2];
    int pause;
    
    // Create: Time
    time_t TM1;
    
    // Get Time
    TM1 = time(NULL);
    
    // Create: store Local time in pointer
    struct tm *pointer_a;

    // Check
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
    printf("Pause: %d seconds\n", pause);
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
    printf("Current second: %d\n", seconds_1);
    printf("Start Loop...\n");
    
    // Assign: Goal
    seconds_2 = (seconds_1 + pause) % 59;

    // Loop: As long seconds_1 is not seconds_2 or seconds_2+1 (range = 2)
    while ((seconds_1 != seconds_2) && (seconds_1 != seconds_2+1))
    {
        // Platform: Windows
        #ifdef _WIN32 
            Sleep(1000);
        #elifdef __APPLE__
            // macOS, (1s = 1000000 )
            usleep(1000000);
        #elifdef __linux__
            sleep(5);
        #endif

        if (time(&TM1) == -1)
        {
            printf("Time not available.\n");
            exit(1);
        }

        // Current time
        time(&TM1);
    
        // Assign: Convert to Local Time
        pointer_a = localtime(&TM1);
        
        // Assign
        seconds_1 = pointer_a->tm_sec;
    }
    
    // Output
    printf("Current Second: %d\n", seconds_1);
    printf("Goal Second:    %d\n\n", seconds_2);


    if (time(&TM1) == -1)
    {
        printf("Time not available.\n");
        exit(1);
    }

    // set 2. Random with current time ---------------
    srand((unsigned) time(&TM1));

    // Assign: Random
    randomNumber[0] = (rand() % 100) +1;
    randomNumber[1] = (rand() % 100) +1;
  
    // Output
    printf("Random Number 1: %d\n", randomNumber[0]);
    printf("Random Number 2: %d\n", randomNumber[1]);
    

   




 


}