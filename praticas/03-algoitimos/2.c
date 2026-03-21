/*
Insira o valor do produto e o codigo de desconto. O codigo tem que ser um char.
Imprima na tela o valor final do produto.
Caso o preço apos o desconto seja maior que 500, oferecer parcelar.
Depois, imprimir o preço parcelado.

Codigo feito por: Maxine Klein
*/

#include <stdio.h>
#include <math.h>

int main()
{
    char codCor;
    float valorProd, desconto, valorParc;
    int quantParcelas;

    printf("Insira o valor do produto:\n");
    scanf("%f", &valorProd);

    printf("Insira o codigo de desconto, representado por apenas seu primeiro caractere:\n");
    scanf(" %c", &codCor);

    switch(codCor)  //escolhe qual desconto deve ser aplicado em cima do caractere escolhido
    {
    case 'a':
    case 'A':
        printf("O codigo inserido possui 10 porcento de desconto\n");
        valorProd -= valorProd * 0.10;
        break;
    case 'v':
    case 'V':
        printf("O codigo inserido possui 20 porcento de desconto\n");
        valorProd -= valorProd * 0.20;
        break;
    case 'b':
    case 'B':
        printf("O codigo inserido possui 30 porcento de desconto\n");
        valorProd -= valorProd * 0.30;
        break;
    case 'p':
    case 'P':
        printf("O codigo inserido possui 40 porcento de desconto\n");
        valorProd -= valorProd * 0.40;
        break;
    default:
        printf("O codigo inserido nao possui desconto\n");
        break;
    }

    printf("O valor final do produto eh: %0.2f reais\n", valorProd);
    printf("\n");

    if(valorProd >500.00)  //testa se valor final esta apto para descontos (precisa estar acima de 500 reais)
    {
        char parcelas;
        printf("O seu produto custa mais de 500.00, entao voce pode parcelar!\n");
        printf("Deseja parcelar? (S/N)\n");
        scanf(" %c", &parcelas);

        if(parcelas == 's' || parcelas == 'S')  //testa se o usuario quer parcelar o produto
        {
            printf("Em quantas vezes quer parcelar?\n");
            scanf("%d", &quantParcelas);

            if(parcelas > 0)
            {
                valorParc = valorProd / (float)quantParcelas;
                printf("O valor de cada parcela eh: %0.2f reais", valorParc);
            }
            else
            {
                printf("Numero de parcelas inseridas nao podem ser menores ou igual a zero");
            }
        }
    }
    return 0;
}
