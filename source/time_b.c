// TIME B
#include <time.h>

// Main Function
void time_b(void){
  
    // Output
    printf("### TIME B: Time difference ###\n\n");
    
    // Create: store current Time & Date -----------------------s
    time_t time_a, time_b;

    // Assign: current time
    time_a = time(NULL);

    // Create
    int a = 1;
    int b = 5;

    // Loop
    while (a <= b)
    {
        // Output
        printf("Input a number: ");

        // Input
        scanf("%d", &a);
       
        // Statement 
         if (a < b) {
             // Output
             printf("Input is less than %d\n\n", b);
         }
         else if (a>b){
             // Output
             printf("Input is greater than %d\n\n", b);
            }
            else 
            // Output
            printf("Input is equals %d\n\n", b);
    }
    
    // Assign: current time
    time_b = time(NULL);

    // Output
    printf("Time required: %.2f seconds\n", difftime(time_b, time_a));       
}