#include <stdio.h>

int main() {
    float h_normais, h_extras;
    
    printf("Horas normais anuais: ");
    scanf("%f", &h_normais);
    printf("Horas extras anuais: ");
    scanf("%f", &h_extras);
    
    float bruto = (h_normais * 10.0) + (h_extras * 15.0);
    
    float excedente = (bruto > 12000.0) ? (bruto - 12000.0) : 0.0;
    float imposto = excedente * 0.10;
    
    printf("Salario anual bruto: R$ %.2f\n", bruto);
    printf("Imposto a pagar: R$ %.2f\n", imposto);
    
    return 0;
}
