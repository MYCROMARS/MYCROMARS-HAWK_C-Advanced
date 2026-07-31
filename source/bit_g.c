// if it's not working acivate this:
// #include <stdio.h>
// #include <string.h>
// #include "../header/bit_g.h"

// Bit F

// Create global variables --------------------
char bit_string_g1[50] = "";
char buffer_bit_g[50];

const char zero_g1[2] = "0";
const char one_g1[2] = "1";
const char minus_g[2] = "-";

#define BITS_G 16   // 16 bit

// Function definition ------------------------
void scanString_bit_g(void);
void input_zero_g1(void);
void input_one_g1(void);
void input_minus_g(void);

//int function_negative(int value);
void function_negative(int *value);
int binary_to_array(int count, int value, int array[]);
int array_to_string(int negative, int array[]);
void decimal_to_binary(int bit_size, int value, int bit);


// Main function ------------------------------
void bit_g(void)
{
    // Output
    printf("### BIT OPERATION G ###\n");
    printf("Decimal to Binary Loop\n\n");

    // Create & assign local variables
    int menu;
    int value_g1;
    int value_g1_1;
    int bit_g1;     // placeholder for bit
    int bit_g2;     // placeholder for bit
    int bit_size_g1;
    long binary_to_int_g1;
    char *hold_bits;
    int max_g = 255;
    int negative_g = 0;
    int count_g = BITS_G-1;
    // Placeholder for bits
    int array_bits_g1[BITS_G] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};  
    
    // Go here
    main_1:

    // Start
    printf("Start (0) NO | (1) YES : ");

    if (scanf("%d", &menu) == 0){
        // Output
        printf("\nInput is not a number!\n\n");
        
        // function: Catch invalid input
        scanString_bit_g();
        
        // Jump to start
        goto main_1;
    }
    else if (menu <0 || menu>1)
    {
        // Output
        printf("\nInput is not 0 or 1!\n\n");
                
        // Jump to start
        goto main_1;
    }
    // Start input a number
    else if (menu == 1){

        // Output
        printf("Input a number -%d...%d (%d bit): ", max_g, max_g, BITS_G);
        
        // Conditional statement: value 1
        if (scanf("%d", &value_g1) == 0)  {
            // Output
            printf("\nInput is not a number!\n\n");
            
            // function: Catch invalid input
            scanString_bit_g();
            
            // Jump to start
            goto main_1;
        }
        else if (value_g1 < -max_g || value_g1 > max_g)
        {
            // Output
            printf("\nInput is not a number -%d...%d!\n\n", max_g, max_g);
            
            // Jump to start
            goto main_1;
        }
        else
        { 
            // Pass value
            value_g1_1 = value_g1;
        
            // Negative to positive
            if (value_g1_1 < 0){
                // Assign
                negative_g = 1;
                
                // Function: negative to positive value
                function_negative(&value_g1_1);
            }
        
            // Function: write binary numbers to array
            array_bits_g1[0] = binary_to_array(count_g, value_g1_1, array_bits_g1);
         
            // Function: write array number to string 
            negative_g = array_to_string(negative_g, array_bits_g1);

            // Output
            if ( negative_g == 2){
                printf("\nBinary String: %s\n", bit_string_g1);
            }
            else{
                printf("\nBinary String:  %s\n", bit_string_g1);
            }
            
            // Decimal to Binary with: bitwise shift right
            decimal_to_binary(bit_size_g1, value_g1, bit_g2);
            
            // Assign: reset
            value_g1 = 0;
            value_g1_1 = 0;
            bit_g1 = 0;     
            bit_g2 = 0;    
            bit_size_g1 = 0;
            negative_g = 0;

            for (int i = 0; i<BITS_G; i++){
                array_bits_g1[i] = 0; 
            }

            // Delate string
            bit_string_g1[0] = '\0';

            // Jump to start
            goto main_1;
        }
    }
    else if (menu == 0){
        printf("\n### EXIT ###\n");
    } 
}

// -----------------------------------------------------
// Catch invalid input 
void scanString_bit_g(void){
    // Input
    scanf("%s", &buffer_bit_g[0]);
    buffer_bit_g[0] = '\0';
}

// Function: switch negative to positive 
void function_negative(int *value){
    *value = *value * -1;
}

// Function: write binary numbers to array
int binary_to_array(int count, int value, int array[]){
    int bit;
    
    while (value > 0)
    {
        bit = value % 2; 
        value = value/2;  
        array[count] = bit;
        count--;
    }

    return array[0];
}

// Function: write array number to string 
int array_to_string(int negative, int array[]){

    for (int i = 0; i < BITS_G; i++)
    {
        // Function input minus
        if (negative == 1){
            input_minus_g();
            negative = 2;
        }

        // Function input zero
        if (array[i] == 0){
            input_zero_g1();
        }
        // Function input one
        else if (array[i] == 1){
            input_one_g1();
        }
    }

    return negative;
}

// Function: Input zero ----------------
void input_zero_g1(){
        strcat(bit_string_g1, zero_g1);
}

// Function: Input one
void input_one_g1(){
        strcat(bit_string_g1, one_g1);
}

// Function: Input minus 
void input_minus_g(){
        strcat(bit_string_g1, minus_g);
}


// Decimal to Binary with: bitwise shift right
void decimal_to_binary(int bit_size, int value, int bit){

    // Output
    printf("Binary:\t\t");
    
    // Assign
    bit_size = sizeof(value) * 4; // 4*4=16
    
    // Loop: Value 1 in Binary with: bitwise shift right
    for (int i = bit_size-1; i >= 0; i--) {
    
        // Assign: odd number, bit= 1 
        bit = (value >> i) & 1;   
    
        // Output
        printf("%d", bit);
        //if (i % 8 == 0) printf(" "); // spacing after 8 bits
    }

    printf("\n\n");
}


