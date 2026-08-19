// Bit E

// Function definition
void input_zero_e1();
void input_one_e1();

void input_minus_e();

// Create
char bit_string_e1[50] = "";

char buffer_bit_e[50];

// Create & assign
const char zero_e1[2] = "0";
const char one_e1[2] = "1";
const char minus_e[2] = "-";

// Catch invalid input
void scanString_bit_e(void){
    // Input
    scanf("%s", &buffer_bit_e[0]);

    // Delate
    buffer_bit_e[0] = '\0';
}

// Main function
void bit_e(void)
{
    // Output
    printf("### BIT E: Bitwise shift left '<<' ###\n");

    // Create & assign
    int value_e1;
    int value_e2;

    int value_e1_1;
    int value_e2_1; // shift left

    int bit_e1;     // placeholder for bit
    int bit_e2;     // placeholder for bit
    int bit_e3;     // placeholder for bit
    int bit_size_e1;
    int bit_size_e2;

    char *hold_bits;
    int max_e = 255;

    #define BITS_E 16   // 16 bit
    int count_e = BITS_E-1;

    // Placeholder for bit's
    int array_bits_e1[BITS_E] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};  

    long binary_to_int_e1;
    long binary_to_int_e2;

    int negative_e = 0;
    
    // Go here
    main_1:
    
    // Output
    printf("Input a number -%d...%d (%d bit): ", max_e, max_e, BITS_E);
    
    // Conditional statement: value 1
    if (scanf("%d", &value_e1) == 0)  {
        // Output
        printf("\nInput is not a number!\n\n");
        
        // Function call: Catch invalid input
        scanString_bit_e();
        
        // Go to
        goto main_1;
    }
    else if (value_e1 < -max_e || value_e1 > max_e)
    {
        // Output
        printf("\nInput is not a number -%d...%d!\n\n", max_e, max_e);
        
        // Go to
        goto main_1;
    }

    main_2:

    // Output
    printf("Input a shift left number 1...%d:    ", BITS_E/2);
    
    // Conditional statement: value 1
    if (scanf("%d", &value_e2) == 0)  {
        // Output
        printf("\nInput is not a number!\n\n");
        
        // Function call: Catch invalid input
        scanString_bit_e();
        
        // Go to
        goto main_2;
    }
    else if (value_e2 < 1 || value_e2 > BITS_E/2)
    {
        // Output
        printf("\nInput is not a number 1...%d!\n\n", BITS_E/2);
        
        // Go to
        goto main_2;
    }
    else
    { 
        // Assign: Pass value
        value_e1_1 = value_e1;
    
        // Assign: Bitwise shift left <<
        value_e2_1 = value_e1 << value_e2;

        // Negative to positive
        if (value_e1_1 < 0){
            value_e1_1 = value_e1_1 * -1;
            negative_e = 1;
        }
    
        // Loop: Write 1. Binary numbers to array
        while (value_e1_1 > 0)
        {
            // Assign
            bit_e1 = value_e1_1 % 2; 
            value_e1_1 = value_e1_1/2;  
            array_bits_e1[count_e] = bit_e1;
            count_e--;
        }

        // Loop: Write Array number to string 1
        for (int i = 0; i < BITS_E; i++)
        {
            // Statement: Input minus
            if (negative_e == 1){
                input_minus_e();
                negative_e = 0;
            }

            // Statement: Input 0 / 1
            if (array_bits_e1[i] == 0){
                // Function call
                input_zero_e1();
            }
            else if (array_bits_e1[i] == 1){
                // Function call
                input_one_e1();
            }
        }
         
        // Output
        printf("\nInput to Binary String: %s\n", bit_string_e1);

        // Delate 
        bit_string_e1[0] = '\0';
        
        // Assign
        bit_size_e1 = sizeof(value_e1) * 4; // 4*4=16
        
        // Output
        printf("\nInput to Binary:\t");

        // Loop: Value 1 in Binary
        for (int i = bit_size_e1-1; i >= 0; i--) {

            // Assign: odd number, bit= 1 
            bit_e2 = (value_e1 >> i) & 1;   

            // Output
            printf("%d", bit_e2);

            // Statement 
            if (i % 8 == 0) printf(" "); // spacing after 8 bits
        }
        

        // Output ---------------------------------------
        printf("\n\n");
        printf("Bitwise shift left %d:\t%d\n",value_e2, value_e2_1);
        
        // Assign
        bit_size_e2 = sizeof(value_e2_1) * 4; // 4*4=16

        // Output 
        printf("New Binary:\t\t");

        // Loop: Value 2 in Binary
        for (int i = bit_size_e2-1; i >= 0; i--) {

            // Assign: odd number, bit= 1 
            bit_e3 = (value_e2_1 >> i) & 1;

            // Output
            printf("%d", bit_e3);

            // Statement
            if (i % 8 == 0) printf(" "); // spacing after 8 bits
        }

        printf("\n");
    }
}

// Function: Input zero ----------------
void input_zero_e1(){
    // Function: Append a string 
    strcat(bit_string_e1, zero_e1);
}

// Function: Input one
void input_one_e1(){
    // Function: Append a string 
    strcat(bit_string_e1, one_e1);
}

// Function: Input minus ----------------
void input_minus_e(){
    // Function: Append a string 
    strcat(bit_string_e1, minus_e);
}