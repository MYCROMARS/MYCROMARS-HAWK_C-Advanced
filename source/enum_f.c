// Integrate libraries direct:
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
    printf("\n### ENUM E: Typedef Enum to function ###\n");
       
	// Create & assign: Enum Item
	TypEnum ITEM_A = ITEM_A1;	
	// or	
	//TypEnum ITEM_A = ITEM_A2;		
	// or
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
			// Output
			printf("ITEM A1\n");
			break;
			
		case ITEM_A2:
			// Output
			printf("ITEM A2\n");
			break;
			
		case ITEM_A3:
			// Output
			printf("ITEM A3\n");
			break;

		default: break;
    }
}