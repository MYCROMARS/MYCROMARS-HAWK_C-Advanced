// MACRO A

// Define: Constant
#define V1 7
#define V2 8

// Define: Function Math
#define M1(a) ((V1) * (a))
#define M2(a) ((V1) + (a))
#define M3(a) ((V1) - (a))

// Define: execute code if it is on (deactivate or activate it)
//#define GO



void macro_a(void){

    // Output
    printf("Constant V1: %d\n", V1);
    printf("Constant V2: %d\n", V2);

    // If GO is defined execute this
    #ifdef GO
        // Output: Function
        printf("Function M1 = %d * %d = %d\n", V1, V2, M1(V2));
    #endif
        
    // If GO is not defined execute this
    #ifndef GO    
        // Output: Function
        printf("Function M2 = %d + %d = %d\n", V1, V2, M2(V2));
        printf("Function M3 = %d - %d = %d\n", V1, V2, M3(V2));
    #endif
}