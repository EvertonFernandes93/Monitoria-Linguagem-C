#include<stdio.h>

/** Escreva um programa que pe�a para o usu�rio informar um n�mero N, ent�o pe�a para ele informar outros N n�meros.
 Mostre na tela qual o maior �mpar digitado, bem como o menor par. **/

 main(){
    int quantidade;
    int numero;
    int i;
    int maior_impar,menor_par;
    printf("Informe a quantidade de valores: \n");
    scanf("%i",&quantidade);

    for(i=0; i<quantidade; i++){
        printf("Informe o valor %i: \n",i);
        scanf("%i",&numero);

        if(numero%2!=0 && i==1){
            maior_impar=numero;
        }
        if(numero%2==0 && i==0){
            menor_par=numero;
        }
    }
    printf("Maior impar foi: %i \n",maior_impar);
    printf("Menor par foi: %i\n",menor_par);
}
