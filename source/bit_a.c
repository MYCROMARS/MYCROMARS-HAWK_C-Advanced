// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include <string.h>
// #include "../header/bit_a.h"

// Input A

// Function definition
void _zero();
void _one();

// Create & assign
char s[50] = "";
const char zero[2] = "0";
const char one[2] = "1";

// Create 
char buffer[50];

// Catch invalid input
void scanString_bit(void){
    // Input
    scanf("%s", &buffer[0]);
}

// Main function
void bit_a(void)
{
    // Output
    printf("### BIT OPERATION A ###\n\n");

    // Create
    int val;
    int valMax = 255;

    int count_zero;
    int count_one;
    #define ar 8  // 8 bit

    int val_bit;
    
    int a[ar] = {0,0,0,0,0,0,0,0};
    int count_ar = 7;
    
    // Go here
    main:
    
    // Output
    printf("Input a Dezimal number 0...255 (8 bit): ");

    // Conditional statement
    if (scanf("%d", &val) == 0)  {
        // Output
        printf("\nInput is not a number!\n\n");
        
        // function: Catch invalid input
        scanString_bit();
        
        // Jump to start
        goto main;
    }
    else if (val >= 0 && val <= valMax){
        printf("\n");

        int val_e = val;

        // write binär numbers to array
        while (val_e > 0)
        {
            val_bit = val_e % 2;            // R 0
            val_e = val_e/2;                // 11
            printf("value : 2 = %d R %d\n", val_e, val_bit);
    
            a[count_ar] = val_bit;
            count_ar--;
        }
    }
    else {
        // Wrong number, not 1...menuMax
        // Output
        printf("\nInput is wrong, not 1...%d\n\n", valMax);

        // Jump to start
        goto main;
    }

    // write binär number to string
    for (int i = 0; i < ar; i++)
    {
        if (a[i] == 0){
            //printf("0");
            _zero();
        }
        else if (a[i] == 1){
             //printf("1");
            _one();
        }
    }

    // Create char Pointer
    char *endptr2;

    // String to int
    long val2 = strtol(s, &endptr2, 2);
    
    //printf("\nInput: %d\n", val);
    printf("\nBinär: %s\n", s);
    printf("Dezimal: %ld\n", val2);
}

// Count Zero
void _zero(){
        strcat(s, zero);
}
// Count One
void _one(){
        strcat(s, one);
}
