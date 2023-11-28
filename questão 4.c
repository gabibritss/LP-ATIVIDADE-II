#include <stdio.h>
#include <stdlib.h>


int main()
{

    int i;
    int numeros[5];
    int par = 0;
    int impar = 0;
    int somaImpar = 0;
    int positivos = 0;
    int negativos = 0;
    float mediaPares = 0;
    int somaPares = 0;
    float mediaTodos = 0;
    int somaTodos = 0;
    int maiorNumero = 0;
    int menorNumero = 999;
    int quantidade = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);

        quantidade++;
        somaTodos += numeros[i];

        if (numeros[i] % 2 == 0)
        {
            par++;
            somaPares += numeros[i];
        }
        else
        {
            impar++;
            somaImpar += numeros[i];
        }

        if (numeros[i] > 0)
        {
            positivos++;
        }
        else
        {
            negativos++;
        }

        maiorNumero = numeros[i] > maiorNumero ? numeros[i] : maiorNumero;
        menorNumero = numeros[i] < menorNumero ? numeros[i] : menorNumero;
    }

    if (par > 0)
    {
        mediaPares = somaPares / (float) par;
    }

    mediaTodos = somaTodos / (float) i;

    for (i = 0; i < 5; i++)
    {
        printf("%dº número: %d\n", i + 1, numeros[i]);
    }

    printf("\nQuantidade de números ímpares: %d\n", impar);
    printf("Quantidade de números negativos: %d\n", negativos);
    printf("Maior número: %d\n", maiorNumero);
    printf("Menor número: %d\n", menorNumero); 
    printf("Média de números pares: %.1f\n", mediaPares);
    printf("Média dos números inseridos: %.1f\n", mediaTodos);

    return 0;
}