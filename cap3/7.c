#include <stdio.h>

void com_for() {
    int i;
    for (i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

void com_while() {
    int i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
}

void com_do_while() {
    int i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n");
}

int main() {
    com_for();
    com_while();
    com_do_while();
    return 0;
}
/* O laco for e o mais adequado porque ja sabemos a quantidade exata de repeticoes (0 a 100) */
