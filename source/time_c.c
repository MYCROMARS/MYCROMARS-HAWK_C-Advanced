// TIME C
#include <time.h>


// Main Function
void time_c(void){
  
    // Output
    printf("### TIME C: Time is 00:00 PM ###\n\n");
    
    // Create: store current Time & Date -----------------------s
    time_t time_a;

    // Create: store Local time
    struct tm* pointer_a;
    char buffer[80];

    // Current time
    time(&time_a);

    // Assign: Convert to Local Time
    pointer_a = localtime(&time_a);

    // Current time as Hours & Minutes
    strftime(buffer, 80, "Time is %I:%M %p.", pointer_a);
     
    puts(buffer);
    printf("%s", buffer);
}