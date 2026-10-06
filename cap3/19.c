#include <stdio.h>

int main() {
    int n, i;
    int a = 1, b = 1, c;
    
    printf("Digite N: ");
    scanf("%d", &n);
    
    if (n == 1) {
        printf("Termo 1: 1\nLista: 1\n");
    } else if (n >= 2) {
        printf("Lista: 1 1 ");
        for (i = 3; i <= n; i++) {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
        printf("\nTermo %d: %d\n", n, b);
    }
    
    return 0;
}
