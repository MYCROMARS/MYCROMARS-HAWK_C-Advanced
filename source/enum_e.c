// if it's not working activate this (on macOS):
// #include <stdio.h>
// #include "../header/enum_e.h"

// ENUM E

// Typedef Enum
enum st{
    SUCCESS, FAILURE, PENDING
};

// Function Definition
void connectStatus(enum st status);

// Main function
void enum_e(void)
{
    // Output
    printf("\n### ENUM E ###\n");
       
	// SUCCESS, FAILURE, PENDING
    enum st status1 = PENDING;

    printf("%d\n", status1);

	connectStatus(status1);
}

// Function
void connectStatus(enum st status){

    printf("%d\n", status);

	switch(status){

		case SUCCESS:
			printf("Connection\n");
			break;
		
		case FAILURE:
			printf("Not connect\n");
			break;

		case PENDING:
			printf("Connection…\n");
			break;

		default: break;
    }
}

