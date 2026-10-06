#include <stdio.h>

int main() {
    int i;
    for (i = 32; i <= 126; i++) {
        printf("Dec: %d | Hex: %X | Char: %c\n", i, i, (char)i);
    }
    return 0;
}
