#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanho 20

void gerarlista(int lista[tamanho]) {
    for (int i = 0; i < tamanho; i++){
        lista[i] = rand() % 100;
    }
}

void inverterlista(int lista1[tamanho], int lista2[tamanho]) {
    for (int i = 0; i < tamanho; i++) {
        lista2[i] = lista1[19 - i];
    }
}

int main() {
    int lista[tamanho], listainvertida[tamanho];

    srand(time(NULL));

    gerarlista(lista);

    printf("Lista: ");
    for (int i = 0; i < tamanho; i++){
        printf("%d ", lista[i]);
    }

    printf("\n");

    inverterlista(lista, listainvertida);

    printf("Lista invertida: ");

    for (int i = 0; i < tamanho; i++){
        printf("%d ", listainvertida[i]);
    }
}