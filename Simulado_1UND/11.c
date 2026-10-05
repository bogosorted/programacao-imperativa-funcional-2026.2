#include <stdio.h>

int main() {
    int dias;
    double salario_bruto, gratificacao, imposto_renda, salario_liquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    salario_bruto = dias * 45.00;
    gratificacao = salario_bruto * 0.05;
    imposto_renda = salario_bruto * 0.08;
    salario_liquido = salario_bruto + gratificacao - imposto_renda;

    printf("\n--- Holerite Detalhado ---\n");
    printf("Salario Bruto: R$ %.2lf\n", salario_bruto);
    printf("Gratificacao (5%%): R$ %.2lf\n", gratificacao);
    printf("Imposto de Renda (8%%): R$ %.2lf\n", imposto_renda);
    printf("Salario Liquido: R$ %.2lf\n", salario_liquido);

    return 0;
}
