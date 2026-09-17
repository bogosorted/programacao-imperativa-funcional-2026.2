#include <stdio.h>

int main() {
    int n1, n2;
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &n2);
    
    printf("Soma: %d\n", n1 + n2);
    printf("Subtracao: %d\n", n1 - n2);
    printf("Multiplicacao: %d\n", n1 * n2);
    
    // Evitando divisao por zero matematicamente usando o operador ternario
    // Caso n2 seja diferente de 0, fazemos a divisao usando float para divisao real.
    (n2 != 0) ? printf("Divisao: %.2f\n", (float)n1 / n2) : printf("Divisao por zero evitada\n");
    
    return 0;
}
