// if it's not working acivate this:
// #include <stdio.h>
// #include <string.h>
// #include "../header/bit_f.h"

// Bit F

// Function definition
void input_zero_f1();
void input_one_f1();

void input_minus_f();

// Create
char bit_string_f1[50] = "";

char buffer_bit_f[50];

// Create & assign
const char zero_f1[2] = "0";
const char one_f1[2] = "1";
const char minus_f[2] = "-";

// Catch invalid input
void scanString_bit_f(void){
    // Input
    scanf("%s", &buffer_bit_f[0]);
    buffer_bit_f[0] = '\0';
}

// Main function
void bit_f(void)
{
    // Output
    printf("### BIT OPERATION F ###\n");
    printf("Bitwise shift right '>>'\n\n");

    // Create & assign
    int value_f1;
    int value_f2;

    int value_f1_1;
    int value_f2_1; // shift rigth

    int bit_f1;     // placeholder for bit
    int bit_f2;     // placeholder for bit
    int bit_f3;     // placeholder for bit
    int bit_size_f1;
    int bit_size_f2;

    char *hold_bits;
    int max_f = 255;

    #define BITS_F 16   // 16 bit
    int count_f = BITS_F-1;

    int array_bits_f1[BITS_F] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};  // String 1 Placeholder for bit's

    long binary_to_int_f1;
    long binary_to_int_f2;

    int negative_f = 0;
    
    // Go here
    main_1:
    
    // Output
    printf("Input a number -%d...%d (%d bit): ", max_f, max_f, BITS_F);
    
    // Conditional statement: value 1
    if (scanf("%d", &value_f1) == 0)  {
        // Output
        printf("\nInput is not a number!\n\n");
        
        // function: Catch invalid input
        scanString_bit_f();
        
        // Jump to start
        goto main_1;
    }
    else if (value_f1 < -max_f || value_f1 > max_f)
    {
        // Output
        printf("\nInput is not a number -%d...%d!\n\n", max_f, max_f);
        
        // Jump to start
        goto main_1;
    }

    main_2:

    // Output
    printf("Input a shift left number 1...%d:    ", BITS_F/2);
    
    // Conditional statement: value 1
    if (scanf("%d", &value_f2) == 0)  {
        // Output
        printf("\nInput is not a number!\n\n");
        
        // function: Catch invalid input
        scanString_bit_f();
        
        // Jump to start
        goto main_2;
    }
    else if (value_f2 < 1 || value_f2 > BITS_F/2)
    {
        // Output
        printf("\nInput is not a number 1...%d!\n\n", BITS_F/2);
        
        // Jump to start
        goto main_2;
    }
    else
    { 
        // Pass value
        value_f1_1 = value_f1;
    
        // Bitwise shift right >>
        value_f2_1 = value_f1 >> value_f2;

        // Negative to positive
        if (value_f1_1 < 0){
            value_f1_1 = value_f1_1 * -1;
            negative_f = 1;
        }
    
        // write 1. Binary numbers to array
        while (value_f1_1 > 0)
        {
            bit_f1 = value_f1_1 % 2; 
            value_f1_1 = value_f1_1/2;  
            array_bits_f1[count_f] = bit_f1;
            count_f--;
        }

        // Loop: write Array number to string 1
        for (int i = 0; i < BITS_F; i++)
        {
            if (negative_f == 1){
                input_minus_f();
                negative_f = 0;
            }
            if (array_bits_f1[i] == 0){
                // Function
                input_zero_f1();
            }
            else if (array_bits_f1[i] == 1){
                // Function
                input_one_f1();
            }
        }
         
        // Output
        printf("\nInput to Binary String: %s\n", bit_string_f1);

        // Delate string
        bit_string_f1[0] = '\0';
        
        // Assign
        bit_size_f1 = sizeof(value_f1) * 4; // 4*4=16
        
        // Output
        printf("\nInput to Binary:\t");

        // Loop: Value 1 in Binary
        for (int i = bit_size_f1-1; i >= 0; i--) {

            // Assign: odd number, bit= 1 
            bit_f2 = (value_f1 >> i) & 1;   

            // Output
            printf("%d", bit_f2);
            if (i % 8 == 0) printf(" "); // spacing after 8 bits
        }
        

        // Output ---------------------------------------
        printf("\n\n");
        printf("Bitwise shift right %d:\t%d\n",value_f2, value_f2_1);
        
        // Assign
        bit_size_f2 = sizeof(value_f2_1) * 4; // 4*4=16

        // Output 
        printf("New Binary:\t\t");

        // Loop: Value 2 in Binary
        for (int i = bit_size_f2-1; i >= 0; i--) {

            // Assign: odd number, bit= 1 
            bit_f3 = (value_f2_1 >> i) & 1;

            // Output
            printf("%d", bit_f3);
            if (i % 8 == 0) printf(" "); // spacing after 8 bits
        }

        printf("\n");
    }
}

// Function: Input zero ----------------
void input_zero_f1(){
        strcat(bit_string_f1, zero_f1);
}

// Function: Input one
void input_one_f1(){
        strcat(bit_string_f1, one_f1);
}

// Function: Input minus ----------------
void input_minus_f(){
        strcat(bit_string_f1, minus_f);
}