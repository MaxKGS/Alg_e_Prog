/* =========================================================================
 * Autor        : Maxine Klein
 * Data de Criação : 27/03/2026
 * Descrição    : Lê iterativamente um número real e uma operação aritmética,
 *                acumulando o resultado até que o usuário digite '='.
 * =========================================================================
*/

#include <stdio.h>

int main() {
    double acumulador, proximoValor;
    char operacao;
    int contador;

    contador = 1;

    printf("%d) Entre com o valor real: ", contador);
    scanf("%lf", &acumulador);

    printf("   Entre com a operacao: ");
    scanf(" %c", &operacao);

    while (operacao != '=') {
        contador++;

        printf("%d) Entre com o valor real: ", contador);
        scanf("%lf", &proximoValor);

        switch (operacao) {
            case '+':
                acumulador += proximoValor;
                break;
            case '-':
                acumulador -= proximoValor;
                break;
            case '*':
                acumulador *= proximoValor;
                break;
            case '/':
                if (proximoValor == 0) {
                    printf("Erro: divisao por zero. Encerrando.\n");
                    return 0;
                }
                acumulador /= proximoValor;
                break;
            default:
                printf("Operacao invalida. Encerrando.\n");
                return 0;
        }

        printf("   Entre com a operacao: ");
        scanf(" %c", &operacao);
    }

    printf("----------------------------\n");
    printf("Valor final: %.1lf\n", acumulador);

    return 0;
}
