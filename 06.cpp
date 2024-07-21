#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanho 7

void limpar_buffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

void gerarmatriz(int matriz[tamanho][tamanho])
{
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            matriz[i][j] = rand() % 100;
        }
    }
}

void somalinha4(int matriz[tamanho][tamanho], int *total)
{
    *total = 0;
        for (int j = 0; j < tamanho; j++)
        {
            *total += matriz[4][j];
        }
}

void somacoluna2(int matriz[tamanho][tamanho], int *total)
{
        for (int i = 0; i < tamanho; i++)
        {
            *total += matriz[i][2];
        }
}

void somadiagonalP(int matriz[tamanho][tamanho], int *total)
{
    int aux = 0;
    *total = 0;
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            if (j == aux)
            {
                *total += matriz[i][j];
            }
        }
        aux++;
    }
}

void somadiagonalS(int matriz[tamanho][tamanho], int *total)
{
    int aux = tamanho - 1;
    *total = 0;
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            if (j == aux)
            {
                *total += matriz[i][j];
            }
        }
        aux--;
    }
}

void somartudo(int matriz[tamanho][tamanho], int *total)
{
    *total = 0;
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            *total += matriz[i][j];
        }
    }
}

int main()
{
    int matriz[tamanho][tamanho];
    int total;
    char opcao;

    srand(time(NULL));

    gerarmatriz(matriz);

        for (int i = 0; i < tamanho; i++)
        {
            for (int j = 0; j < tamanho; j++)
            {
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }

    do
    {
        printf("Escolha uma soma: \n");
        printf("a) da linha 4 de M\n");
        printf("b) da coluna 2 de M\n");
        printf("c) da diagonal principal\n");
        printf("d) da diagonal secundária\n");
        printf("e) de todos os elementos da matriz\n");
        printf("f) sair\n");
        scanf(" %c", &opcao);
        limpar_buffer();

        switch (opcao)
        {
        case 'a':
            somalinha4(matriz, &total);
            break;
        case 'b':
            somacoluna2(matriz, &total);
            break;
        case 'c':
            somadiagonalP(matriz, &total);
            break;
        case 'd':
            somadiagonalS(matriz, &total);
            break;
        case 'e':
            somartudo(matriz, &total);
            break;
        case 'f': printf("Saindo");
        break;
        default:
            printf("Essa opcao nao existe");
            break;
        }

        printf("Soma da opcao %c: %d\n", opcao, total);
        total = 0;
    } while (opcao != 'f');

    return 0;
}