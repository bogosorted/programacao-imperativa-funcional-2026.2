#include <stdio.h>

int main() {
    int a, b, i, j;
    int divisores, soma = 0;
    
    printf("Digite A e B (A < B): ");
    scanf("%d %d", &a, &b);
    
    for (i = a; i <= b; i++) {
        if (i > 1) {
            divisores = 0;
            for (j = 1; j <= i; j++) {
                if (i % j == 0) {
                    divisores++;
                }
            }
            if (divisores == 2) {
                printf("%d ", i);
                soma += i;
            }
        }
    }
    
    printf("\nSoma total: %d\n", soma);
    
    return 0;
}
