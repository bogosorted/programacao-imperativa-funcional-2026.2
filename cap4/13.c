#include <stdio.h>
#include <math.h>

int main() {
    char op;
    double n1, n2;

    printf("Escolha a operacao (+, -, *, /, ^): ");
    scanf(" %c", &op);

    printf("Digite os dois operandos: ");
    scanf("%lf %lf", &n1, &n2);

    switch (op) {
        case '+':
            printf("Resultado: %.2lf\n", n1 + n2);
            break;
        case '-':
            printf("Resultado: %.2lf\n", n1 - n2);
            break;
        case '*':
            printf("Resultado: %.2lf\n", n1 * n2);
            break;
        case '/':
            if (n2 != 0) {
                printf("Resultado: %.2lf\n", n1 / n2);
            } else {
                printf("Erro: Divisao por zero nao permitida!\n");
            }
            break;
        case '^':
            printf("Resultado: %.2lf\n", pow(n1, n2));
            break;
        default:
            printf("Erro: Operacao invalida!\n");
    }

    return 0;
}
