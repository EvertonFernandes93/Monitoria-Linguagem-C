/*
Escreva um algoritmo que pe�a para o usu�rio informar dois n�meros. Ent�o mostre
na tela o resultado da adi��o, subtra��o, multiplica��o e divis�o do primeiro pelo
segundo n�mero.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1;   // variavel para o primeiro numero que o usuario ir� digitar
    float num2;   // variavel para o segundo numero que o usuario ir� digitar
    int adicao;          // variaveis dos possives resultados
    int subtracao;
    int multiplicacao;
    float divisao;       // a divis�o pode retornar um numero com virgula, logo usamos um float

    printf("Digite um numero!\n"); // mensagem aparece na tela
    scanf("%f",&num1);                // aguarda o usuario digitar o numero

    printf("Digite outro numero!\n"); // mensagem aparece na tela
    scanf("%f",&num2);                // aguarda o usuario digitar o numero

    adicao=num1+num2;
    subtracao=num1-num2;
    multiplicacao=num1*num2;
    divisao=num1/num2;


    printf("A ADICAO DOS DOIS NUMEROS EH: %i\n",adicao);                // mensagem aparece na tela
    printf("A SUBTRACAO DOS DOIS NUMEROS EH: %i\n",subtracao);          // mensagem aparece na tela
    printf("A MULTIPLICACAO DOS DOIS NUMEROS EH: %i\n",multiplicacao); // mensagem aparece na tela
    printf("A DIVISAO DOS DOIS NUMEROS EH: %f\n",divisao);              // mensagem aparece na tela




    return 0;
}
