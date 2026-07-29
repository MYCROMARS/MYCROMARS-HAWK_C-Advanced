// if it's not working acivate this:
// #include <stdio.h>
// #include <string.h>
// #include "../header/bit_e.h"

// Bit E

// Function definition
void input_zero_1c();
void input_one_1c();

void input_minus_e();

// Create
char bit_string_1c[50] = "";

char buffer_bit_e[50];

// Create & assign
const char zero_1c[2] = "0";
const char one_1c[2] = "1";
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
    printf("Left Shift '<<'\n\n");

    // Create
    int value_1;
    int value_2;

    int value_a;
    int value_b;

    char *hold_bits;
    int v_bit;    // placeholder for bit
    
    // Create & assign
    int v_max = 255;
    #define ae 8    // 8 bit
    int count_ar = 7;

    int bits_1[ae] = {0,0,0,0,0,0,0,0};  // String 1 Placeholder for bit's

    long binary_to_int_1;
    long binary_to_int_2;

    int negative = 0;
    
    // Go here
    main_1:
    
    // Output
    printf("Input a number -255...255 (8 bit): ");
    
    // Conditional statement: value 1
    if (scanf("%d", &value_1) == 0)  {
        // Output
        printf("\nInput is not a number!\n\n");
        
        // function: Catch invalid input
        scanString_bit_d();
        
        // Jump to start
        goto main_1;
    }
    else if (value_1 < -255 || value_1 > v_max)
    {
        // Output
        printf("\nInput is not a number -255...%d!\n\n", v_max);
        
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

        if (value_a < 0){
            value_a = value_a * -1;
            negative = 1;
        }
    
        // write 1. Binary numbers to array
        while (value_a > 0)
        {
            v_bit = value_a % 2; 

            value_a = value_a/2;  
    
            bits_1[count_ar] = v_bit;
            
            count_ar--;
        }

        // Loop: write Array number to string 1
        for (int i = 0; i < ae; i++)
        {
            if (negative == 1){
                input_minus();
                negative = 0;
            }
            if (bits_1[i] == 0){
                // Function
                input_zero_1b();
            }
            else if (bits_1[i] == 1){
                // Function
                input_one_1b();
            }
        }
         
        printf("Input to Binary String: %s\n", bit_string_1c);
        //printf("2. Binary String: %s\n", bit_string_2b);
        
        // Pass Binary string to int
        binary_to_int_1 = strtol(bit_string_1c, &hold_bits, 2);
        printf("String to Decimal:\t%ld\n\n", binary_to_int_1);
        
        //printf("hold before:   %d\n", *hold_bits);
        
        // Delate string
        bit_string_1c[0] = '\0';
        *hold_bits = '\0';

        //printf("hold after:   %d\n", *hold_bits);

        //printf("1. Binary String after: %s\n", bit_string_1b);
        //printf("2. Binary String after: %s\n", bit_string_2b);
    
        int bits = sizeof(value_1) * 8; // 4*8
        // Value 1 in Binary
        printf("Input to Binary:\t");
        for (int i = bits-1; i >= 0; i--) {
            int bit = (value_1 >> i) & 1;
            printf("%d", bit);
            if (i % 8 == 0) printf(" "); // Optionaler Abstand nach 4 Bits
        }
        
        printf("\n\n");
        printf("Bitwise NOT '~':\t%d\n", value_2);
        //printf("Bitwise NOT '~': %b\n", value_2);     // C23 
        
        int bits2 = sizeof(value_2) * 8; // 4*8
        // Value 2 in Binary
        printf("New Binary:\t\t");
        for (int i = bits2-1; i >= 0; i--) {
            int bit = (value_2 >> i) & 1;
            printf("%d", bit);
            if (i % 8 == 0) printf(" "); // Optionaler Abstand nach 4 Bits
        }
        printf("\n");
    }
}

// Function: Input zero ----------------
void input_zero_1c(){
        strcat(bit_string_1c, zero_1c);
}

// Function: Input one
void input_one_1c(){
        strcat(bit_string_1c, one_1c);
}

// Function: Input zero ----------------
void input_minus_e(){
        strcat(bit_string_1c, minus_e);
}