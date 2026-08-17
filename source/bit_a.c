// Bit A

// Function definition
void input_zero_a();
void input_one_a();

// Create & assign
char bit_string_a[50];
const char zero_a[2] = "0";
const char one_a[2] = "1";

// Create 
char buffer_bit_a[50];

// Catch invalid input
void scanString_bit_a(void){
    // Input
    scanf("%s", &buffer_bit_a[0]);

    // Delate
    buffer_bit_a[0] = '\0';
}

// Main function
void bit_a(void)
{
    // Output
    printf("### BIT A: Decimal to Binary to Decimal ###\n\n");

    // Create & assign
    int value_a1;
    int value_a2;
    long value_a3;
    
    int bit_a;              // placeholder for bit
    char *hold_bits;
    int max_a = 255;
    
    #define BITS_A 8        // 8 bit
    int count_a = BITS_A-1; // 7
    int array_bits_a[BITS_A] = {0,0,0,0,0,0,0,0};  // String Placeholder for bit's
    
    // Go here
    main:
    
    // Output
    printf("Input a number 0...%d (%d bit): ", max_a, BITS_A);

    // Conditional statement
    if (scanf("%d", &value_a1) == 0)  {
        // Output
        printf("\nInput is not a number!\n\n");
        
        // function: Catch invalid input
        scanString_bit_a();
        
        // Go to
        goto main;
    }
    // Wrong number, not 1...menuMax
    else if (value_a1 < 0 || value_a1 > max_a){
        // Output
        printf("\nInput is wrong, not 0...%d\n\n", max_a);

        // Go to
        goto main;
    }
    else {
         printf("\n");

        // Pass value
        value_a2 = value_a1;

        // Loop: Write Binary numbers to array
        while (value_a2 > 0)
        {
            // Assign
            bit_a = value_a2 % 2;            
            value_a2 = value_a2/2; 
            
            // Output
            printf("value %d : 2 \t= %d \tR %d\n", (value_a2*2) + bit_a, value_a2, bit_a);
    
            // Assign
            array_bits_a[count_a] = bit_a;
            count_a--;
        }

        // Loop: write Binary number to string
        for (int i = 0; i < BITS_A; i++)
        {
            // Conditional statement: Input 0 / 1
            if (array_bits_a[i] == 0){
                // Function: 0
                input_zero_a();
            }
            else if (array_bits_a[i] == 1){
                 // Function: 1
                input_one_a();
            }
        }
    
        // Assign: Pass Binary string to int
        value_a3 = strtol(bit_string_a, &hold_bits, 2);
        
        // Output
        //printf("\nInput: %d\n", val);
        printf("\nBinary:  %s\n", bit_string_a);
        printf("Decimal: %ld\n", value_a3);
    
        // Delate
        bit_string_a[0] = '\0';
    }
}

// Function: Input zero
void input_zero_a(){
        // Function: Append a string 
        strcat(bit_string_a, zero_a);
}

// Function: Input one
void input_one_a(){
        // Function: Append a string 
        strcat(bit_string_a, one_a);
}
