// TIME A

// Main Function
void time_a(void){
  
    // Output
    printf("### TIME A: -- ###\n\n");
    
    // 00:00:00, 1. Januar 1970 Universal Coordinate Time (UTC)
    // If timeptr is NULL, the return value is not stored. 
    // If the calendar time is not available, the value (time_t) (-1) is returned.

    // Create: store current Time & Date -----------------------s
    time_t saveTime;
    
    // Statement: not available
    if (time(&saveTime) == -1)
    {
        printf("Calendar time not available.\n");
        exit(1);
    }
    

    // Create: store current Time & Date -------------------------
    time_t saveTime_a;
    
    // Assign: current Time
    saveTime_a = time(NULL);
    
    // Create: store Local time
    struct tm* pointer_a;
    struct tm* pointer_b;
    
    // Assign: Convert to Local Time
    pointer_a = localtime(&saveTime_a);

    // Convert it to UTC time
    pointer_b = gmtime(&saveTime_a);
    
    // Output
    printf("Time with ctime:              %s\n", ctime(&saveTime));
    printf("Time with localtime, asctime: %s\n", asctime(pointer_a));
    printf("Time with gmtime, asctime:    %s\n", asctime(pointer_a));
    
}