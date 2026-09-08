// Integrate libraries direct:
// #include <stdio.h>
// #include "../header/output_a.h"

// Output A

// Main function
void output_a(void) {
    // Output
    printf("### OUTPUT A: Character, Tab, Return ###\n\n");

    printf("Backslash: \\\n\n");                // ( \ )
    printf("Quotation marks: \'\n");            // ( ' )
    printf("Quotation marks: \"\n\n");          // ( " )
    printf("Question marks: \?\n\n");           // ( ? )
    
    printf("Backspace with: \bTest\n\n");       // Backspace
    printf("Next Line with: \nTest\n\n");       // Next Line
    printf("Carriage Return\rTest----\n\n");    // Carriage Return, overright from start
    
    printf("H Tab with: \\t= \tTest\n\n");      // Horizontal Tab
    printf("V Tab with: \\v= \vTest\n");        // Vertical Tab
    printf("V Tab with: \fTest\n");           // Vertical Tab
    
    //printf("Alert with: \a\n");               // Sound
}