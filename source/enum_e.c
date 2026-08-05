// Integrate libraries direct:
// #include <stdio.h>
// #include "../header/enum_e.h"

// ENUM E

// Create Enum List
enum LIST{
    ITEM_1, ITEM_2, ITEM_3
};

// Function Definition
void ItemList(enum LIST item);

// Main function
void enum_e(void)
{
    // Output
    printf("\n### ENUM E: Enum to function ###\n");
       
	// Create & assign Enum Item
    enum LIST ITEM = ITEM_1;
	// or
    //enum LIST ITEM = ITEM_2;
	// or
    //enum LIST ITEM = ITEM_3;

	// Output
    printf("ITEM in Main: %d\n", ITEM);

	// Execute function
	ItemList(ITEM);
}

// Function
void ItemList(enum LIST item){

	// Output
    printf("ITEM in Funktion: %d\n", item);
    printf("In switch case: ");

	// Switch case statement 
	switch(item){

		case ITEM_1:
			printf("ITEM 1\n");
			break;
		
		case ITEM_2:
			printf("ITEM 2\n");
			break;

		case ITEM_3:
			printf("ITEM 3\n");
			break;

		default: break;
    }
}

