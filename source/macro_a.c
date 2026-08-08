// MACRO A

// Define: Constant
#define V1 7
#define V2 5.0

// Define: Function Math
#define M1(a) ((V1) + (a))
#define M2(a) ((V1) - (a))

#define M3(a) ((V1) * (a))
#define M4(a) ((V1) / (a))

// Define: Like a switch ON/OFF (deactivate or activate it)
//#define GO

// Main Function
void macro_a(void){
    // Output
    printf("### MACRO A: Calculation ###\n\n");

    // Output
    printf("Constant V1: %d\n", V1);
    printf("Constant V2: %.2f\n", V2);

    // If GO is defined execute this
    #ifdef GO
        // Output: Function
        printf("Function M1 = %d + %d = %d\n", V1, V2, M1(V2));
        printf("Function M2 = %d - %d = %d\n", V1, V2, M2(V2));
    #endif
        
    // If GO is not defined execute this
    #ifndef GO    
        // Output: Function
        printf("Function M2 = %d * %.2f = %.2f\n", V1, V2, M3(V2));
        printf("Function M3 = %d / %.2f = %.2f\n", V1, V2, M4(V2));
    #endif
}