/* ============================================================================
* Autor           : Maxine Klein
* Data de Criação : 03/04/2026
* Descrição       : Gera uma barra de progesso.
* Lê um numero real entre 0.0 e 1.0, qual representa a fração já processada.
* Lê um numero intiro que representa o tamanho da barra.
* ============================================================================
*/


#include <stdio.h>

int main(){

    int tamBarra; float razBarra; // variaveis de entrada
    int progBarra; // variavel do calculo do progresso da barra
    int i; // incrementador

    progBarra = 0;

    printf("Digite a razao: \n");
    scanf("%f", &razBarra);

    if(razBarra < 0 || razBarra > 1){
        printf("a razao deve ser entre 0.0 e 1.0");
        return 0;
    }

    printf("Digite o tamanho da barra: \n");
    scanf("%d", &tamBarra);

    if(tamBarra < 5 || tamBarra > 50){
        printf("o tamanho da barra tem que ser entre 5 e 50");
        return 0;
    }

    //calculo do progresso da barra (caso de numero quebrado, capar e somar um)

    progBarra = tamBarra * razBarra;

    if(progBarra % 1 != 0) {
        progBarra = (int) (progBarra++);
    }

    //impressão da linha

    printf("<");

    for(i = 0; i < progBarra; i++){
        printf("#");
    }
    for(i = progBarra; i < tamBarra; i++){
        printf("-");
    }

    printf(">");

    return 0;
}
