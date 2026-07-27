// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include <string.h>
// #include "../header/bit_a.h"

// Input A

// Function definition
void input_zero_1();
void input_one_1();

void input_zero_2();
void input_one_2();

void input_zero_3();
void input_one_3();

// Create & assign
char bit_string_1[10] = "";
char bit_string_2[10] = "";
char bit_string_3[10] = "";

const char zero_a[2] = "0";
const char one_a[2] = "1";

// Create 
char buffer[50];

// Catch invalid input
void scanString_bit_a(void){
    // Input
    scanf("%s", &buffer[0]);
}

// Main function
void bit_b(void)
{
    // Output
    printf("### BIT OPERATION A ###\n");
    printf("Bitwise AND '&'\n\n");

    // Create
    int value_1;
    int value_2;
    int value_3;

    int value_a;
    int value_b;
    int value_c;

    long binary_to_int_1;
    long binary_to_int_2;

    char *hold_bits;
    int v_bit;    // placeholder for bit
    
    // Create & assign
    int v_max = 255;
    #define ar 8    // 8 bit
    int count_ar = 7;

    int bits_1[ar] = {0,0,0,0,0,0,0,0};  // String 1 Placeholder for bit's
    int bits_2[ar] = {0,0,0,0,0,0,0,0};  // String 2 Placeholder for bit's
    int bits_3[ar] = {0,0,0,0,0,0,0,0};  // String 3 Placeholder for bit's
    
    // Go here
    main_1:
    
    // Output
    printf("Input 1. number 0...255 (8 bit): ");
    
    // Conditional statement
    if (scanf("%d", &value_1) == 0)  {
        // Output
        printf("\nInput is not a number!\n\n");
        
        // function: Catch invalid input
        scanString_bit_a();
        
        // Jump to start
        goto main_1;
    }

    main_2:
    // Output
    printf("Input 2. number 0...255 (8 bit): ");

    if (scanf("%d", &value_2) == 0)  {
        // Output
        printf("\nInput is not a number!\n\n");
        
        // function: Catch invalid input
        scanString_bit_a();
        
        // Jump to start
        goto main_2;
    }
    
    if ((value_1 || value_2 >= 0) && (value_1 || value_2 <= v_max))
    {
        printf("\n");

        // Pass value
        value_a = value_1;
        value_b = value_2;

        // write 1. Binary number to array
        while (value_a > 0)
        {
            v_bit = value_a % 2;            
            value_a = value_a/2;     
            //printf("value %d : 2 = %d R %d\n", (value_a*2) + v_bit, value_a, v_bit);
    
            bits_1[count_ar] = v_bit;
            count_ar--;
        }
 
        // Assign
        count_ar = 7;

        // write 2. Binary number to array
        while (value_b > 0)
        {
            v_bit = value_b % 2;            
            value_b = value_b/2;     
            //printf("value %d : 2 = %d R %d\n", (value_a*2) + v_bit, value_a, v_bit);
    
            bits_2[count_ar] = v_bit;
            count_ar--;
        }
      
        // Assign
        count_ar = 7;

        // Bitwise AND
        value_1 = value_1&value_2;
        value_c = value_1;

        // write 3. Binary number to array
        while (value_c > 0)
        {
            v_bit = value_c % 2;            
            value_c = value_c/2;     
            //printf("value %d : 2 = %d R %d\n", (value_a*2) + v_bit, value_a, v_bit);
    
            bits_3[count_ar] = v_bit;
            count_ar--;
        }
    }
    else {
        // Wrong number, not 1...Max(255)
        // Output
        printf("\nInput is wrong, not 1...%d\n\n", v_max);

        // Jump to start
        goto main_1;
    }

    // write Binary number to string 1
    for (int i = 0; i < ar; i++)
    {
        if (bits_1[i] == 0){
            // Function
            input_zero_1();
        }
        else if (bits_1[i] == 1){
            // Function
            input_one_1();
        }
    }
    
    // write Binary number to string 2
    for (int i = 0; i < ar; i++)
    {
        if (bits_2[i] == 0){
            // Function
            input_zero_2();
        }
        else if (bits_2[i] == 1){
             // Function
            input_one_2();
        }
    }

    // write Binary number to string 3
    for (int i = 0; i < ar; i++)
    {
        if (bits_3[i] == 0){
            // Function
            input_zero_3();
        }
        else if (bits_3[i] == 1){
             // Function
            input_one_3();
        }
    }

    // Pass Binary string to int
    //binary_to_int_1 = strtol(bit_string_1, &hold_bits, 2);
    //binary_to_int_2 = strtol(bit_string_2, &hold_bits, 2);
    
    // Output
    printf("\nBinary 1: %s\n", bit_string_1);
    printf("Binary 2: %s\n", bit_string_2);
    printf("--------------------\n");
    printf("1 AND 2 : %s\n\n", bit_string_3);
    
    //value_1 = value_1&value_2;

    printf("Value 1 & value 2: %d\n", value_1);
}

// Function: Input zero ----------------
void input_zero_1(){
        strcat(bit_string_1, zero_a);
}

// Function: Input one
void input_one_1(){
        strcat(bit_string_1, one_a);
}


// Function: Input zero ----------------
void input_zero_2(){
        strcat(bit_string_2, zero_a);
}

// Function: Input one
void input_one_2(){
        strcat(bit_string_2, one_a);
}


// Function: Input zero ----------------
void input_zero_3(){
        strcat(bit_string_3, zero_a);
}

// Function: Input one
void input_one_3(){
        strcat(bit_string_3, one_a);
}
