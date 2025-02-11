// Program 1. Write a C program called print-addresses that prints out a memory address formatted so that all 48 bits are shown in hexadecimal, with a prefix of “0x” so we know they are in hex, with upper case for letters. Your program should loop over all the numbers given on the command line. The arguments will be given as decimal numbers. (You may need to refer to manual pages to find some helpful information.)

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Skip program name (argv[0]) and process each argument
    for (int i = 1; i < argc; i++) {
        // Convert string to unsigned long long to handle large numbers
        unsigned long long num = strtoull(argv[i], NULL, 10);
        
        // Mask to 48 bits (in case input is larger)
        num &= 0xFFFFFFFFFFFFULL;
        
        // Print with 0x prefix, uppercase hex, padding to 12 digits
        printf("0x%012llX\n", num);
    }
    
    return 0;
}