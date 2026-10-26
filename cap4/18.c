#include <stdio.h>

int main() {
    int opcao;
    float temp, resultado;

    printf("Menu de Conversao de Temperatura:\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Celsius para Kelvin\n");
    printf("3. Fahrenheit para Celsius\n");
    printf("4. Kelvin para Celsius\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temp);
            resultado = temp * 1.8 + 32;
            printf("Temperatura em Fahrenheit: %.2f\n", resultado);
            break;
        case 2:
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temp);
            resultado = temp + 273.15;
            printf("Temperatura em Kelvin: %.2f\n", resultado);
            break;
        case 3:
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &temp);
            resultado = (temp - 32) / 1.8;
            printf("Temperatura em Celsius: %.2f\n", resultado);
            break;
        case 4:
            printf("Digite a temperatura em Kelvin: ");
            scanf("%f", &temp);
            resultado = temp - 273.15;
            printf("Temperatura em Celsius: %.2f\n", resultado);
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
