#include <stdio.h>

int main() {
    float l, base_r, alt_r, base_t, alt_t;
    
    printf("Lado do quadrado: ");
    scanf("%f", &l);
    printf("Area do quadrado: %.2f\n\n", l * l);
    
    printf("Base e altura do retangulo: ");
    scanf("%f %f", &base_r, &alt_r);
    printf("Area do retangulo: %.2f\n\n", base_r * alt_r);
    
    printf("Base e altura do triangulo retangulo: ");
    scanf("%f %f", &base_t, &alt_t);
    printf("Area do triangulo retangulo: %.2f\n", (base_t * alt_t) / 2.0);
    
    return 0;
}
