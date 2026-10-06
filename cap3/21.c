#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char secreta, palpite;
    int tentativas = 0;
    
    srand(time(NULL));
    secreta = rand() % 26 + 'a';
    
    while (1) {
        printf("Adivinhe a letra (a-z): ");
        scanf(" %c", &palpite);
        tentativas++;
        
        if (palpite == secreta) {
            printf("Parabens! Voce acertou em %d tentativas.\n", tentativas);
            break;
        } else if (secreta < palpite) {
            printf("A letra secreta vem antes de '%c' no alfabeto.\n", palpite);
        } else {
            printf("A letra secreta vem depois de '%c' no alfabeto.\n", palpite);
        }
    }
    
    return 0;
}
