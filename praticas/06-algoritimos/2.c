/* ============================================================================
* Autor           : Maxine Klein
* Data de Criação : 10/04/2026
* Descrição       : Pega o string, conta o numero de vogas e gera uma nova string com as letras invertidas
* ============================================================================
*/


#define TAMSTRING 1000

#include <stdio.h>

char vetor[TAMSTRING + 1], novoVetor[TAMSTRING + 1];
int i;
int totalVogais = 0;


int main()
{
    printf("Insira a frase: \n");
    fgets(vetor, TAMSTRING, stdin);

    for(i=0; i <= TAMSTRING; i++)
    {
        //Para o laço

        if(vetor[i] == 0)
        {
            break;
        }

        //Conta vogais

        if(vetor[i] == 'a' || vetor[i] == 'A' || vetor[i] == 'e' || vetor[i] == 'E' || vetor[i] == 'i' || vetor[i] == 'I' || vetor[i] == 'o' || vetor[i] == 'O' || vetor[i] == 'u' || vetor[i] == 'U')
        {
            totalVogais++;
        }

        //Deixa maiusculo

        if(vetor[i] <= 91 && vetor[i] >=  65)
        {
            novoVetor[i] = vetor[i] + 32;
        }

        //Deixa minusculo

        else if(vetor[i] <= 122 && vetor[i] >=  97)
        {
            novoVetor[i] =  vetor[i] - 32;
        }
        else{
            novoVetor[i] = vetor[i];
        }
    }
    printf("Total de vogais: %d \n", totalVogais);
    printf("%s", novoVetor);

    return 0;

}



