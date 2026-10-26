#include <stdio.h>

int main() {
    float valor, preco_final;
    int estado;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    printf("Digite o codigo do estado (1=MG, 2=SP, 3=RJ, 4=MS): ");
    scanf("%d", &estado);

    switch (estado) {
        case 1:
            preco_final = valor * 1.07;
            printf("Preco final (MG): R$ %.2f\n", preco_final);
            break;
        case 2:
            preco_final = valor * 1.12;
            printf("Preco final (SP): R$ %.2f\n", preco_final);
            break;
        case 3:
            preco_final = valor * 1.15;
            printf("Preco final (RJ): R$ %.2f\n", preco_final);
            break;
        case 4:
            preco_final = valor * 1.08;
            printf("Preco final (MS): R$ %.2f\n", preco_final);
            break;
        default:
            printf("Erro: Codigo de estado invalido!\n");
    }

    return 0;
}
