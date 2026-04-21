/* =========================================================================
 * Autor        : Maxine Klein
 * Data de Criação : 21/04/2026
 * Descrição    : Lê o raio de uma esfera e calcula o volume e a área
 *                superficial do maior cubo inscrito nela.
 * =========================================================================
*/

#include <stdio.h>
#include <math.h>

int main() {
    double raio, lado, volume, area;

    printf("Entre o raio da esfera: ");
    scanf("%lf", &raio);

    lado = (2.0 * raio) / sqrt(3.0);

    volume = lado * lado * lado;
    area   = 6.0 * lado * lado;

    printf("Volume do cubo inscrito: %lf\n", volume);
    printf("Area superficial do cubo inscrito: %lf\n", area);

    return 0;
}
