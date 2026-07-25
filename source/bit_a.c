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

// Main function
void bit_a(void)
{
    // Output
    printf("### BIT OPERATION A ###\n\n");

    // Create
    int value = 2;
    int count_zero;
    int count_one;
    #define ar 7

    int a[ar] = {0,0,0,0,0,0,0};

    switch (value)
    {
        case 0:
            break;

        case 1:
            // 1
            a[6] = 1;
            break;

        case 2:
            // 2
            a[5] = 1;
            break;

        case 3:
            // 3
            a[5] = 1;
            a[6] = 1;
            break;

        case 4:
            // Zahl 4
            a[4] = 1;
            break;
        
        default:
            break;
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
    
    printf("\nvalue: %d\n", value);
    printf("char string: %s\n", s);
    printf("Dezimal: %ld\n", val2);

    
    // Basis 2 für Binärzahlen angeben
    //long val = strtol(bin_str, &endptr, 2);
    
    //printf("int: %d\n", x);

    //printf("char *: %s\n", bin_str);

    //printf("Dezimal: %ld\n", val);

    // Sicherer, fals der Puffer zu klein ist.
    // char text[20] = "Start";
    // strncat(text, " und Ende", sizeof(text) - strlen(text) - 1);
    // printf("%s\n", text);
}

// Count Zero
void _zero(){
        strcat(s, zero);
}
// Count One
void _one(){
        strcat(s, one);
}
// void _one(int c_one){
//     for (int i = 0; i < c_one; i++)
//     {
//         strcat(s, one);
//     } 
// }