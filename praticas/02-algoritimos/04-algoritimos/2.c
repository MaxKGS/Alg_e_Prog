/*


*/

#include <stdio.h>

int main ()
{

    float calculo, entrada;
    char oper;
    int cont;

    calculo = 0;
    cont = 1; //Para contar o numero de vezes que um numero foi inserido.

    do
    {
        printf("Insira o numero valor real:\n");
        scanf("%f", &entrada);

        if(cont == 1) //Para armazenar o primeiro numero inserido.
        {
            calculo = entrada;
            cont++;
        }
        else
        {
            switch(oper)
            {

            case '+':
                calculo += entrada;
                break;

            case '-':
                calculo -= entrada;
                break;

            case '*':
                calculo *= entrada;
                break;

            case '/':
                if(entrada == 0) //impede divisao por zero
                {
                    printf("Nao pode haver divisao por 0 \n");
                    return 1;
                    }
                calculo /= entrada;
                break;
            }
        }

        printf("Insira o operador da conta:\n");
        scanf(" %c", &oper);
    }
    while(oper != '=');

    printf("Resultado do calculo: %.1f", calculo);

    return 0;
}
