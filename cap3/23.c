#include <stdio.h>

int main() {
    int l, i, j;
    
    printf("Digite L (3 a 20): ");
    scanf("%d", &l);
    
    if (l >= 3 && l <= 20) {
        for (i = 1; i <= l; i++) {
            for (j = 1; j <= l; j++) {
                if (i == 1 || i == l || j == 1 || j == l) {
                    printf("X");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } else {
        printf("Tamanho invalido.\n");
    }
    
    return 0;
}
