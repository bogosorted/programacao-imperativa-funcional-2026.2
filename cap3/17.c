#include <stdio.h>

int main() {
    double nota;
    double maior = -1.0;
    double menor = 11.0;
    double soma = 0;
    int qtd = 0;
    
    while (1) {
        printf("Digite a nota (-1.0 para parar): ");
        scanf("%lf", &nota);
        if (nota == -1.0) break;
        
        if (nota > maior) maior = nota;
        if (nota < menor) menor = nota;
        soma += nota;
        qtd++;
    }
    
    if (qtd > 0) {
        printf("Total avaliados: %d\n", qtd);
        printf("Maior nota: %.2lf\n", maior);
        printf("Menor nota: %.2lf\n", menor);
        printf("Media geral: %.2lf\n", soma / qtd);
    } else {
        printf("Nenhum aluno avaliado.\n");
    }
    return 0;
}
