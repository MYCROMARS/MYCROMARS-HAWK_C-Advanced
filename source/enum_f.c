// if it's not working activate this (on macOS):
// #include <stdio.h>
// #include "../header/enum_f.h"

// ENUM F

// Create Typedef Enum List
typedef enum{
    ITEM_A1, ITEM_A2, ITEM_A3
}TypEnum;

// Function Definition
void ItemList_A(TypEnum item);

// Main function
void enum_f(void)
{
    // Output
    printf("\n### ENUM E ###\n");
       
	// Create & assign Enum Item
	TypEnum ITEM_A = ITEM_A1;		
	//TypEnum ITEM_A = ITEM_A2;		
	//TypEnum ITEM_A = ITEM_A3;		
			
	// Output
    printf("ITEM in Main: %d\n", ITEM_A);

	// Execute function
	ItemList_A(ITEM_A);
}

// Function
void ItemList_A(TypEnum item){

	// Output
	printf("ITEM in Funktion: %d\n", item);
    printf("In switch case: ");

	// Switch statement
	switch(item){

		case ITEM_A1:
			printf("ITEM A1\n");
			break;
		
		case ITEM_A2:
			printf("ITEM A2\n");
			break;

		case ITEM_A3:
			printf("ITEM A3\n");
			break;

		default: break;
    }
}