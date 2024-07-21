#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define linhas 9
#define colunas 7

void lista(int valores[linhas][colunas])
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            valores[i][j] = rand() % 100;
        }
    }
}

int maior_par(int valores[linhas][colunas])
{
    int maior = 0;
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (maior < valores[i][j] && valores[i][j] % 2 == 0)
            {
                maior = valores[i][j];
            }
        }
    }
    return maior;
}

int menor_par(int valores[linhas][colunas])
{
    int menor = 1000;
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (menor > valores[i][j] && valores[i][j] % 2 == 0)
            {
                menor = valores[i][j];
            }
        }
    }
    return menor;
}

int maior_impar(int valores[linhas][colunas])
{
    int maior = 0;
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (maior < valores[i][j] && valores[i][j] % 2 != 0)
            {
                maior = valores[i][j];
            }
        }
    }
    return maior;
}

int menor_impar(int valores[linhas][colunas])
{
    int menor = 1000;
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (menor > valores[i][j] && valores[i][j] % 2 != 0)
            {
                menor = valores[i][j];
            }
        }
    }
    return menor;
}

int main()
{
    int numeros[linhas][colunas];
    int opcao;

    srand(time(NULL));

    lista(numeros);

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%2d ", numeros[i][j]);
        }
        printf("\n");
    }

        do
        {
            printf("\n1 - encontrar maior valor par \n3 - encontrar menor valor par  \n2 - encontrar maior valor ímpar \n4 - encontrar menor valor ímpar \n0 - sair\n");
            scanf("%d", &opcao);

            switch (opcao)
            {
            case 1:
                printf("Maior valor par: %d\n", maior_par(numeros));
                break;
            case 2:
                printf("Menor valor par: %d\n", menor_par(numeros));
                break;
            case 3:
                printf("Maior valor impar: %d\n", maior_impar(numeros));
                break;
            case 4:
                printf("Menor valor impar: %d\n", menor_impar(numeros));
                break;
            case 0:
                printf("Saindo");
                break;
            default:
                printf("Essa opcao nao existe\n");
                break;
            }
        } while (opcao != 0);

        return 0;
    }