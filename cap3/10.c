#include <stdio.h>

int main() {
    int multiplos = 0;
    int numero = 1;

    while (multiplos < 100) {
        if (numero % 3 == 0) {
            printf("%d\t", numero);
            multiplos++;
            if (multiplos % 10 == 0) {
                printf("\n");
            }
        }
        numero++;
    }

    return 0;
}
