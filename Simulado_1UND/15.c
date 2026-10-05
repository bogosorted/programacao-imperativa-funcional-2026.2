#include <stdio.h>

int main() {
    int N, i, j;
    int num = 1;

    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &N);

    if (N > 0) {
        for (i = 1; i <= N; i++) {
            for (j = 1; j <= i; j++) {
                if (j == i) {
                    printf("%d", num);
                } else {
                    printf("%d ", num);
                }
                num++;
            }
            printf("\n");
        }
    } else {
        printf("N deve ser positivo.\n");
    }

    return 0;
}
