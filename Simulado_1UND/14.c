#include <stdio.h>

int main() {
    int senha_secreta = 2026;
    int senha_digitada;
    int tentativas;

    for (tentativas = 1; tentativas <= 3; tentativas++) {
        printf("Digite a senha (tentativa %d de 3): ", tentativas);
        scanf("%d", &senha_digitada);

        if (senha_digitada == senha_secreta) {
            printf("Acesso Concedido!\n");
            return 0;
        } else {
            printf("Senha incorreta!\n");
        }
    }

    printf("Conta Bloqueada por Seguranca!\n");

    return 0;
}
