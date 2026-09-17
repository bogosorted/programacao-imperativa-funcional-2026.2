#include <stdio.h>

int main() {
    char c;
    printf("Digite um caractere: ");
    scanf(" %c", &c);
    
    // O valor na memoria ja e um inteiro. Ao formata-lo com %d, a funcao
    // printf imprime o numero correspondente daquele byte que o representa na Tabela ASCII.
    printf("Codigo ASCII do caractere '%c': %d\n", c, c);
    
    return 0;
}
