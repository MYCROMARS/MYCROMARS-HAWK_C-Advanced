// if it's not working acivate this:
// #include <stdio.h>
// #include <string.h>
// #include "../header/bit_c.h"

// Bit C

// Function definition
void input_zero_c1();
void input_one_c1();

void input_zero_c2();
void input_one_c2();

void input_zero_c3();
void input_one_c3();

// Create & assign
char bit_string_c1[50];
char bit_string_c2[50];
char bit_string_c3[50];

const char zero_c1[2] = "0";
const char one_c1[2] = "1";

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
    int value_c1;
    int value_c2;
    int value_c3;

    int value_c1_1;
    int value_c2_1;
    int value_c3_1;

    long binary_to_int_c1;
    long binary_to_int_c2;

    char *hold_bits;
    int bit_c;    // placeholder for bit
    
    // Create & assign
    int max_c = 255;
    #define BITS_C 8    // 8 bit
    int count_c = BITS_C-1;

    int array_bits_c1[BITS_C] = {0,0,0,0,0,0,0,0};  // String 1 Placeholder for bit's
    int array_bits_c2[BITS_C] = {0,0,0,0,0,0,0,0};  // String 2 Placeholder for bit's
    int array_bits_c3[BITS_C] = {0,0,0,0,0,0,0,0};  // String 3 Placeholder for bit's
    
    // Go here
    main_1:
    
    // Output
    printf("Input 1. number 0...255 (8 bit): ");
    
    // Conditional statement: value 1
    if (scanf("%d", &value_c1) == 0)  {
        // Output
        printf("\nInput is not a number!\n\n");
        
        // function: Catch invalid input
        scanString_bit_c();
        
        // Jump to start
        goto main_1;
    }
    else if (value_c1 < 0 || value_c1 > max_c)
    {
        // Output
        printf("\nInput is not a number 0...%d!\n\n", max_c);
        
        // Jump to start
        goto main_1;
    }

    // Go here
    main_2:

    // Output
    printf("Input 2. number 0...255 (8 bit): ");

    // Conditional statement: value 2
    if (scanf("%d", &value_c2) == 0)  {
        // Output
        printf("\nInput is not a number!\n\n");
        
        // function: Catch invalid input
        scanString_bit_c();
        
        // Jump to start
        goto main_2;
    }
    else if (value_c2 < 0 || value_c2 > max_c)
    {
        // Output
        printf("\nInput is not a number 0...%d!\n\n", max_c);
        
        // Jump to start
        goto main_2;
    }
    else
    {
        printf("\n");
    
        // Pass value
        value_c1_1 = value_c1;
        value_c2_1 = value_c2;
    
        // Bitwise OR
        value_c3 = value_c1|value_c2;
    
        // Pass value
        value_c3_1 = value_c3;
    
        // write 1. Binary number to array
        while (value_c1_1 > 0)
        {
            bit_c = value_c1_1 % 2;            
            value_c1_1 = value_c1_1/2;     
            array_bits_c1[count_c] = bit_c;
            count_c--;
            //printf("value %d : 2 = %d R %d\n", (value_a*2) + v_bit, value_a, v_bit);
        }
    
        // Assign
        count_c = 7;
    
        // write 2. Binary number to array
        while (value_c2_1 > 0)
        {
            bit_c = value_c2_1 % 2;            
            value_c2_1 = value_c2_1/2;     
            array_bits_c2[count_c] = bit_c;
            count_c--;
        }
        
        // Assign
        count_c = 7;
    
        // write 3. Binary number to array
        while (value_c3_1 > 0)
        {
            bit_c = value_c3_1 % 2;            
            value_c3_1 = value_c3_1/2;     
            array_bits_c3[count_c] = bit_c;
            count_c--;
        }
       
        // Loop: write Binary number to string 1
        for (int i = 0; i < BITS_C; i++)
        {
            if (array_bits_c1[i] == 0){
                // Function
                input_zero_c1();
            }
            else if (array_bits_c1[i] == 1){
                // Function
                input_one_c1();
            }
        }
        
        // Loop: write Binary number to string 2
        for (int i = 0; i < BITS_C; i++)
        {
            if (array_bits_c2[i] == 0){
                // Function
                input_zero_c2();
            }
            else if (array_bits_c2[i] == 1){
                 // Function
                input_one_c2();
            }
        }
    
        // Loop: write Binary number to string 3
        for (int i = 0; i < BITS_C; i++)
        {
            if (array_bits_c3[i] == 0){
                // Function
                input_zero_c3();
            }
            else if (array_bits_c3[i] == 1){
                 // Function
                input_one_c3();
            }
        }
        
        // Output
        printf("Binary A: %s\n", bit_string_c1);
        printf("Binary B: %s\n", bit_string_c2);
        printf("--------------------\n");
        printf("A OR B  : %s\n", bit_string_c3);
        printf("Decimal : %d\n", value_c3);
    
        // Delate string
        bit_string_c1[0] = '\0';
        bit_string_c2[0] = '\0';
        bit_string_c3[0] = '\0';
    }
}

// Function: Input zero ----------------
void input_zero_c1(){
        strcat(bit_string_c1, zero_c1);
}

// Function: Input one
void input_one_c1(){
        strcat(bit_string_c1, one_c1);
}


// Function: Input zero ----------------
void input_zero_c2(){
        strcat(bit_string_c2, zero_c1);
}

// Function: Input one
void input_one_c2(){
        strcat(bit_string_c2, one_c1);
}


// Function: Input zero ----------------
void input_zero_c3(){
        strcat(bit_string_c3, zero_c1);
}

// Function: Input one
void input_one_c3(){
        strcat(bit_string_c3, one_c1);
}
