// if it's not working acivate this:
// #include <stdio.h>
// #include <string.h>
// #include "../header/bit_d.h"

// Input A

// Function definition
void input_zero_1b();
void input_one_1b();

void input_zero_2b();
void input_one_2b();
void input_minus();

// Create
char bit_string_1b[50] = "";
char bit_string_2b[50] = "";

char buffer_bit_d[50];

// Create & assign
const char zero_1b[2] = "0";
const char one_1b[2] = "1";
const char minus[2] = "-";

// Catch invalid input
void scanString_bit_d(void){
    // Input
    scanf("%s", &buffer_bit_d[0]);
    buffer_bit_d[0] = '\0';
}

// Main function
void bit_d(void)
{
    // Output
    printf("### BIT OPERATION A ###\n");
    printf("Bitwise NOT '~'\n\n");

    // Create
    int value_1;
    int value_2;

    int value_a;
    int value_b;

    char *hold_bits;
    int v_bit;    // placeholder for bit
    
    // Create & assign
    int v_max = 255;
    #define ar 8    // 8 bit
    int count_ar = 7;

    int bits_1[ar] = {0,0,0,0,0,0,0,0};  // String 1 Placeholder for bit's
    int bits_2[ar] = {0,0,0,0,0,0,0,1};  // String 2 Placeholder for bit's

    long binary_to_int_1;
    signed long binary_to_int_2;
    
    // Go here
    main_1:
    
    // Output
    printf("Input 1. number 0...255 (8 bit): ");
    
    // Conditional statement: value 1
    if (scanf("%d", &value_1) == 0)  {
        // Output
        printf("\nInput is not a number!\n\n");
        
        // function: Catch invalid input
        scanString_bit_d();
        
        // Jump to start
        goto main_1;
    }
    else if (value_1 < 0 || value_1 > v_max)
    {
        // Output
        printf("\nInput is not a number 0...%d!\n\n", v_max);
        
        // Jump to start
        goto main_1;
    }
    else{ 
        printf("\n");
    
        // Pass value
        value_a = value_1;
    
        // Bitwise NOT
        value_2 = ~value_1;
    
        // Pass value
        //value_b = value_2;
    
        // write 1. Binary numbers to array
        while (value_a > 0)
        {
            v_bit = value_a % 2;            
            value_a = value_a/2;  
    
            bits_1[count_ar] = v_bit;
            
            count_ar--;
        }

        // Loop: write Binary number to string 1
        for (int i = 0; i < ar; i++)
        {
            if (bits_1[i] == 0){
                // Function
                input_zero_1b();
            }
            else if (bits_1[i] == 1){
                // Function
                input_one_1b();
            }
        }

        // Loop: write Binary number to string 2
        for (int i = 0; i < ar; i++)
        {
            if (i == 0){
                input_minus();
            }
            if (bits_2[i] == 0){
                // Function
                input_zero_2b();
            }
            else if (bits_2[i] == 1){
                // Function
                input_one_2b();
            }
        }
         
        printf("1. Binary String: %s\n", bit_string_1b);
        printf("2. Binary String: %s\n", bit_string_2b);
        
        // Pass Binary string to int
        binary_to_int_1 = strtol(bit_string_1b, &hold_bits, 2);
        printf("Binary string 1. to Decimal: %ld\n", binary_to_int_1);
        
        binary_to_int_2 = strtol(bit_string_2b, &hold_bits, 2);
        printf("Binary string 2. to Decimal: %ld\n", binary_to_int_2);
        
        
        printf("hold before:   %d\n", *hold_bits);
        
        // Delate string
        bit_string_1b[0] = '\0';
        bit_string_2b[0] = '\0';
        *hold_bits = '\0';

        printf("hold after:   %d\n", *hold_bits);

        printf("1. Binary String after: %s\n", bit_string_1b);
        printf("2. Binary String after: %s\n", bit_string_2b);
    
        // Value 1 in Binary
        /*
        printf("Decimal to Binary: ");
        for (int i = 15; i >= 0; i--) {
            int bit = (value_1 >> i) & 1;
            printf("%d", bit);
            if (i % 8 == 0) printf(" "); // Optionaler Abstand nach 4 Bits
        }
        */
       
        
        printf("\n--------------------\n");
        printf("Bitwise NOT '~': %d\n", value_2);
        //printf("Bitwise NOT '~': %b\n", value_2);     // C23 
        
        // Value 2 in Binary
        printf("Decimal to Binary: ");
        for (int i = 15; i >= 0; i--) {
            int bit = (value_2 >> i) & 1;
            printf("%d", bit);
            if (i % 8 == 0) printf(" "); // Optionaler Abstand nach 4 Bits
        }
        printf("\n");
    }
}

// Function: Input zero ----------------
void input_zero_1b(){
        strcat(bit_string_1b, zero_1b);
}

// Function: Input one
void input_one_1b(){
        strcat(bit_string_1b, one_1b);
}

// Function: Input zero ----------------
void input_minus(){
        strcat(bit_string_2b, minus);
}

void input_zero_2b(){
        strcat(bit_string_2b, zero_1b);
}

// Function: Input one
void input_one_2b(){
        strcat(bit_string_2b, one_1b);
}