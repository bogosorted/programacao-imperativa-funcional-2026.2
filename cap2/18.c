#include <stdio.h>

#define PI 3.141593

int main() {
    float r;
    printf("Digite o raio da esfera: ");
    scanf("%f", &r);
    
    float area = 4.0 * PI * (r * r);
    float volume = (4.0 / 3.0) * PI * (r * r * r);
    
    printf("Area da superficie: %.2f\n", area);
    printf("Volume: %.2f\n", volume);
    
    return 0;
}
