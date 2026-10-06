#include <stdio.h>

int main() {
    int n, i;
    int divisores = 0;
    
    printf("Digite um numero positivo: ");
    scanf("%d", &n);
    
    if (n > 1) {
        for (i = 1; i <= n; i++) {
            if (n % i == 0) {
                divisores++;
            }
        }
        if (divisores == 2) {
            printf("%d e primo. Divisores encontrados: %d\n", n, divisores);
        } else {
            printf("%d nao e primo. Divisores encontrados: %d\n", n, divisores);
        }
    } else {
        printf("%d nao e primo.\n", n);
    }
    
    return 0;
}
