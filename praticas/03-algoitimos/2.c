/* =========================================================================
 * Autor        : Maxine Klein
 * Data de Criação : 20/03/2026
 * Descrição    : Calcula o valor final de um produto com desconto baseado
 *                na cor da etiqueta e oferece parcelamento sem juros.
 * =========================================================================
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    double valorProduto, desconto, valorFinal;
    char corEtiqueta, opcaoParcela;
    int numParcelas;

    printf("Entre o valor do produto: ");
    scanf("%lf", &valorProduto);

    printf("Entre o codigo de cor da etiqueta: ");
    scanf(" %c", &corEtiqueta);

    corEtiqueta = toupper(corEtiqueta);

    switch (corEtiqueta) {
        case 'A':
            desconto = 0.10;
            break;
        case 'V':
            desconto = 0.20;
            break;
        case 'B':
            desconto = 0.30;
            break;
        case 'P':
            desconto = 0.40;
            break;
        default:
            desconto = 0.0;
            break;
    }

    valorFinal = valorProduto * (1.0 - desconto);

    printf("O valor final do produto eh de %.2lf reais.\n", valorFinal);

    if (valorFinal > 500.00) {
        printf("Voce deseja parcelar esse valor (S/N)? ");
        scanf(" %c", &opcaoParcela);
        opcaoParcela = toupper(opcaoParcela);

        if (opcaoParcela == 'S') {
            printf("Em quantas parcelas? ");
            scanf("%d", &numParcelas);
            printf("O valor de cada parcela eh de %.2lf reais\n", valorFinal / numParcelas);
        }
    }

    return 0;
}

