/* ============================================================================
* Autor           : Maxine Klein
* Data de Criação : 10/04/2026
* Descrição       : Le numeros e insere eles em um array. Depois, realiza certas operações com eles.
* ============================================================================
*/


#define MAX 1000

#include <stdio.h>

int vetor[MAX];
float media, maiores, menores;
int x = 0;
int i;
int totalNumeros = 0;
int totalMaiores = 0;
int totalMenores = 0;

int main()
{
    while (vetor[x-1] != -1)
    {
        printf("Insira um numero: \n"); //Insere numeros no vetor
        scanf("%d", &vetor[x]);
        if(vetor[x] != -1)
        {
            totalNumeros++;
        }
        if(vetor[x] < -1)
        {
            printf("Não pode se inserir numero negativo \n");
            return 1;
        }
        x++;
    }

    //Media geral do vetor

    for (i=0; i<totalNumeros; i++)
    {
        media += vetor[i];
    }
    media /= totalNumeros;
    printf("Média eh: %f \n", media);

    //Media de maiores do vetor

    for (i=0; i<totalNumeros; i++)
    {
        if(vetor[i] > media)
        {
            totalMaiores++;
            maiores += vetor[i];
        }
    }
    printf("O total de numeros maiores que a media eh: %d \n", totalMaiores);
    maiores /= totalMaiores;
    printf("A media de numeros maiores eh: %f \n", maiores);

    //Media dos menos do vetor

    for (i=0; i<totalNumeros; i++)
    {
        if(vetor[i] < media)
        {
            totalMenores++;
            menores += vetor[i];
        }
    }
    printf("O total de numeros menores que a media eh: %d \n", totalMenores);
    menores /= totalMenores;
    printf("A media de numeros menores eh: %f \n", menores);

    return 0;
}



