#include <stdio.h>

int main() {
    double valor, soma = 0;
    int qtd = 0;

    while (1) {
        printf("Digite um valor: ");
        scanf("%lf", &valor);
        
        if (valor < 0) {
            break;
        }
        
        soma += valor;
        qtd++;
    }

    if (qtd > 0) {
        printf("Quantidade: %d\n", qtd);
        printf("Soma: %.2lf\n", soma);
        printf("Media: %.2lf\n", soma / qtd);
    }
    
    return 0;
}
