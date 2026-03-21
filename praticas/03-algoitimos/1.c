/*
Insira dois valores e retorne, ou a media aritimetica, ou a media geometrica.
O usuario deve escolher a media usando um char.

Codigo feito por: Maxine Klein
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float vetorX, vetorY, media;
    char unid;

    printf("Insira o numero do vetores X:\n");
    scanf("%f", &vetorX);

    printf("Insira o numero do vetores Y:\n");
    scanf("%f", &vetorY);

    if(vetorX > 0 && vetorY > 0)  // teste se valores são validos (ambos positivo)
    {
        printf("Insira o caractere que representa o tipo de media que tu quer.\n");
        printf("Insira \"a\" caso queira media aritimetica\n");
        printf("Insira \"g\" caso queria media geometrica\n");
        printf("Por favor, insira o caractere com a letra minuscula\n");
        scanf(" %c", &unid);

        switch(unid)  //escolhe qual calculo de media deve ser feita dependendo do caractere escolhido{
        {
        case 'a':
            media = (vetorX + vetorY)/2;
            printf("A media aritimetica dos vetores %f e %f eh: %f", vetorX, vetorY, media);
            break;
        case 'g':
            media = sqrt(vetorX*vetorY);
            printf("A media geometrica dos vetores %f e %f eh: %f", vetorX, vetorY, media);
            break;
        default:
            printf("Foi inserido um caractere invalido"); //erro de caractere errado
            break;
        }
    }
    else
    {
        printf("Um dos valores inseridos eh negativo"); //erro de valor negativo
    }
    return 0;
}
