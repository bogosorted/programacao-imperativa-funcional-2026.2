#include <stdio.h>

int main() {
    int valor, cedulas;
    int notas[6] = {100, 50, 20, 10, 5, 2};
    int i = 0;
    
    printf("Digite o valor do saque: ");
    scanf("%d", &valor);
    
    while (valor > 0 && i < 6) {
        cedulas = 0;
        while (valor >= notas[i]) {
            valor -= notas[i];
            cedulas++;
        }
        if (cedulas > 0) {
            printf("%d nota(s) de R$ %d\n", cedulas, notas[i]);
        }
        i++;
    }
    
    if (valor > 0) {
        printf("Valor restante que nao pode ser sacado: R$ %d\n", valor);
    }
    
    return 0;
}
