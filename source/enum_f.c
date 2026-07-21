// if it's not working activate this (on macOS):
// #include <stdio.h>
// #include "../header/enum_f.h"

// ENUM F

// Typedef Enum
typedef enum{
    SUCCESS2, FAILURE2, PENDING2
}Status;

// Function Definition
void connectStatus2(Status status);

// Main function
void enum_f(void)
{
    // Output
    printf("\n### ENUM E ###\n");
       
	// PENDING, FAILURE
	//Status status2 = SUCCESS2;		
	Status status2 = FAILURE2;		
	//Status status2 = PENDING2;		

    printf("%d\n", status2);

	connectStatus2(status2);
}

// Function
void connectStatus2(Status status){

    printf("%d\n", status);

	switch(status){

		case SUCCESS2:
			printf("Connection\n");
			break;
		
		case FAILURE2:
			printf("Not connect\n");
			break;

		case PENDING2:
			printf("Connection…\n");
			break;

		default: break;
    }
}