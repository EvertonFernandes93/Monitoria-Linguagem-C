/*
Pedir para o usu�rio informar sua renda e o n�mero de pessoas na fam�lia. Mostrar
na tela a renda per capita (renda m�dia por pessoa)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float renda;                            // variavel para q renda familiar que o usuario ir� digitar
    int pessoas;                            // variavel para a qtd de pessoas da familia que o usuario ir� digitar
    float renda_percapita;                  // variavel para a renda per capita a ser calculada

    printf("Digite a renda mensal!\n"); // mensagem aparece na tela
    scanf("%f",&renda);                // aguarda o usuario digitar o numero

    printf("Digite numero de pessoas da casa!\n"); // mensagem aparece na tela
    scanf("%i",&pessoas);                // aguarda o usuario digitar o numero

    renda_percapita=renda/pessoas;

    printf("O TOTAL DA RENDA PER CAPITA EH: R$ %.2f\n",renda_percapita);          // mensagem aparece na tela

    return 0;
}
