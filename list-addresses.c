#include <stdio.h>

// Uninitialized data (BSS segment)
int uninitialized_global;

// Initialized data (data segment)
const char* constant_string = "Hello, memory!";

// Another function to get its address
void another_function() {
    printf("This is another function\n");
}

int main() {
    // Stack variable
    int stack_var = 42;

    // Print addresses in consistent format with labels
    printf("stack variable: %12p\n", (void*)&stack_var);
    printf("initialized data: %12p\n", (void*)constant_string);
    printf("uninitialized data: %12p\n", (void*)&uninitialized_global);
    printf("main: %12p\n", (void*)&main);
    printf("function: %12p\n", (void*)&another_function);

    return 0;
}