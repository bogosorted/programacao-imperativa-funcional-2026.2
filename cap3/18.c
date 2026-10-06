#include <stdio.h>

int main() {
    int num;
    int inverso = 0;
    int digito;
    
    printf("Digite um numero positivo: ");
    scanf("%d", &num);
    
    while (num > 0) {
        digito = num % 10;
        inverso = inverso * 10 + digito;
        num /= 10;
    }
    
    printf("%d\n", inverso);
    return 0;
}
