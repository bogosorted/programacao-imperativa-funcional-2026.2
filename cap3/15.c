#include <stdio.h>

int main() {
    int num, i;
    int encontrou = 0;
    
    printf("Digite o limite NUM: ");
    scanf("%d", &num);
    
    for (i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrou = 1;
        }
    }
    
    if (!encontrou) {
        printf("Nenhum numero satisfaz a condicao.");
    }
    printf("\n");
    return 0;
}
