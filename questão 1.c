#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    

    int i;
    char nomes[5][500];
    int idade[5];
    float peso[5];
    float altura[5];
    float alto = 0;
    float baixo = 999;
    int velho = 0;
    int novo = 999;
    float acimapeso = 0;
    float magro = 999;
    int pAlta = 0;
    int pBaixa = 0;
    int pVelha = 0;
    int pNova = 0;
    int pAcimapeso = 0;
    int pMagra = 0;

    for (i = 0; i < 5; i++)
    {
        printf("\nDigite seu nome:");
        gets(nomes[i]);

        printf("Digite sua idade: ");
        scanf("%d", &idade[i]);

        printf("Digite seu peso: ");
        scanf("%f", &peso[i]);

        printf("Digite sua altura: ");
        scanf("%f", &altura[i]);

        fflush(stdin);

        if (idade[i] > velho)
        {
            velho = idade[i];
            pVelha = i;
        }
        else if (idade[i] < novo)
        {
            novo = idade[i];
            pNova = i;
        }

        if (peso[i] > acimapeso)
        {
            acimapeso = peso[i];
            pAcimapeso = i;
        }
        else if (peso[i] < magro)
        {
            magro = peso[i];
            pMagra = i;
        }

        if (altura[i] > alto)
        {
            alto = altura[i];
            pAlta = i;
        }
       else  if (altura[i] < baixo)
        {
            baixo = altura[i];
            pBaixa = i;
        }
    }

    printf("\n Resultados:\n");

    printf("Pessoa mais alta: %s, Altura: %.2f\n", nomes[pAlta], alto);
    printf("Pessoa mais baixa: %s, Altura: %.2f\n", nomes[pBaixa], baixo);
    printf("Pessoa mais pesada: %s, Peso: %.2f\n", nomes[pAcimapeso], acimapeso);
    printf("Pessoa mais leve: %s, Peso: %.2f\n", nomes[pMagra], magro);
    printf("Pessoa mais velha: %s, Idade: %d\n", nomes[pVelha], velho);
    printf("Pessoa mais nova: %s, Idade: %d\n", nomes[pNova], novo);

    return 0;
}