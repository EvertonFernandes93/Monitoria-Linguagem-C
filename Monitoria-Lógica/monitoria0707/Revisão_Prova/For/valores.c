#include<conio.h>
#include<stdio.h>

/** Escreva um programa que pe�a para o usu�rio informar 6 valores. Ent�o mostre na tela quantos
destes valores s�o iguais que o valor anterior digitado **/

main(){

    int valor;
    int vanterior;
    int i;
    int cont=0;

    for(i=1 ; i<=6 ; i++){
    printf("Informe um valor: \n");
    scanf("%i",&valor);
        if(valor==vanterior){
            cont++;
        }
        else{
            vanterior=valor;
        }
    }
    printf("%i valores estao repetindo\n",cont);
}
