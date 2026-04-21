#include <stdio.h>

int main() {
    int soma = 0;
    for (int i = 0; i <= 6; i++) {
        for (int j = i; j <= 6; j++) {
            if (i + j == 4) {
                soma += (i + j);
            }
        }
    }
    printf("Soma dos valores dos dominós que dão 4: %d\n", soma);
    return 0;
}
