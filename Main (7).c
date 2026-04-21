#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero, tentativa, tentativas = 0;
    srand(time(NULL));
    numero = rand() % 101;

    do {
        printf("Digite um numero entre 0 e 100: ");
        scanf("%d", &tentativa);
        tentativas++;

        if (tentativa < numero) {
            printf("Maior!\n");
        } else if (tentativa > numero) {
            printf("Menor!\n");
        } else {
            printf("Acertou em %d tentativas!\n", tentativas);
        }
    } while (tentativa != numero);

    return 0;
}
