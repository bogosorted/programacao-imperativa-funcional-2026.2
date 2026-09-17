#include <stdio.h>

int main() {
    float altura_degrau_cm, altura_total_m;
    
    printf("Altura de cada degrau (em cm): ");
    scanf("%f", &altura_degrau_cm);
    printf("Altura total desejada (em m): ");
    scanf("%f", &altura_total_m);
    
    float altura_total_cm = altura_total_m * 100.0;
    
    int degraus = (int)(altura_total_cm / altura_degrau_cm);
    degraus = (altura_total_cm > (degraus * altura_degrau_cm)) ? degraus + 1 : degraus;
    
    printf("Numero minimo de degraus: %d\n", degraus);
    
    return 0;
}
