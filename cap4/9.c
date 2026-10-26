#include <stdio.h>

int main() {
    float n1, n2, n3, media;

    printf("Digite a nota do Trabalho de Laboratorio: ");
    scanf("%f", &n1);
    printf("Digite a nota da Avaliacao Semestral: ");
    scanf("%f", &n2);
    printf("Digite a nota do Exame Final: ");
    scanf("%f", &n3);

    media = (n1 * 2 + n2 * 3 + n3 * 5) / 10.0;

    printf("Media ponderada: %.2f\n", media);

    if (media < 3.0) {
        printf("Situacao: Reprovado\n");
    } else if (media < 5.0) {
        printf("Situacao: Em Recuperacao\n");
    } else {
        printf("Situacao: Aprovado\n");
    }

    return 0;
}
