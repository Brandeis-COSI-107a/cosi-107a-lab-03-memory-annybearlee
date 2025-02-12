#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        long num = strtol(argv[i], NULL, 0);
        
        // First mask byte 1 (0xFF00) then shift right 8 bits
        unsigned char byte1 = (num & 0xFF00) >> 8;
        
        // Removed the argument number (i) from printf
        printf("0x%02X %3u\n", byte1, byte1);
    }
    
    return 0;
}