/* =========================================================================
 * Autor        : Maxine Klein
 * Data de Criação : 20/03/2026
 * Descrição    : Lê dois valores reais positivos e calcula a média
 *                aritmética ou geométrica conforme escolha do usuário.
 * =========================================================================
*/

#include <stdio.h>
#include <math.h>

int main() {
    double x, y;
    char c;

    printf("Digite dois valores reais positivos (x e y): ");
    scanf("%lf %lf", &x, &y);

    if (x <= 0 || y <= 0) {
        printf("Erro: ambos os valores devem ser positivos. Encerrando.\n");
        return 0;
    }

    printf("Digite 'a' para media aritmetica ou 'g' para media geometrica: ");
    scanf(" %c", &c);

    switch (c) {
        case 'a':
            printf("Media aritmetica: %.2lf\n", (x + y) / 2.0);
            break;
        case 'g':
            printf("Media geometrica: %.2lf\n", sqrt(x * y));
            break;
        default:
            printf("Caractere invalido. Encerrando.\n");
            break;
    }

    return 0;
}
