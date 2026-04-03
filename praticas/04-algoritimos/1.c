/*
Faz um somatório das entradas.
Feito por: Maxine Klein
*/

#include <stdio.h>

int main ()
{

    float somatorio, entrada;
    int cont;

    somatorio = 0;
    cont = 1; // Para contar numero de somatórios

    do
    {
        printf("Insira o %d numero para o somatorio:\n", cont);
        scanf("%f", &entrada);

        somatorio += entrada;
        cont++;

    }
    while(entrada!=0); //Repete enquanto o numero entrado for diferente de 0

    printf("Somatorio dos valores informados: %.1f", somatorio);

    return 0;
}
