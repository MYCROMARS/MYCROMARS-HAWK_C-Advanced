// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include <string.h>
// #include "../header/bit_a.h"

// Input A

// Function definition
void input_zero();
void input_one();

// Create & assign
char bit_string[10];
const char zero[2] = "0";
const char one[2] = "1";

// Create 
char buffer_bit_a[50];

// Catch invalid input
void scanString_bit(void){
    // Input
    scanf("%s", &buffer_bit_a[0]);
}

// Main function
void bit_a(void)
{
    // Output
    printf("### BIT OPERATION A ###\n");
    printf("Decimal to Binary to Decimal\n\n");

    // Create
    int value;
    char *hold_bits;
    int value_a;
    long value_b;
    int v_bit;    // placeholder for bit

    // Create & assign
    int v_max = 255;
    #define ar 8    // 8 bit
    int bits[ar] = {0,0,0,0,0,0,0,0};  // String Placeholder for bit's
    int count_ar = 7;
    
    // Go here
    main:
    
    // Output
    printf("Input a number 0...255 (8 bit): ");

    // Conditional statement
    if (scanf("%d", &value) == 0)  {
        // Output
        printf("\nInput is not a number!\n\n");
        
        // function: Catch invalid input
        scanString_bit();
        
        // Jump to start
        goto main;
    }
    else if (value >= 0 && value <= v_max){
        printf("\n");

        // Pass value
        value_a = value;

        // write Binary numbers to array
        while (value_a > 0)
        {
            v_bit = value_a % 2;            
            value_a = value_a/2;     
            printf("value %d : 2 = %d R %d\n", (value_a*2) + v_bit, value_a, v_bit);
    
            bits[count_ar] = v_bit;
            count_ar--;
        }
    }
    else {
        // Wrong number, not 1...menuMax
        // Output
        printf("\nInput is wrong, not 1...%d\n\n", v_max);

        // Jump to start
        goto main;
    }

    // write Binary number to string
    for (int i = 0; i < ar; i++)
    {
        if (bits[i] == 0){
            // Function
            input_zero();
        }
        else if (bits[i] == 1){
             // Function
            input_one();
        }
    }

    // Pass Binary string to int
    value_b = strtol(bit_string, &hold_bits, 2);
    
    // Output
    //printf("\nInput: %d\n", val);
    printf("\nBinary: %s\n", bit_string);
    printf("Decimal: %ld\n", value_b);
}

// Function: Input zero
void input_zero(){
        strcat(bit_string, zero);
}

// Function: Input one
void input_one(){
        strcat(bit_string, one);
}
