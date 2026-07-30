// if it's not working acivate this:
// #include <stdio.h>
// #include <string.h>
// #include "../header/bit_g.h"

// Bit F

// Function definition
void input_zero_g1();
void input_one_g1();

void input_minus_g();

// Create
char bit_string_g1[50] = "";

char buffer_bit_g[50];

// Create & assign
const char zero_g1[2] = "0";
const char one_g1[2] = "1";
const char minus_g[2] = "-";

// Catch invalid input
void scanString_bit_g(void){
    // Input
    scanf("%s", &buffer_bit_g[0]);
    buffer_bit_g[0] = '\0';
}

// Main function
void bit_g(void)
{
    // Output
    printf("### BIT OPERATION G ###\n");
    printf("Decimal to Binary Loop\n\n");

    // Create & assign
    int value_g1;
    int value_g1_1;
  
    int bit_g1;     // placeholder for bit
    int bit_g2;     // placeholder for bit
   
    int bit_size_g1;
    char *hold_bits;
    int max_g = 255;
    long binary_to_int_g1;
    int negative_g = 0;

    int menu;

    #define BITS_G 16   // 16 bit
    int count_g = BITS_G-1;

    int array_bits_g1[BITS_G] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};  // String 1 Placeholder for bit's
    
    // Go here
    main_1:

    // Start
    printf("Start (0) NO | (1) YES : ");

    if (scanf("%d", &menu) == 0){
        // Output
        printf("\nInput is not a number!\n\n");
        
        // function: Catch invalid input
        scanString_bit_g();
        
        // Jump to start
        goto main_1;
    }
    else if (menu <0 || menu>1)
    {
        // Output
        printf("\nInput is not 0 or 1!\n\n");
                
        // Jump to start
        goto main_1;
    }
    else if (menu == 1){

        // Output
        printf("Input a number -%d...%d (%d bit): ", max_g, max_g, BITS_G);
        
        // Conditional statement: value 1
        if (scanf("%d", &value_g1) == 0)  {
            // Output
            printf("\nInput is not a number!\n\n");
            
            // function: Catch invalid input
            scanString_bit_g();
            
            // Jump to start
            goto main_1;
        }
        else if (value_g1 < -max_g || value_g1 > max_g)
        {
            // Output
            printf("\nInput is not a number -%d...%d!\n\n", max_g, max_g);
            
            // Jump to start
            goto main_1;
        }
        else
        { 
            // Pass value
            value_g1_1 = value_g1;
        
            // Negative to positive
            if (value_g1_1 < 0){
                value_g1_1 = value_g1_1 * -1;
                negative_g = 1;
            }
        
            // write Binary numbers to array
            while (value_g1_1 > 0)
            {
                bit_g1 = value_g1_1 % 2; 
                value_g1_1 = value_g1_1/2;  
                array_bits_g1[count_g] = bit_g1;
                count_g--;
            }
    
            // Loop: write Array number to string 
            for (int i = 0; i < BITS_G; i++)
            {
                if (negative_g == 1){
                    // Function input minus
                    input_minus_g();
                    negative_g = 2;
                }
                if (array_bits_g1[i] == 0){
                    // Function input zero
                    input_zero_g1();
                }
                else if (array_bits_g1[i] == 1){
                    // Function input one
                    input_one_g1();
                }
            }
             
            // Output
            if ( negative_g == 2)
            {
                printf("\nBinary String: %s\n", bit_string_g1);
            }
            else{
                printf("\nBinary String:  %s\n", bit_string_g1);
                
            }
    
    
            // ----------------------------------------------------
            // Delate string
            bit_string_g1[0] = '\0';
            
            // Assign
            bit_size_g1 = sizeof(value_g1) * 4; // 4*4=16
            
            // Output
            printf("Binary:\t\t");
    
            // Loop: Value 1 in Binary
            for (int i = bit_size_g1-1; i >= 0; i--) {
    
                // Assign: odd number, bit= 1 
                bit_g2 = (value_g1 >> i) & 1;   
    
                // Output
                printf("%d", bit_g2);
                //if (i % 8 == 0) printf(" "); // spacing after 8 bits
            }
    
            printf("\n\n");
    
            // Assign
            negative_g = 0;

            // Jump to start
            goto main_1;
        }
    }
    else if (menu == 0){
        printf("\n### EXIT ###\n");
    }
    
}

// Function: Input zero ----------------
void input_zero_g1(){
        strcat(bit_string_g1, zero_g1);
}

// Function: Input one
void input_one_g1(){
        strcat(bit_string_g1, one_g1);
}

// Function: Input minus ----------------
void input_minus_g(){
        strcat(bit_string_g1, minus_g);
}