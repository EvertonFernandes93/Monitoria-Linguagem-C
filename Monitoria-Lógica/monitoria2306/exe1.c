#include<stdio.h>
/** Considerando um circuito el�trico simples com uma tens�o de 220 volts,
 pe�a para o usu�rio informar o valor de de uma grandeza el�trica a (corrente),
 ap�s isso mostre na tela o resultado da resist�ncia el�trica usando a f�rmula:

resist�ncia=tens�o/corrente.  **/

main(){
    float tensao = 220;
    float resistencia;
    float corrente;

    printf("Informe o valor da corrente eletrica: "); /// PE�O O VALOR PARA O USU�RIO
    scanf("%f",&corrente); /// GUARDO O VALOR INFORMADO

    resistencia = tensao/corrente; /// Fa�o a divis�o de 220 pelo valor informado da corrente e descubro o valor da resistencia

    printf("O resultado da resistencia eletrica e: %.2f \n",resistencia); /// mostro na tela o valor da resistencia
}
