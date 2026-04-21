/* =========================================================================
 * Autor        : Maxine Klein
 * Data de Criação : 13/03/2026
 * Descrição    : Lê dois vetores de 3 elementos inteiros e calcula
 *                o produto vetorial entre eles.
 *                Originalmente, feito sem vetores e apenas variaveis.
 * =========================================================================
*/

#include <stdio.h>

int main() {
    int a[3], b[3], resultado[3];

    printf("Entre as tres coordenadas do primeiro vetor: ");
    scanf("%d %d %d", &a[0], &a[1], &a[2]);

    printf("Entre as tres coordenadas do segundo vetor: ");
    scanf("%d %d %d", &b[0], &b[1], &b[2]);

    resultado[0] = a[1]*b[2] - a[2]*b[1];
    resultado[1] = a[2]*b[0] - a[0]*b[2];
    resultado[2] = a[0]*b[1] - a[1]*b[0];

    printf("O produto vetorial eh (%d %d %d)\n",
           resultado[0], resultado[1], resultado[2]);

    return 0;
}
