/*
Insira o raio da esfera e depois calcule o volume e área superficial do maior cubo inscrito na esfera.
*/

#include <stdio.h>
#include <math.h>

int main ()
{

    float raio, volume, area;

    printf("Insira o raio \n");
    scanf("%f", &raio);

    volume = (8 * pow(raio, 3) * sqrt(3))/ 9;

    area = 8 * pow(raio, 2);

    printf("O valor do volume eh %f \n", volume);
    printf("O valor da area eh %f \n", area);

    return 0;

}
