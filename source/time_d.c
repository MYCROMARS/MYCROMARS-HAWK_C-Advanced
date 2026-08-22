// TIME D
#include <time.h>

// Main Function
void time_d(void){
    // Output
    printf("### TIME D: Full years, months, days as Integer ###\n\n");
    
    // Create: store current Time & Date -----------------------s
    time_t time_a;
  
    // Current time
    time(&time_a);

    // Create: store Local time
    struct tm *pointer_a;

    // Assign: Convert to Local Time
    pointer_a = localtime(&time_a);

    // Create
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;

    // create: year
    v1 = pointer_a->tm_year;
 
    // create: day of the year
    v2 = pointer_a->tm_yday;
    
    // create: Month 
    v3 = pointer_a->tm_mon;
   
    // create: day of the Month 
    v4 = pointer_a->tm_mday;
   
    // create: day of the Week
    v5 = pointer_a->tm_wday;

    // create: Hour
    v6 = pointer_a->tm_hour;

    // create: Minutes
    v7 = pointer_a->tm_min;
    
    // create: Seconds
    v8 = pointer_a->tm_sec;
    
    // create: Summertime
    v9 = pointer_a->tm_isdst;


    // Output: Full years, months, days
    printf("Year: %d\n", v1-100);             // +100
    printf("Day of the year: %d\n\n", v2);    // -1

    printf("Month: %d\n", v3);                // -1
    printf("Day of the Month: %d\n\n", v4);

    printf("Day of the week: %d\n\n", v5);

    printf("Hour: %d\n", v6);
    printf("Minutes: %d\n", v7);
    printf("Seconds: %d\n\n", v8);
    printf("Summertime: %d\n", v9);
}