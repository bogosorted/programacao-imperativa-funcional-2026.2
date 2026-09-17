#include <stdio.h>

int main() {
    float c, f, k;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);
    
    f = (c * 9.0 / 5.0) + 32.0;
    k = c + 273.15;
    
    printf("Fahrenheit: %.2f\n", f);
    printf("Kelvin: %.2f\n", k);
    
    return 0;
}
