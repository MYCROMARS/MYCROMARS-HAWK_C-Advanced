// if it's not working acivate this (on macOS):
// #include <stdio.h>
// #include "../header/output_a.h"

// Output A
// Main function
void output_a(void) {
    // Output
    printf("\n### OUTPUT A ###\n\n");
    printf("With printf(): Hello World\n");
    
    // Output: with putc
    printf("With putc(): ");
    putc('H', stdout);
    putc('e', stdout);
    putc('l', stdout);
    putc('l', stdout);
    putc('o', stdout);
    putc(' ', stdout);
    putc('W', stdout);
    putc('o', stdout);
    putc('r', stdout);
    putc('l', stdout);
    putc('d', stdout);
    putc('\n', stdout);
}