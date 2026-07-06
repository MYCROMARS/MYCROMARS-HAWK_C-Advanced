// if it's not working activate this (on macOS):
// #include <stdio.h>
// #include "../header/enum_a.h"

// ENUM A

// Main function
void enum_a(void)
{
    // Output
    printf("\n### ENUM A ###\n");

    // Create Enum list (identifier)
    enum bag1 {
        LAPTOP, HANDY, PEN, WALLET, WATCH, CANDIES, BOTTLE
    };

    // Create & assign (initialize)
    enum bag1 hold = HANDY; 

    
    // Output
    printf("enum: %d\n", LAPTOP);
    printf("enum: %d\n", hold);




    // Create Enum list (identifier)
    enum bag2 {
        n1, 
        n2, 
        n3
    }bag2_content;

  
   enum BOOLEAN{
        false,
        true
   };

   enum BOOLEAN end_flag, mach_flag;

   // or
   enum BOOLEAN { false, true } ent_flag;
   enum BOOLEAN mach_flag;

   if ( mach_flag == false){
    //.
    //.
    //.
   }
   end_flag = true;


    // Input
    //scanf("%d", &value_2);

   
}