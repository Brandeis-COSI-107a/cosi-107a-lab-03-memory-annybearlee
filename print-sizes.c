#include <stdio.h>

int main() {
    // 1. interger variable with value 978
    int my_integer = 978;
    
    // 2. pointer variable
    int *int_ptr;
    
    // 3. character array of size 200
    char char_array[200];
    
    // 4. character pointer variable
    char *char_ptr;
    
    // 5. Print sizes of various types
    printf("size of char is %zu\n", sizeof(char));
    printf("size of short is %zu\n", sizeof(short));
    printf("size of int is %zu\n", sizeof(int));
    printf("size of long is %zu\n", sizeof(long));
    printf("size of long long is %zu\n", sizeof(long long));
    printf("size of float is %zu\n", sizeof(float));
    printf("size of double is %zu\n", sizeof(double));
    printf("size of char * is %zu\n", sizeof(char *));
    printf("size of int * is %zu\n", sizeof(int *));
    printf("size of long * is %zu\n", sizeof(long *));
    
    // 6. size of character array
    printf("The size of my character array is %zu\n", sizeof(char_array));
    
    // 7. Set character pointer to point to character array
    char_ptr = char_array;
    
    // 8. size of character pointer
    printf("The size of my character pointer is %zu\n", sizeof(char_ptr));
    
    // 9. Set integer pointer to point to integer variable
    int_ptr = &my_integer;
    
    // 10. size of integer pointer
    printf("The size of my int pointer is %zu\n", sizeof(int_ptr));
    
    // 11. size of what integer pointer points to
    printf("The size of what my integer pointer points at is %zu\n", sizeof(*int_ptr));
    
    return 0;
}