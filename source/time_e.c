// TIME E
#include <time.h>

// Main Function
void time_e(void){
    // Output
    printf("### TIME D: Days in Month ###\n\n");
    
    // Create Date
    struct tm target_date = {0};

    // Create
    char b[80];

    // Assign
    target_date.tm_year = 2026 - 1900;  // 126
    target_date.tm_mon = 0;             // 0...11
    target_date.tm_mday = 1;            // 1...31

    // Create & Assign: korrigiert und füllt Felder
    mktime(&target_date);

    // Assign
    strftime(b, sizeof(b), "%d.%m.%Y", &target_date);

    // Output
    printf("Days in every Month from: %s\n\n", b);

   
    // Loop: Months
    for (int x = 0; x <= 11; x++)
    {
        // Loop: Days
        for (int i = 1; i <= 32; i++)
        {
            // Assign
            target_date.tm_mday ++;
            
            // Update
            mktime(&target_date);


            // Statement: if next Month
            if (target_date.tm_mday == 1) {
                // Assign
                target_date.tm_mday --;
                
                // Update
                mktime(&target_date);

                   // Assign
                strftime(b, sizeof(b), "%b:  %d Days", &target_date);

                // Output
                printf("%s\n", b);
            
                //printf("%d Days\n", i);


                // Assign
                target_date.tm_mday ++;
                
                // Update
                mktime(&target_date);
                break;
            }
        }
    }    
}