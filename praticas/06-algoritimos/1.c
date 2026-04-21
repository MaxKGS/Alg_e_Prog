/* ============================================================================
* Autor           : Maxine Klein
* Data de Criação : 10/04/2026
* Descrição       : Le numeros e insere eles em um array. Depois, realiza certas operações com eles.
* ============================================================================
*/

#include <stdio.h>

#define MAX 1000

int main() {
    int vetor[MAX];
    int totalValores, valorLido, i;
    double soma, media;
    double somaMaiores, somaMenores;
    int qtdMaiores, qtdMenores;

    totalValores = 0;
    soma = 0.0;

    printf("Entre os valores inteiros: ");
    scanf("%d", &valorLido);

    while (valorLido != -1) {
        vetor[totalValores] = valorLido;
        soma += valorLido;
        totalValores++;
        scanf("%d", &valorLido);
    }

    media = soma / totalValores;
    printf("Media dos valores informados: %lf\n", media);

    qtdMaiores  = 0;
    somaMaiores = 0.0;
    for (i = 0; i < totalValores; i++) {
        if (vetor[i] > media) {
            qtdMaiores++;
            somaMaiores += vetor[i];
        }
    }
    printf("Quantidade de valores maiores do que a media: %d\n", qtdMaiores);
    printf("Media dos valores maiores do que %lf: %.5lf\n", media, somaMaiores / qtdMaiores);

    qtdMenores  = 0;
    somaMenores = 0.0;
    for (i = 0; i < totalValores; i++) {
        if (vetor[i] < media) {
            qtdMenores++;
            somaMenores += vetor[i];
        }
    }
    printf("Quantidade de valores menores do que a media: %d\n", qtdMenores);
    printf("Media dos valores menores do que %lf: %.5lf\n", media, somaMenores / qtdMenores);

    return 0;
}


