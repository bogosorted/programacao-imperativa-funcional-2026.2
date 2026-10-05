#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
    double r, area, volume;

    printf("Digite o valor do raio R da esfera: ");
    scanf("%lf", &r);

    area = 4 * PI * pow(r, 2);
    volume = (4.0 / 3.0) * PI * pow(r, 3);

    printf("Area da superficie: %.3lf\n", area);
    printf("Volume da esfera: %.3lf\n", volume);

    return 0;
}
