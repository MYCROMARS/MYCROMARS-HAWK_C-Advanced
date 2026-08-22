// TIME A
//#include <time.h>

// Main Function
void time_a(void){
  
    // Output
    printf("### TIME A: Get current Time & Date ###\n\n");
    
    // 00:00:00, 1. Januar 1970 Universal Coordinate Time (UTC)
    // If timeptr is NULL, the return value is not stored. 
    // If the calendar time is not available, the value (time_t) (-1) is returned.

    // Create: store current Time & Date ----------------------- Method 1
    time_t time_a;
    
    // Statement: not available
    if (time(&time_a) == -1)
    {
        printf("Time not available.\n");
        exit(1);
    }
    // Output
    printf("Time with ctime: %s\n", ctime(&time_a));


    // Create: store current Time & Date ----------------------- Method 2
    time_t time_b;
    
    // Assign: current Time
    time_b = time(NULL);
    
    // Create: store Local time
    struct tm* pointer_a;
    struct tm* pointer_b;
    
    // Assign: Convert to Local Time
    pointer_a = localtime(&time_b);

    // Convert it to UTC time
    pointer_b = gmtime(&time_b);
    
    // Output
    printf("Time with localtime, asctime: %s", asctime(pointer_a));
    printf("Time with gmtime, asctime:    %s", asctime(pointer_b));
}