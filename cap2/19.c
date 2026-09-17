#include <stdio.h>

int main() {
    int dias;
    printf("Numero de dias uteis trabalhados: ");
    scanf("%d", &dias);
    
    float bruto = dias * 30.0;
    float desconto = bruto * 0.08;
    float liquido = bruto - desconto;
    
    printf("Valor bruto: R$ %.2f\n", bruto);
    printf("Valor liquido: R$ %.2f\n", liquido);
    
    return 0;
}
