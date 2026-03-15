/*
Insira dois vetores de 3 elementos e devolver o produto fetorial entre eles.
*/

#include <stdio.h>
#include <math.h>

int main ()
{

    int x1, y1, z1, x2, y2, z2, x3, y3, z3;

    printf("Insira o x do vetor 1 \n");
    scanf("%d", &x1);

    printf("Insira o y do vetor 1 \n");
    scanf("%d", &y1);

    printf("Insira o z do vetor 1 \n");
    scanf("%d", &z1);

    printf("Insira o x do vetor 2 \n");
    scanf("%d", &x2);

    printf("Insira o y do vetor 2 \n");
    scanf("%d", &y2);

    printf("Insira o z do vetor 2 \n");
    scanf("%d", &z2);

    x3 = (y1*z2 - z1*y2);
    y3 = -1 * (x1*z2 - z1*x2);
    z3 = (x1*y2 - y1*x2);

    printf("O produto vetorial e:\n");
    printf("%d ", x3);
    printf("%d ", y3);
    printf("%d", z3);
    return 0;

}
