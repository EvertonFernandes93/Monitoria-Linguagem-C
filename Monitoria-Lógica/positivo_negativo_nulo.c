#include<stdio.h>
/**
Escreva um algoritmo que pe�a para o usu�rio informar um n�mero,
 e mostre na tela se este n�mero � positivo, negativo ou zero.
**/
main(){
    int n;
    printf("Informe um valor: \n");
    scanf("%i",&n);

    (n>0)? /// IF
        printf("POSITIVO"):
        printf("NEGATIVO");
}
