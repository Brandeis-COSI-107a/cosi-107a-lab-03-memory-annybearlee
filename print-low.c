#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Start from 1 to skip program name
    for (int i = 1; i < argc; i++) {
        // Convert string to long, base 0 allows both decimal and hex input
        long num = strtol(argv[i], NULL, 0);
        
        // Mask to get only low 8 bits using 0xFF
        unsigned char low_byte = num & 0xFF;
        
        // Print: argument number (width 1+), hex (width 4), decimal (width 3)
        printf("%d 0x%02X %u\n", i, low_byte, low_byte);
    }
    
    return 0;
}