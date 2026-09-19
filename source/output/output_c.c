// Output C

// Main function
void output_c(void) {
    // Output
    printf("### OUTPUT C: C Standard ###\n\n");

     #ifdef __STDC_VERSION__
        long version = __STDC_VERSION__;
        if (version == 199409L) printf("C-Standard: C94\n");
        else if (version == 199901L) printf("C-Standard: C99\n");
        else if (version == 201112L) printf("C-Standard: C11\n");
        else if (version == 201710L) printf("C-Standard: C17\n");
        else if (version > 201710L) printf("C-Standard: C23 or newer (Value: %ld)\n", version);
        else printf("C-Standard-Value: %ld\n", version);
    #else
        printf("C-Standard: C89 / C90 (or __STDC_VERSION__ is not supported by the Compiler)\n");
    #endif
}