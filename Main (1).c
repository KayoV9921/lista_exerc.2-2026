#include <stdio.h>

int main() {
    int segundos, horas, minutos, resto;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    resto = segundos % 3600;

    minutos = resto / 60;
    int segundos_restantes = resto % 60;

    printf("%d hora(s), %d minuto(s) e %d segundo(s)\n", horas, minutos, segundos_restantes);

    return 0;
}