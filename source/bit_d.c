// Bit D

// Function definition
void input_zero_d1();
void input_one_d1();

void input_minus_d();

// Create
char bit_string_d1[50] = "";

char buffer_bit_d[50];

// Create & assign
const char zero_d1[2] = "0";
const char one_d1[2] = "1";
const char minus_d[2] = "-";

// Catch invalid input
void scanString_bit_d(void){
    // Input
    scanf("%s", &buffer_bit_d[0]);
    buffer_bit_d[0] = '\0';
}

// Main function
void bit_d(void)
{
    // Output
    printf("### BIT D: Bitwise NOT '~' ###\n");

    // Create & assign
    int value_d1;
    int value_d2;

    int value_d1_1;
   
    int bit_d1;     // placeholder for bit
    int bit_d2;     // placeholder for bit
    int bit_d3;     // placeholder for bit

    int bit_size_b1;
    int bit_size_b2;

    char *hold_bits;
    int max_d = 255;

    #define BITS_D 16   // 16 bit
    int count_d = BITS_D-1;

    int array_bits_d1[BITS_D] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};  // String 1 Placeholder for bit's

    long binary_to_int_d1;
    long binary_to_int_d2;

    int negative_d = 0;
    
    // Go here
    main_1:
    
    // Output
    printf("Input a number -%d...%d (%d bit): ", max_d, max_d, BITS_D);
    
    // Statement: Input
    if (scanf("%d", &value_d1) == 0)  {
        // Output
        printf("\nInput is not a number!\n\n");
        
        // function: Catch invalid input
        scanString_bit_d();
        
        // Go to
        goto main_1;
    }
    else if (value_d1 < -max_d || value_d1 > max_d)
    {
        // Output
        printf("\nInput is not a number -%d...%d!\n\n", max_d, max_d);
        
        // Go to
        goto main_1;
    }
    else
    { 
        // Pass value
        value_d1_1 = value_d1;
    
        // Bitwise NOT
        value_d2 = ~value_d1;

        // Statement: Negative to positive
        if (value_d1_1 < 0){
            value_d1_1 = value_d1_1 * -1;
            negative_d = 1;
        }
    
        // Loop: Write 1. Binary numbers to array
        while (value_d1_1 > 0)
        {
            bit_d1 = value_d1_1 % 2; 
            value_d1_1 = value_d1_1/2;  
            array_bits_d1[count_d] = bit_d1;
            count_d--;
        }

        // Loop: Write Array number to string 1
        for (int i = 0; i < BITS_D; i++)
        {
            // Statement: Input minus
            if (negative_d == 1){
                input_minus_d();
                negative_d = 0;
            }

            // Statement: Input zero
            if (array_bits_d1[i] == 0){
                // Function call
                input_zero_d1();
            }
            else if (array_bits_d1[i] == 1){
                // Function call
                input_one_d1();
            }
        }
         
        // Output
        printf("\nInput to Binary String: %s\n", bit_string_d1);
        
        // Assign: Pass Binary string to int
        binary_to_int_d1 = strtol(bit_string_d1, &hold_bits, 2);

        // Delate 
        bit_string_d1[0] = '\0';

        // Output
        printf("String to Decimal:\t%ld\n\n", binary_to_int_d1);
        
        // Assign
        bit_size_b1 = sizeof(value_d1) * 4; // 4*4=16
        
        // Output
        printf("Output right shift, Value & Bit:\n");

        // Loop: right shift, Value & Bit, Value 1 in Binary
        for (int i = bit_size_b1-1; i >= 0; i--) {

            // Assign: odd number, bit= 1 
            bit_d2 = (value_d1 >> i) & 1;   

            // Example, if Input is: 4, 00000100
            //  i=7 value: 0, 00000000 = bit=0
            //  i=6 value: 0, 00000000 = bit=0
            //  i=5 value: 0, 00000000 = bit=0
            //  i=4 value: 0, 00000000 = bit=0
            //  i=3 value: 0, 00000000 = bit=0
            //  i=2 value: 1, 00000001 = bit=1
            //  i=1 value: 2, 00000010 = bit=0
            //  i=0 value: 4, 00000100 = bit=0

            // Output
            if (i < 10) printf(" "); 
            printf("Right shift: %d: value: %d bit: %d\n", i, (value_d1 >> i), bit_d2);
        }

        // Output
        printf("\nInput to Binary:\t");

        // Loop: Value 1 in Binary
        for (int i = bit_size_b1-1; i >= 0; i--) {

            // Assign: odd number, bit= 1 
            bit_d2 = (value_d1 >> i) & 1;   

            // Statement: Output
            if (i % 8 == 0) printf(" "); // spacing after 8 bits

            // Output
            printf("%d", bit_d2);
        }
        
        // Output
        printf("\n\n");
        printf("Bitwise NOT '~':\t%d\n", value_d2);
        //printf("Bitwise NOT '~': %b\n", value_2);     //only in C23 
        
        // Assign
        bit_size_b2 = sizeof(value_d2) * 4; // 4*4=16

        // Output 
        printf("New Binary:\t\t");

        // Loop: Value 2 in Binary
        for (int i = bit_size_b2-1; i >= 0; i--) {

            // Assign: odd number, bit= 1 
            bit_d3 = (value_d2 >> i) & 1;

            // Output
            printf("%d", bit_d3);

            // Statement
            if (i % 8 == 0) printf(" "); // spacing after 8 bits
        }

        printf("\n");
    }
}

// Function: Input zero ----------------
void input_zero_d1(){
    // Function: Append a string 
    strcat(bit_string_d1, zero_d1);
}

// Function: Input one
void input_one_d1(){
    // Function: Append a string 
    strcat(bit_string_d1, one_d1);
}

// Function: Input minus ----------------
void input_minus_d(){
    // Function: Append a string 
    strcat(bit_string_d1, minus_d);
}