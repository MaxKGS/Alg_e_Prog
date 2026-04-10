/* ============================================================================
* Autor           : Maxine Klein
* Data de Criação : 03/04/2026
* Descrição       : Lê dois valores inteiros e soma os valores primos entre eles, inclusive os próprios valores.
* Pode ser tanto de forma crescente quanto descrescente.
* ============================================================================
*/

#define TRUE 1
#define FALSE 0

#include <stdio.h>
#include <math.h>

int main(){

    int val1, val2; // variaveis de entrada
    int inicio, fim; // variaveis para determinar fim e inicio do laço
    int soma, quad, ehPrimo; // variaveis de calculo e booleana
    int i, n; // incrementadores

    soma = quad = ehPrimo = 0;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &val1);

    printf("Digite o segundo numero: \n");
    scanf("%d", &val2);

    //filtro para declarar se é crescente ou descrescente

    if(val1<val2){
        inicio = val1;
        fim = val2;
    }
    else if (val2<val1){
        inicio = val2;
        fim = val1;
    }
    else{
        printf("nao tem como testar se ambos os numeros sao iguais");
        return 1;
    }

    //laço para percorrer entre os dois valores inseridos

    for(i=inicio; i<=fim; i++){
        quad = (int) sqrt(i);
        ehPrimo = TRUE;

        //testa se é primo

        for(n = 2; n <= quad; n++){
            if(i % n == 0){
                ehPrimo = FALSE;
            }
        }

        //soma se for primo

        if(ehPrimo){
            soma += i;
        }
    }

    printf("o total eh %d", soma);
    return 0;
}

