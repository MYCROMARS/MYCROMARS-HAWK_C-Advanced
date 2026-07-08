// if it's not working activate this (on macOS):
// #include <stdio.h>
// #include "../header/enum_a.h"

// ENUM A

// Main function
void enum_a(void)
{
    // Output
    printf("\n### ENUM A ###\n");

    // Create Enum list (identifier), Aufzählungskonstanten (int)
    enum bag1 {
        LAPTOP, PEN, WALLET, WATCH, CANDIES, BOTTLE
    };

    // Create & assign (initialize)
    enum bag1 hold = LAPTOP; 
    enum bag1 HANDY; 

    // Output
    printf("enum LAPTOP: %d\n", LAPTOP);
   printf("enum hold: %d\n", hold);
   printf("enum HANDY: %d\n", HANDY);
    

    // Create Enum list (identifier)
    enum bag2 {
        n1=2, 
        n2=4, 
        n3=0
    }bag2_content;

  
   enum BOOLEAN{
        false,
        true
   };

   enum BOOLEAN end_flag, mach_flag;

   // or
   //enum BOOLEAN { false, true } ent_flag;
   //enum BOOLEAN mach_flag;

   if ( mach_flag == false){
    //.
    //.
    //.
   }
   end_flag = true;

   // Alternative zu
    #define ALT 1;

    // Input
    //scanf("%d", &value_2);

   
}