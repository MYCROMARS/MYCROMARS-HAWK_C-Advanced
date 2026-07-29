// if it's not working acivate this:
// #include <stdio.h>
// #include <string.h>
// #include "../header/bit_e.h"

// Bit E

// Function definition
void input_zero_e1();
void input_one_e1();

void input_minus_e();

// Create
char bit_string_e1[50] = "";

char buffer_bit_e[50];

// Create & assign
const char zero_e1[2] = "0";
const char one_e1[2] = "1";
const char minus_e[2] = "-";

// Catch invalid input
void scanString_bit_e(void){
    // Input
    scanf("%s", &buffer_bit_e[0]);
    buffer_bit_e[0] = '\0';
}

// Main function
void bit_e(void)
{
    // Output
    printf("### BIT OPERATION E ###\n");
    printf("Bitwise NOT '~'\n\n");

    // Create & assign
    int value_e1;
    int value_e2;

    int value_e1_1;
    //int value_e2_1;
    int bit_e1;     // placeholder for bit
    int bit_e2;     // placeholder for bit
    int bit_e3;     // placeholder for bit
    int bit_size_e1;
    int bit_size_e2;

    char *hold_bits;
    
    int max_e = 256;

    #define BITS_E 16   // 16 bit
    int count_e = BITS_E-1;

    int array_bits_e1[BITS_E] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};  // String 1 Placeholder for bit's

    long binary_to_int_e1;
    long binary_to_int_e2;

    int negative_e = 0;
    
    // Go here
    main_1:
    
    // Output
    printf("Input a number -%d...%d (%d bit): ", max_e, max_e, BITS_E);
    
    // Conditional statement: value 1
    if (scanf("%d", &value_e1) == 0)  {
        // Output
        printf("\nInput is not a number!\n\n");
        
        // function: Catch invalid input
        scanString_bit_e();
        
        // Jump to start
        goto main_1;
    }
    else if (value_e1 < -max_e || value_e1 > max_e)
    {
        // Output
        printf("\nInput is not a number -%d...%d!\n\n", max_e, max_e);
        
        // Jump to start
        goto main_1;
    }
    else
    { 
        // Pass value
        value_e1_1 = value_e1;
    
        // Bitwise NOT
        value_e2 = ~value_e1;

        // Negative to positive
        if (value_e1_1 < 0){
            value_e1_1 = value_e1_1 * -1;
            negative_e = 1;
        }
    
        // write 1. Binary numbers to array
        while (value_e1_1 > 0)
        {
            bit_e1 = value_e1_1 % 2; 
            value_e1_1 = value_e1_1/2;  
            array_bits_e1[count_e] = bit_e1;
            count_e--;
        }

        // Loop: write Array number to string 1
        for (int i = 0; i < BITS_E; i++)
        {
            if (negative_e == 1){
                input_minus_e();
                negative_e = 0;
            }
            if (array_bits_e1[i] == 0){
                // Function
                input_zero_e1();
            }
            else if (array_bits_e1[i] == 1){
                // Function
                input_one_e1();
            }
        }
         
        // Output
        printf("\nInput to Binary String: %s\n", bit_string_e1);
        
        // Pass Binary string to int
        binary_to_int_e1 = strtol(bit_string_e1, &hold_bits, 2);

        // Delate string
        bit_string_e1[0] = '\0';

        // Output
        printf("String to Decimal:\t%ld\n\n", binary_to_int_e1);
        
        // Assign
        bit_size_e1 = sizeof(value_e1) * 4; // 4*4=16
        
        // Output
        printf("Output right shift, Value & Bit:\n");

        // Loop: right shift, Value & Bit, Value 1 in Binary
        for (int i = bit_size_e1-1; i >= 0; i--) {

            // Assign: odd number, bit= 1 
            bit_e2 = (value_e1 >> i) & 1;   

            // Example, if Input is: 4, 00000100
            //  i=7 value: 0, 00000000 = bit=0
            //  i=6 value: 0, 00000000 = bit=0
            //  i=5 value: 0, 00000000 = bit=0
            //  i=4 value: 0, 00000000 = bit=0
            //  i=3 value: 0, 00000000 = bit=0
            //  i=2 value: 1, 00000001 = bit=1
            //  i=1 value: 2, 00000010 = bit=0
            //  i=0 value: 4, 00000100 = bit=0

            // Output
            if (i < 10) printf(" "); 
            printf("Right shift: %d: value: %d bit: %d\n", i, (value_e1 >> i), bit_e2);
        }

        // Output
        printf("\nInput to Binary:\t");

        // Loop: Value 1 in Binary
        for (int i = bit_size_e1-1; i >= 0; i--) {

            // Assign: odd number, bit= 1 
            bit_e2 = (value_e1 >> i) & 1;   

            // Output
            printf("%d", bit_e2);
            if (i % 8 == 0) printf(" "); // spacing after 8 bits
        }
        
        // Output
        printf("\n\n");
        printf("Bitwise NOT '~':\t%d\n", value_e2);
        //printf("Bitwise NOT '~': %b\n", value_2);     //only in C23 
        
        // Assign
        bit_size_e2 = sizeof(value_e2) * 4; // 4*4=16

        // Output 
        printf("New Binary:\t\t");

        // Loop: Value 2 in Binary
        for (int i = bit_size_e2-1; i >= 0; i--) {

            // Assign: odd number, bit= 1 
            bit_e3 = (value_e2 >> i) & 1;

            // Output
            printf("%d", bit_e3);
            if (i % 8 == 0) printf(" "); // spacing after 8 bits
        }

        printf("\n");
    }
}

// Function: Input zero ----------------
void input_zero_e1(){
        strcat(bit_string_e1, zero_e1);
}

// Function: Input one
void input_one_e1(){
        strcat(bit_string_e1, one_e1);
}

// Function: Input minus ----------------
void input_minus_e(){
        strcat(bit_string_e1, minus_e);
}