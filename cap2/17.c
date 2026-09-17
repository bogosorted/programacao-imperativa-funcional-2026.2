#include <stdio.h>

#define PI 3.141593

int main() {
    float r;
    printf("Digite o raio do circulo: ");
    scanf("%f", &r);
    
    float area = PI * (r * r);
    float circ = 2 * PI * r;
    
    printf("Area: %.2f\n", area);
    printf("Circunferencia: %.2f\n", circ);
    
    return 0;
}
