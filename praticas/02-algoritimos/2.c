/* =========================================================================
 * Autor        : Maxine Klein
 * Data de Criação : 13/03/2026
 * Descrição    : Calcula o decaimento de um material radiativo usando o
 *                modelo da descrição do problema.
 * =========================================================================
*/

#include <stdio.h>
#include <math.h>

int main() {
    double massaIni, meiaVida, tempo, lambda, massaTotal;

    printf("Massa inicial (m0): ");
    scanf("%lf", &massaIni);

    printf("Meia-vida (t_1/2): ");
    scanf("%lf", &meiaVida);

    printf("Tempo (t): ");
    scanf("%lf", &tempo);

    lambda = log(2.0) / meiaVida;

    massaTotal = massaIni * exp(-lambda * tempo);

    printf("\nMassa Total = %.2lf\n", massaTotal);

    return 0;
}

