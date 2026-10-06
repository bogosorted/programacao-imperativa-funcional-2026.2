#include <stdio.h>

int main() {
    int n, i, j;
    int num = 1;
    
    printf("Digite N: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
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
    
    return 0;
}
