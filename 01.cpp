#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanho 10

void gerarmatriz(int matriz[tamanho][tamanho]) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            matriz[i][j] = rand() % 100;
        }
    }
}

void imprimirmatriz(int matriz[tamanho][tamanho]) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }   
}

void diagonais(int matriz[tamanho][tamanho], int diagonal1[tamanho], int diagonal2[tamanho]) {
    int aux1 = 0;
    int aux2 = tamanho - 1;
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (aux1 == j) {
                diagonal1[i] = matriz[i][j];
            }
            if (aux2 == j) {
                diagonal2[i] = matriz[i][j];
            }
        }
        aux1++;
        aux2--;
    }
}

void diagonalmaior(int diagonal[tamanho]) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", diagonal[i]);
    }
}

void diagonalmenor(int diagonal[tamanho]) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", diagonal[i]);
    }
}

int main() {
    int matriz[tamanho][tamanho];
    int diagonal1[tamanho], diagonal2[tamanho];

    srand(time(NULL));

    gerarmatriz(matriz);
    imprimirmatriz(matriz);
    diagonais(matriz, diagonal1, diagonal2);

    printf("Diagonal maior: ");
    diagonalmaior(diagonal1);

    printf("\n");

    printf("Diagonal menor: ");
    diagonalmenor(diagonal2);



    return 0;
}