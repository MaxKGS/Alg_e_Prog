/* ============================================================================
* Autor           : Maxine Klein
* Data de Criação : 10/04/2026
* Descrição       : Pega o string, conta o numero de vogas e gera uma nova string com as letras invertidas
* ============================================================================
*/
#include <stdio.h>
#include <ctype.h>

#include <stdio.h>
#include <ctype.h>

#define TAMSTRING 100

int main() {
    char stringOriginal[TAMSTRING];
    char stringInvertida[TAMSTRING];
    int qtdVogais, i;
    char letra;

    printf("Entre a string: ");
    fgets(stringOriginal, TAMSTRING, stdin);

    qtdVogais = 0;
    for (i = 0; stringOriginal[i] != '\0' && stringOriginal[i] != '\n'; i++) {
        letra = tolower(stringOriginal[i]);

        if (letra == 'a' || letra == 'e' || letra == 'i' ||
            letra == 'o' || letra == 'u') {
            qtdVogais++;
        }
        
        if (isupper(stringOriginal[i]))
            stringInvertida[i] = tolower(stringOriginal[i]);
        else if (islower(stringOriginal[i]))
            stringInvertida[i] = toupper(stringOriginal[i]);
        else
            stringInvertida[i] = stringOriginal[i];
    }
    stringInvertida[i] = '\0';

    printf("Quantidade de vogais: %d\n", qtdVogais);
    printf("Impressao da segunda string com inversao de maiusculas e minusculas: %s\n", stringInvertida);

    return 0;
}

