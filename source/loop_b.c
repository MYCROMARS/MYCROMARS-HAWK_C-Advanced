// LOOP B

// Main function
void loop_b(void)
{
    // Output
    printf("### LOOP B: While loop with continue ###\n\n");

    // Create & assign
    int value = 1;

    // Do while Loop
    while (value <= 11)
    {
        // Output
        printf("value: %d\n", value);
        
        // Assign
        value++;

        // Conditional statment
        if (value >= 5)
            // Skip the rest and start next loop
            continue;

            // Output
            printf("++\n");
    } 
} 