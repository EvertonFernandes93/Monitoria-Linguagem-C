
#include<stdio.h>

/** Teste de mesa com atribui��o, comandos de entrada e sa�da e estrutura de sele��o(IF ELSE) **/

/// OBS: TENTE FAZER O TESTE DE MESA ANTES DE COMPILAR O PROGRAMA, COMPILE SOMENTE QUANDO VOC� ENCONTRAR A RESPOSTA
main(){
    int n1=10;
    int n2=3;
    int n3=7;
    int n4;

    scanf("%i",&n4);
    n1=n2;
    n2=n3;
    n3+=n2;
    n4+=n1+n2+n3;

    if(n4%2==0){
        printf("O total da soma e par \n");
    }
    else{
        printf("O total da soma e impar \n");
    }
    printf("N4: %i\n",n4);
}
