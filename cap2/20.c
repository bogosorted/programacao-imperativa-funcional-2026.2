#include <stdio.h>
#include <math.h>

int main() {
    float a, b, hipotenusa;
    
    printf("Digite os catetos a e b: ");
    scanf("%f %f", &a, &b);
    
    hipotenusa = sqrt(pow(a, 2) + pow(b, 2));
    
    printf("Hipotenusa: %.2f\n", hipotenusa);
    
    return 0;
}
