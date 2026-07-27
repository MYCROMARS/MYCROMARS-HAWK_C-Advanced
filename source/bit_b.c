// if it's not working acivate this:
// #include <stdio.h>
// #include <string.h>
// #include "../header/bit_b.h"

// Input A

// Function definition
void input_zero_1();
void input_one_1();

void input_zero_2();
void input_one_2();

void input_zero_3();
void input_one_3();

// Create & assign
char bit_string_1[50];
char bit_string_2[50];
char bit_string_3[50];

const char zero_1[2] = "0";
const char one_1[2] = "1";

// Create 
char buffer_bit_b[50];

// Catch invalid input
void scanString_bit_a(void){
    // Input
    scanf("%s", &buffer_bit_b[0]);
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
    
    // Conditional statement: value 1
    if (scanf("%d", &value_1) == 0)  {
        // Output
        printf("\nInput is not a number!\n\n");
        
        // function: Catch invalid input
        scanString_bit_a();
        
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

    // Go here
    main_2:

    // Output
    printf("Input 2. number 0...255 (8 bit): ");

    // Conditional statement: value 2
    if (scanf("%d", &value_2) == 0)  {
        // Output
        printf("\nInput is not a number!\n\n");
        
        // function: Catch invalid input
        scanString_bit_a();
        
        // Jump to start
        goto main_2;
    }
    else if (value_2 < 0 || value_2 > v_max)
    {
        // Output
        printf("\nInput is not a number 0...%d!\n\n", v_max);
        
        // Jump to start
        goto main_2;
    }
    
    printf("\n");

    // Pass value
    value_a = value_1;
    value_b = value_2;

    // Bitwise AND
    value_3 = value_1&value_2;

    // Pass value
    value_c = value_3;

    // write 1. Binary number to array
    while (value_a > 0)
    {
        v_bit = value_a % 2;            
        value_a = value_a/2;     
        bits_1[count_ar] = v_bit;
        count_ar--;
        //printf("value %d : 2 = %d R %d\n", (value_a*2) + v_bit, value_a, v_bit);
    }

    // Assign
    count_ar = 7;

    // write 2. Binary number to array
    while (value_b > 0)
    {
        v_bit = value_b % 2;            
        value_b = value_b/2;     
        bits_2[count_ar] = v_bit;
        count_ar--;
    }
    
    // Assign
    count_ar = 7;

    // write 3. Binary number to array
    while (value_c > 0)
    {
        v_bit = value_c % 2;            
        value_c = value_c/2;     
        bits_3[count_ar] = v_bit;
        count_ar--;
    }
    

    // Loop: write Binary number to string 1
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
    
    // Loop: write Binary number to string 2
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

    // Loop: write Binary number to string 3
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
    printf("Binary A: %s\n", bit_string_1);
    printf("Binary B: %s\n", bit_string_2);
    printf("--------------------\n");
    printf("A AND B : %s\n", bit_string_3);
    printf("Decimal : %d\n", value_3);
}

// Function: Input zero ----------------
void input_zero_1(){
        strcat(bit_string_1, zero_1);
}

// Function: Input one
void input_one_1(){
        strcat(bit_string_1, one_1);
}


// Function: Input zero ----------------
void input_zero_2(){
        strcat(bit_string_2, zero_1);
}

// Function: Input one
void input_one_2(){
        strcat(bit_string_2, one_1);
}


// Function: Input zero ----------------
void input_zero_3(){
        strcat(bit_string_3, zero_1);
}

// Function: Input one
void input_one_3(){
        strcat(bit_string_3, one_1);
}
