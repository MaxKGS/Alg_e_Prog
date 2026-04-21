/* ============================================================================
* Autor           : Maxine Klein
* Data de Criação : 03/04/2026
* Descrição       : Gera uma barra de progesso.
* Lê um numero real entre 0.0 e 1.0, qual representa a fração já processada.
* Lê um numero intiro que representa o tamanho da barra.
* ============================================================================
*/

#include <stdio.h>

int main() {
    double progresso;
    int tamanhoBarra, numPreenchido, numFaltante, i;

    do {
        printf("Entre com o progresso atual (x) e tamanho (N) da barra: ");
        scanf("%lf %d", &progresso, &tamanhoBarra);

        if (progresso < 0.0 || progresso > 1.0)
            printf("Erro: x deve estar entre 0.0 e 1.0.\n");
        if (tamanhoBarra < 5 || tamanhoBarra > 50)
            printf("Erro: N deve estar entre 5 e 50.\n");

    } while (progresso < 0.0 || progresso > 1.0 || tamanhoBarra < 5 || tamanhoBarra > 50);

    numPreenchido = (int)(progresso * tamanhoBarra);
    numFaltante   = tamanhoBarra - numPreenchido;

    printf("<");

    for (i = 0; i < numPreenchido; i++) {
        printf("#");
    }

    for (i = 0; i < numFaltante; i++) {
        printf("-");
    }

    printf(">\n");

    return 0;
}
