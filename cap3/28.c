#include <stdio.h>

int main() {
    int opcao;
    double salario, novo_salario, desconto;
    
    do {
        printf("\n--- MENU ---\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                printf("Digite o salario: ");
                scanf("%lf", &salario);
                if (salario <= 2000.00) {
                    novo_salario = salario * 1.15;
                } else {
                    novo_salario = salario * 1.10;
                }
                printf("Novo salario: R$ %.2lf\n", novo_salario);
                break;
                
            case 2:
                printf("Digite o salario: ");
                scanf("%lf", &salario);
                if (salario <= 3000.00) {
                    desconto = salario * 0.08;
                } else {
                    desconto = salario * 0.15;
                }
                printf("Desconto: R$ %.2lf\n", desconto);
                break;
                
            case 3:
                printf("Encerrando o programa...\n");
                break;
                
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 3);
    
    return 0;
}
