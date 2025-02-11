// Program 1. Write a C program called print-addresses that prints out a memory address formatted so that all 48 bits are shown in hexadecimal, with a prefix of “0x” so we know they are in hex, with upper case for letters. Your program should loop over all the numbers given on the command line. The arguments will be given as decimal numbers. (You may need to refer to manual pages to find some helpful information.)

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <decimal numbers>\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        char *endptr;
        uint64_t num = strtoull(argv[i], &endptr, 10); // Convert input from decimal

        if (*endptr != '\0') {
            fprintf(stderr, "Invalid number: %s\n", argv[i]);
            continue;
        }

        // Mask to ensure only the lower 48 bits are used
        uint64_t masked_address = num & 0xFFFFFFFFFFFF;

        printf("0x%012" PRIX64 "\n", masked_address); // Print in uppercase hex (12 chars for 48-bit)
    }

    return 0;
}
