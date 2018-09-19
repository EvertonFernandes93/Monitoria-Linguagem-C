#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

/** Considerando um circuito el�trico simples, conforme mostrado na figura abaixo,
escreva um programa que pergunte para o usu�rio qual das tr�s grandezas ele pretende calcular.
 Baseado na escolha feita, pe�a para ele informar as outras duas grandezas.
 Calcule e mostre na tela o resultado da opera��o. */

 main(){

    setlocale(LC_ALL,"portuguese");

    char grandeza;
    int resistencia;
    int tensao;
    int corrente;
    int resultado_tensao;
    int resultado_corrente;
    float resultado_resistencia;

    printf("Digite o valor da resistencia: \n");
    scanf("%i",&resistencia);
    printf("Digite o valor da tens�o: \n");
    scanf("%i",&tensao);
    printf("Digite o valor da corrente: \n");
    scanf("%i",&corrente);

    printf("Qual das 3 grandezas el�tricas voce pretende calcular? Digite: \n R-Resistencia \n V-Tens�o \n I-Corrente \n ");
    scanf(" %c",&grandeza);

        switch(grandeza){
            case 'V':
            resultado_tensao=(resistencia*corrente);
            printf("Tens�o=Resistencia*Corrente \n tens�o= %i*%i \n O resultado da tens�o �: %i volts"
                   ,resistencia,corrente,resultado_tensao);
            break;

            case 'R':
            resultado_resistencia=(tensao/corrente);
            printf("Resist�ncia=Tens�o/Corrente \n Resist�ncia= %i/%i \n Resist�ncia � %.2f ohms \n"
                    ,tensao,corrente,resultado_resistencia);
            break;

            case 'I':
            resultado_corrente=(tensao/resistencia);
            printf("Corrente=Tens�o/Resist�ncia \n Corrente= %i / %i \n Corrente el�trica � %i �mperes \n"
                   ,tensao,resistencia,resultado_corrente);
            break;

            default:
                printf("Op��o inv�lida!");
        }
 }
