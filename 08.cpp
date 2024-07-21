#include <stdio.h>
#include <stdlib.h>

#define tamanho 7

float calcularmedia(float notas[tamanho]) {
    float aux = 0;
    for (int i = 0; i < tamanho; i++) {
        aux += notas[i];
    }
    return aux / 7;
}

int main() {
    float notas[tamanho];
    float media;

    for (int i = 0; i < tamanho; i++) {
        scanf("%f", &notas[i]);
        if (notas[i] > 10 || notas[i] < 0) {
            printf("Essa eh uma nota invalida \nDigite novamente: ");
            i--;
        }
    }

    media = calcularmedia(notas);

    if (media >= 6) {
        printf("Voce esta aprovado: %.2f", media);
    }
    else if (media < 6 && media > 3) {
        printf("Voce esta em recuperacao: %.2f", media);
    }
    else {
        printf("Voce esta reprovado: %.2f", media);
    }

    return 0;
}