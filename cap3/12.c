#include <stdio.h>

int main() {
    int c;
    double f, k;
    
    for (c = 0; c <= 100; c += 5) {
        f = (9.0 * c) / 5.0 + 32.0;
        k = c + 273.15;
        printf("C: %d | F: %.2lf | K: %.2lf\n", c, f, k);
    }
    
    return 0;
}
