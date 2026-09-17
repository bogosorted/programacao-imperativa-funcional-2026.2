#include <stdio.h>

int main() {
    int h, m, s, duracao_s;
    
    printf("Horario de inicio (h m s): ");
    scanf("%d %d %d", &h, &m, &s);
    printf("Duracao do experimento (segundos): ");
    scanf("%d", &duracao_s);
    
    int total_segundos_inicio = h * 3600 + m * 60 + s;
    int total_final = total_segundos_inicio + duracao_s;
    
    int h_fim = (total_final / 3600) % 24;
    int m_fim = (total_final % 3600) / 60;
    int s_fim = (total_final % 3600) % 60;
    
    printf("Horario de termino: %02d:%02d:%02d\n", h_fim, m_fim, s_fim);
    
    return 0;
}
