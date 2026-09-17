#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    // decrementa o proprio numero para encontrar o antecessor
    num--;
    printf("Antecessor: %d\n", num);
    
    // num esta no valor de antecessor, somamos duas vezes para virar sucessor
    num++;
    num++;
    printf("Sucessor: %d\n", num);
    
    return 0;
}
