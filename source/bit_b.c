// if it's not working acivate this:
// #include <stdio.h>
// #include <string.h>
// #include "../header/bit_b.h"

// Bit B

// Function definition
void input_zero_b1();
void input_one_b1();

void input_zero_b2();
void input_one_b2();

void input_zero_b3();
void input_one_b3();

// Create & assign
char bit_string_b1[50];
char bit_string_b2[50];
char bit_string_b3[50];

const char zero_b[2] = "0";
const char one_b[2] = "1";

// Create 
char buffer_bit_b[50];

// Catch invalid input
void scanString_bit_b(void){
    // Input
    scanf("%s", &buffer_bit_b[0]);
    // delate string
    buffer_bit_b[0] = '\0';
}

// Main function
void bit_b(void)
{
    // Output
    printf("### BIT OPERATION B ###\n");
    printf("Bitwise AND '&'\n\n");

    // Create & assign
    int value_b1;
    int value_b2;
    int value_b3;

    int value_b1_1;
    int value_b1_2;
    int value_b1_3;

    long binary_to_int_b1;
    long binary_to_int_b2;
    int bit_b;      // placeholder for bit

    char *hold_bits;
    
    int max_b = 255;

    #define BITS_B 8    // 8 bit
    int count_b = BITS_B-1;

    int array_bits_b1[BITS_B] = {0,0,0,0,0,0,0,0};  // String 1 Placeholder for bit's
    int array_bits_b2[BITS_B] = {0,0,0,0,0,0,0,0};  // String 2 Placeholder for bit's
    int array_bits_b3[BITS_B] = {0,0,0,0,0,0,0,0};  // String 3 Placeholder for bit's
    
    // Go here
    main_1:
    
    // Output
    printf("Input 1. number 0...%d (%d bit): ", max_b, BITS_B);
    
    // Conditional statement: Input value 1
    if (scanf("%d", &value_b1) == 0)  {
        // Output
        printf("\nInput is not a number!\n\n");
        
        // function: Catch invalid input
        scanString_bit_b();
        
        // Jump to start
        goto main_1;
    }
    else if (value_b1 < 0 || value_b1 > max_b)
    {
        // Output
        printf("\nInput is not a number 0...%d!\n\n", max_b);
        
        // Jump to start
        goto main_1;
    }

    // Go here
    main_2:

    // Output
    printf("Input 2. number 0...%d (%d bit): ",max_b, BITS_B);

    // Conditional statement: Input value 2
    if (scanf("%d", &value_b2) == 0)  {
        // Output
        printf("\nInput is not a number!\n\n");
        
        // function: Catch invalid input
        scanString_bit_a();
        
        // Jump to start
        goto main_2;
    }
    else if (value_b2 < 0 || value_b2 > max_b)
    {
        // Output
        printf("\nInput is not a number 0...%d!\n\n", max_b);
        
        // Jump to start
        goto main_2;
    }
    else
    {
        printf("\n");
    
        // Pass value
        value_b1_1 = value_b1;
        value_b1_2 = value_b2;
    
        // Bitwise AND
        value_b3 = value_b1 & value_b2;
    
        // Pass value
        value_b1_3 = value_b3;
    
        // write 1. Binary number to array
        while (value_b1_1 > 0)
        {
            bit_b = value_b1_1 % 2;            
            value_b1_1 = value_b1_1/2;     
            array_bits_b1[count_b] = bit_b;
            count_b--;
            //printf("value %d : 2 = %d R %d\n", (value_a*2) + v_bit, value_a, v_bit);
        }
    
        // Assign
        count_b = 7;
    
        // write 2. Binary number to array
        while (value_b1_2 > 0)
        {
            bit_b = value_b1_2 % 2;            
            value_b1_2 = value_b1_2/2;     
            array_bits_b2[count_b] = bit_b;
            count_b--;
        }
        
        // Assign
        count_b = 7;
    
        // write 3. Binary number to array
        while (value_b1_3 > 0)
        {
            bit_b = value_b1_3 % 2;            
            value_b1_3 = value_b1_3/2;     
            array_bits_b3[count_b] = bit_b;
            count_b--;
        }
        
        // Loop: write Binary number to string 1
        for (int i = 0; i < BITS_B; i++)
        {
            if (array_bits_b1[i] == 0){
                // Function
                input_zero_b1();
            }
            else if (array_bits_b1[i] == 1){
                // Function
                input_one_b1();
            }
        }
        
        // Loop: write Binary number to string 2
        for (int i = 0; i < BITS_B; i++)
        {
            if (array_bits_b2[i] == 0){
                // Function
                input_zero_b2();
            }
            else if (array_bits_b2[i] == 1){
                 // Function
                input_one_b2();
            }
        }
    
        // Loop: write Binary number to string 3
        for (int i = 0; i < BITS_B; i++)
        {
            if (array_bits_b3[i] == 0){
                // Function
                input_zero_b3();
            }
            else if (array_bits_b3[i] == 1){
                 // Function
                input_one_b3();
            }
        }
     
        // Output
        printf("Binary A: %s\n", bit_string_b1);
        printf("Binary B: %s\n", bit_string_b2);
        printf("--------------------\n");
        printf("A AND B : %s\n", bit_string_b3);
        printf("Decimal : %d\n", value_b3);
    
        // Delate string
        bit_string_b1[0] = '\0';
        bit_string_b2[0] = '\0';
        bit_string_b3[0] = '\0';
    }
}

// Function: Input zero ----------------
void input_zero_b1(){
        strcat(bit_string_b1, zero_b);
}

// Function: Input one
void input_one_b1(){
        strcat(bit_string_b1, one_b);
}


// Function: Input zero ----------------
void input_zero_b2(){
        strcat(bit_string_b2, zero_b);
}

// Function: Input one
void input_one_b2(){
        strcat(bit_string_b2, one_b);
}


// Function: Input zero ----------------
void input_zero_b3(){
        strcat(bit_string_b3, zero_b);
}

// Function: Input one
void input_one_b3(){
        strcat(bit_string_b3, one_b);
}