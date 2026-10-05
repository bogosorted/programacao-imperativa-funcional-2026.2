#include <stdio.h>

int main() {
    int segundos_total, horas, minutos, segundos_restantes;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos_total);

    horas = segundos_total / 3600;
    minutos = (segundos_total % 3600) / 60;
    segundos_restantes = (segundos_total % 3600) % 60;

    printf("%d segundos correspondem a %d hora(s), %d minuto(s) e %d segundo(s).\n", 
           segundos_total, horas, minutos, segundos_restantes);

    return 0;
}
