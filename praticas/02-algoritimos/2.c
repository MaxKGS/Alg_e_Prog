/*
Insira a massa, meia vida e tempo e devolva a massa final, usando modelo matematico do decaimento radioativo.
*/

#include <stdio.h>
#include <math.h>

int main ()
{

    float massaFinal, massaInicial, tempo, meiaVida;

    printf("Insira a massa \n");
    scanf("%f", &massaInicial);

    printf("Insira a meia vida \n");
    scanf("%f", &meiaVida);

    printf("Insira o tempo \n");
    scanf("%f", &tempo);

    massaFinal = massaInicial * exp((log(2)/meiaVida) * -1 * tempo);

    printf("A massa final eh %.2f\n", massaFinal);
    return 0;

}
