#include <stdio.h>

int main() {
    int total, pago, troco, restante;
    int c100, c50, c20, c10, c5, c2;

    printf("Digite o valor total a pagar: ");
    scanf("%d", &total);
    printf("Digite o valor entregue pelo cliente: ");
    scanf("%d", &pago);

    if (pago < total) {
        printf("Erro: Valor entregue insuficiente!\n");
    } else {
        troco = pago - total;
        restante = troco;

        printf("Troco devido: R$ %d\n", troco);

        c100 = restante / 100;
        restante %= 100;
        if (c100 > 0) printf("Cedulas de R$ 100: %d\n", c100);

        c50 = restante / 50;
        restante %= 50;
        if (c50 > 0) printf("Cedulas de R$ 50: %d\n", c50);

        c20 = restante / 20;
        restante %= 20;
        if (c20 > 0) printf("Cedulas de R$ 20: %d\n", c20);

        c10 = restante / 10;
        restante %= 10;
        if (c10 > 0) printf("Cedulas de R$ 10: %d\n", c10);

        c5 = restante / 5;
        restante %= 5;
        if (c5 > 0) printf("Cedulas de R$ 5: %d\n", c5);

        c2 = restante / 2;
        restante %= 2;
        if (c2 > 0) printf("Cedulas de R$ 2: %d\n", c2);

        if (restante > 0) {
            printf("Restante em moedas (R$ 1): %d\n", restante);
        }
    }

    return 0;
}
