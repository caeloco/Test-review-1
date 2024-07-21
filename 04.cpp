#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define linhas 8
#define colunas 4

void gerarmatirz(int matriz[linhas][colunas])
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matriz[i][j] = rand() % 100;
        }
    }
}

void acharlinha(int matriz[linhas][colunas], int linha, int lista[colunas])
{
    for (int i = linha; i < linha + 1; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            lista[j] = matriz[i][j];
        }
    }
}

int main()
{
    int matriz[linhas][colunas];
    int lista[colunas];
    int linha;

    srand(time(NULL));

    gerarmatirz(matriz);

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Escolha uma linha: ");
    scanf("%d", &linha);

    acharlinha(matriz, linha, lista);

    printf("Linha %d: ", linha);

    for (int i = 0; i < colunas; i++)
    {
        printf("%d ", lista[i]);
    }

    return 0;
}