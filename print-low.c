#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        long num = strtol(argv[i], NULL, 0);
        unsigned char low_byte = num & 0xFF;
        
        // Added more padding spaces in format string
        printf("%d 0x%02X %3u\n", i, low_byte, low_byte);
    }
    
    return 0;
}