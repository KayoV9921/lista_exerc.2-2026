#include <stdio.h>

int main() {
    float tamanho, velocidade, tempo;
    printf("Digite o tamanho do arquivo (MB): ");
    scanf("%f", &tamanho);
    printf("Digite a velocidade (Mbps): ");
    scanf("%f", &velocidade);

    tempo = tamanho / (velocidade / 8);
    tempo = tempo / 60;

    printf("Tempo aproximado de download: %.2f minutos\n", tempo);

    return 0;
}
