/* =========================================================================
 * Autor        : Maxine Klein
 * Data de Criação : 27/03/2026
 * Descrição    : Lê números reais até que o usuário digite 0 e exibe
 *                o somatório dos valores informados.
 * =========================================================================
*/

#include <stdio.h>

int main() {
    double valor, somatorio;
    int contador;

    somatorio = 0.0;
    contador = 1;

    printf("Entre com o %do valor: ", contador);
    scanf("%lf", &valor);

    while (valor != 0) {
        somatorio += valor;
        contador++;
        printf("Entre com o %do valor: ", contador);
        scanf("%lf", &valor);
    }

    printf("Somatorio dos valores informados: %.1lf\n", somatorio);

    return 0;
}
