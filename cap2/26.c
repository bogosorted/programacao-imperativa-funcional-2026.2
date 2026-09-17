#include <stdio.h>

int main() {
    float comp, larg, preco;
    
    printf("Comprimento e largura do terreno (em m): ");
    scanf("%f %f", &comp, &larg);
    printf("Preco do metro do arame: ");
    scanf("%f", &preco);
    
    float perimetro = 2 * (comp + larg);
    float metros_totais = perimetro * 3.0;
    float custo_total = metros_totais * preco;
    
    printf("Metros de arame: %.2f\n", metros_totais);
    printf("Custo total: R$ %.2f\n", custo_total);
    
    return 0;
}
