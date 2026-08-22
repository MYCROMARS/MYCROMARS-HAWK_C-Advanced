// TIME C
#include <time.h>

// #include <locale.h>

// Windows
// #ifdef _WIN32 
//     #include <windows.h>    // UTF-8
// #endif


// Main Function
void time_c(void){

    // Windows
    //#ifdef _WIN32 
        // Set terminal to UTF-8 (° degree)
        //SetConsoleOutputCP(65001);
        //setlocale(LC_TIME, "");
        //setlocale(LC_TIME, "German");
        //setlocale(LC_TIME, "de_DE.UTF-8");  // need local.h
    //#endif

  
    // Output
    printf("### TIME C: Time zone, date & time in detail ###\n\n");
    
    // Create: store current Time & Date -----------------------s
    time_t time_a;
  
    // Current time
    time(&time_a);

    // Create: store Local time
    struct tm *pointer_a;

    // Assign: Convert to Local Time
    pointer_a = localtime(&time_a);

    // Create Char Array
    char save_a[80];
    char save_b[80];

    char save_c[80];
    char save_d[80];

    char save_e[80];
    char save_f[80];

    char save_g[80];
    char save_h[80];

    char save_i[80];
    char save_j[80];
    
    char save_k[80];


    // #####################################

    // Time zone (z/Z)
    strftime(save_a, 80, "Time zone (z):   %z", pointer_a);
    printf("%s\n", save_a);
 
   
    // Time & Date
    strftime(save_a, 80, "Time & Date (c): %c", pointer_a);
    printf("%s\n\n", save_a);
    
    // Date
    strftime(save_a, 80, "Date (x): %x", pointer_a);
    printf("%s\n\n", save_a);
    
    // Year
    strftime(save_a, 80, "Year (y): %y", pointer_a);
    printf("%s\n", save_a);
    
    // Year with century 
    strftime(save_a, 80, "Year (Y): %Y", pointer_a);
    printf("%s\n", save_a);

     // Days in this year 1...366
    strftime(save_h, 80, "Days in this year (j): %j", pointer_a);
    printf("%s\n\n", save_h);


    // Month name
    strftime(save_b, 80, "Month name (b): %b", pointer_a);
    puts(save_b);
    
    // Month name advertised
    strftime(save_b, 80, "Month name (B): %B", pointer_a);
    printf("%s\n", save_b);
    
    
    // Month 1...12
    strftime(save_c, 80, "Month (m):      %m", pointer_a);
    printf("%s\n", save_c);
 
    // Day of the Month  1...31
    strftime(save_d, 80, "Day of the Month (d): %d", pointer_a);
    printf("%s\n\n", save_d);

    
    // Weekday
    strftime(save_e, 80, "Weekday (a): %a", pointer_a);
    printf("%s\n", save_e);
   
    // Weekday advertised
    strftime(save_e, 80, "Weekday advertised (A): %A", pointer_a);
    printf("%s\n", save_e);

    // Weekday as number (0–6; Sonntag = 0)
    strftime(save_f, 80, "Weekday as number (w):  %w", pointer_a);
    printf("%s\n\n", save_f);
   
   
    // Calendar week, 1. Day: Sunday
    strftime(save_g, 80, "Calendar week (U): %U", pointer_a);
    printf("%s\n", save_g);
    
    // Calendar week, 1. Day: Monday
    strftime(save_g, 80, "Calendar week (W): %W", pointer_a);
    printf("%s\n\n", save_g);



    // Time
    strftime(save_i, 80, "Time (X):    %X", pointer_a);
    printf("%s\n", save_i);
   
    // Hour + AM / PM
    strftime(save_i, 80, "Hour (I, p): %I %p", pointer_a);
    printf("%s\n", save_i);
    
    // Hour
    strftime(save_i, 80, "Hour (H):    %H", pointer_a);
    printf("%s\n", save_i);
   
   
    // Minutes
    strftime(save_j, 80, "Mitutes (M): %M", pointer_a);
    printf("%s\n", save_j);
    
    // Seconds
    strftime(save_k, 80, "Seconds (S): %S", pointer_a);
    printf("%s\n", save_k);
   

    // create: Full past Month as integer
    int num1 = pointer_a->tm_mon;

    printf("int: %02d\n", num1);
    printf("int: %d\n", num1);

    printf("int: %d\n", num1+1);
}