#include <stdio.h>

int main() {
    float base, liquido;
    printf("Salario-base: ");
    scanf("%f", &base);
    
    // A formula soma 5% de gratificacao (+ base * 0.05) e subtrai 7% de imposto (- base * 0.07).
    liquido = base + (base * 0.05) - (base * 0.07);
    
    printf("Salario liquido: R$ %.2f\n", liquido);
    
    return 0;
}
