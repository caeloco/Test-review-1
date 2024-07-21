#include <stdio.h>
#include <string.h>

#define tamanho 8

void inverterpalavra(int palavra[tamanho], int palavrainvertida[tamanho]) {
    for (int i = 0; i < tamanho; i++) {
        palavrainvertida[i] = palavra[tamanho - 1 - i];
    }
}

int main() {
    char palavra[tamanho + 1], palavraR[tamanho + 1];

    for (int i = 0; i < tamanho; i++) {
        scanf("%8s", palavra);
    }

    for (int i = 0; i < tamanho; i++) {
        palavraR[i] = palavra[tamanho - 1 - i];
    }
    palavraR[tamanho] = '\0';

    printf("palavra: %s\n", palavra);

    printf("Palavra: %s", palavraR);

    return 0;
}