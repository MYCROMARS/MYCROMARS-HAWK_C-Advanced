// if it's not working acivate this:
// #include <stdio.h>
// #include <string.h>
// #include "../header/bit_c.h"

// Bit C

// Function definition
void input_zero_1a();
void input_one_1a();

void input_zero_2a();
void input_one_2a();

void input_zero_3a();
void input_one_3a();

// Create & assign
char bit_string_1a[50];
char bit_string_2a[50];
char bit_string_3a[50];

const char zero_1a[2] = "0";
const char one_1a[2] = "1";

// Create 
char buffer_bit_c[50];

// Catch invalid input
void scanString_bit_c(void){
    // Input
    scanf("%s", &buffer_bit_c[0]);
    buffer_bit_c[0] = '\0';
}

// Main function
void bit_c(void)
{
    // Output
    printf("### BIT OPERATION C ###\n");
    printf("Bitwise OR '|'\n\n");

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
    #define ac 8    // 8 bit
    int count_ar = 7;

    int bits_1[ac] = {0,0,0,0,0,0,0,0};  // String 1 Placeholder for bit's
    int bits_2[ac] = {0,0,0,0,0,0,0,0};  // String 2 Placeholder for bit's
    int bits_3[ac] = {0,0,0,0,0,0,0,0};  // String 3 Placeholder for bit's
    
    // Go here
    main_1:
    
    // Output
    printf("Input 1. number 0...255 (8 bit): ");
    
    // Conditional statement: value 1
    if (scanf("%d", &value_1) == 0)  {
        // Output
        printf("\nInput is not a number!\n\n");
        
        // function: Catch invalid input
        scanString_bit_c();
        
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
        scanString_bit_c();
        
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
    else
    {
        printf("\n");
    
        // Pass value
        value_a = value_1;
        value_b = value_2;
    
        // Bitwise OR
        value_3 = value_1|value_2;
    
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
        for (int i = 0; i < ac; i++)
        {
            if (bits_1[i] == 0){
                // Function
                input_zero_1a();
            }
            else if (bits_1[i] == 1){
                // Function
                input_one_1a();
            }
        }
        
        // Loop: write Binary number to string 2
        for (int i = 0; i < ac; i++)
        {
            if (bits_2[i] == 0){
                // Function
                input_zero_2a();
            }
            else if (bits_2[i] == 1){
                 // Function
                input_one_2a();
            }
        }
    
        // Loop: write Binary number to string 3
        for (int i = 0; i < ac; i++)
        {
            if (bits_3[i] == 0){
                // Function
                input_zero_3a();
            }
            else if (bits_3[i] == 1){
                 // Function
                input_one_3a();
            }
        }
        
        // Output
        printf("Binary A: %s\n", bit_string_1a);
        printf("Binary B: %s\n", bit_string_2a);
        printf("--------------------\n");
        printf("A AND B : %s\n", bit_string_3a);
        printf("Decimal : %d\n", value_3);
    
        // Delate string
        bit_string_1a[0] = '\0';
        bit_string_2a[0] = '\0';
        bit_string_3a[0] = '\0';
    }
    
}

// Function: Input zero ----------------
void input_zero_1a(){
        strcat(bit_string_1a, zero_1a);
}

// Function: Input one
void input_one_1a(){
        strcat(bit_string_1a, one_1a);
}


// Function: Input zero ----------------
void input_zero_2a(){
        strcat(bit_string_2a, zero_1a);
}

// Function: Input one
void input_one_2a(){
        strcat(bit_string_2a, one_1a);
}


// Function: Input zero ----------------
void input_zero_3a(){
        strcat(bit_string_3a, zero_1a);
}

// Function: Input one
void input_one_3a(){
        strcat(bit_string_3a, one_1a);
}
