/* ============================================================================
* Autor           : Maxine Klein
* Data de Criação : 03/04/2026
* Descrição       : Lê dois valores inteiros e soma os valores primos entre eles, inclusive os próprios valores.
* Pode ser tanto de forma crescente quanto descrescente.
* ============================================================================
*/

#include <stdio.h>

#define TRUE  1
#define FALSE 0

int main() {
    int a, b, inicio, fim, somaPrimos, ehPrimo, i, j;

    printf("Entre com dois valores: ");
    scanf("%d %d", &a, &b);

    if (a < b) {
        inicio = a;
        fim = b;
    } else {
        inicio = b;
        fim = a;
    }

    somaPrimos = 0;
    for (i = inicio; i <= fim; i++) {
        if (i < 2) continue;

        ehPrimo = TRUE;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                ehPrimo = FALSE;
                break;
            }
        }

        if (ehPrimo == TRUE) {
            somaPrimos += i;
        }
    }

    printf("Soma dos valores primos entre estes dois numeros: %d\n", somaPrimos);

    return 0;
}
