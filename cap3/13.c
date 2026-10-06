#include <stdio.h>

int main() {
    int n, i;
    long long int fat = 1;
    
    printf("Digite N: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Erro: numero negativo.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fat *= i;
        }
        printf("%lld\n", fat);
    }
    
    return 0;
}
