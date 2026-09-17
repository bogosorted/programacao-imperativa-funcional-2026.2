#include <stdio.h>

int main() {
    char upper, lower;
    printf("Digite uma letra maiuscula: ");
    scanf(" %c", &upper);
    
    lower = upper + 32;
    
    printf("Letra minuscula: %c\n", lower);
    
    return 0;
}
