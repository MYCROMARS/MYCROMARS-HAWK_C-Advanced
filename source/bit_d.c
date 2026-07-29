// if it's not working acivate this:
// #include <stdio.h>
// #include <string.h>
// #include "../header/bit_d.h"

// Bit D

// Function definition
void input_zero_1b();
void input_one_1b();

void input_minus();

// Create
char bit_string_1b[50] = "";

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
    printf("### BIT OPERATION D ###\n");
    printf("Bitwise NOT '~'\n\n");

    // Create
    int value_1;
    int value_2;

    int value_a;
    int value_b;

    char *hold_bits;
    int v_bit;    // placeholder for bit
    
    // Create & assign
    int v_max = 256;
    #define ad 16   // 16 bit
    int count_ar = ad-1;

    int bits_1[ad] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};  // String 1 Placeholder for bit's

    long binary_to_int_1;
    long binary_to_int_2;

    int negative = 0;
    
    // Go here
    main_1:
    
    // Output
    printf("Input a number -%d...%d (%d bit): ", v_max, v_max, ad);
    
    // Conditional statement: value 1
    if (scanf("%d", &value_1) == 0)  {
        // Output
        printf("\nInput is not a number!\n\n");
        
        // function: Catch invalid input
        scanString_bit_d();
        
        // Jump to start
        goto main_1;
    }
    else if (value_1 < -v_max || value_1 > v_max)
    {
        // Output
        printf("\nInput is not a number -%d...%d!\n\n", v_max, v_max);
        
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
        for (int i = 0; i < ad; i++)
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
         
        printf("Input to Binary String: %s\n", bit_string_1b);
        
        // Pass Binary string to int
        binary_to_int_1 = strtol(bit_string_1b, &hold_bits, 2);
        printf("String to Decimal:\t%ld\n\n", binary_to_int_1);
        
        // Delate string
        bit_string_1b[0] = '\0';

        //*hold_bits = '\0';
        //printf("hold after:   %d\n", *hold_bits);
        //printf("1. Binary String after: %s\n", bit_string_1b);
    
        int b = sizeof(value_1) * 4; // 4*4=16
        // Value 1 in Binary
        printf("Output right shift, Value & Bit:\n");

        for (int i = b-1; i >= 0; i--) {
            int bit = (value_1 >> i) & 1;   // bei ungerader Zahl ist bit 1
            // Example, if Input is: 4, 00000100
            // 00000000 = bit=0, number: 0, i=7
            // 00000000 = bit=0, number: 0, i=6
            // 00000000 = bit=0, number: 0, i=5
            // 00000000 = bit=0, number: 0, i=4
            // 00000000 = bit=0, number: 0, i=3
            // 00000001 = bit=1, number: 1, i=2
            // 00000010 = bit=0, number: 2, i=1
            // 00000100 = bit=0, number: 4, i=0

            if (i < 10) printf(" "); 
            printf("Right shift: %d: value: %d bit: %d\n", i, (value_1 >> i), bit);
        }

        printf("\nInput to Binary:\t");

        for (int i = b-1; i >= 0; i--) {
            int bit = (value_1 >> i) & 1;   

            printf("%d", bit);

            if (i % 8 == 0) printf(" "); // Optionaler Abstand nach 4 Bits
        }
        
        printf("\n\n");
        printf("Bitwise NOT '~':\t%d\n", value_2);
        //printf("Bitwise NOT '~': %b\n", value_2);     // C23 
        
        int b2 = sizeof(value_2) * 4; // 4*4=16
        // Value 2 in Binary
        printf("New Binary:\t\t");
        for (int i = b2-1; i >= 0; i--) {
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
        strcat(bit_string_1b, minus);
}