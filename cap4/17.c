#include <stdio.h>

int main() {
    float valor, valor_final, parcela, comissao;
    int opcao;

    printf("Digite o valor total da compra: ");
    scanf("%f", &valor);
    printf("Opcao de pagamento (1 = A Vista, 2 = Parcelado em 3x): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        valor_final = valor * 0.90;
        comissao = valor_final * 0.05;
        printf("Valor final com desconto: R$ %.2f\n", valor_final);
        printf("Comissao do vendedor: R$ %.2f\n", comissao);
    } else if (opcao == 2) {
        parcela = valor / 3.0;
        comissao = valor * 0.05;
        printf("Valor de cada parcela (3x): R$ %.2f\n", parcela);
        printf("Comissao do vendedor: R$ %.2f\n", comissao);
    } else {
        printf("Opcao de pagamento invalida!\n");
    }

    return 0;
}
