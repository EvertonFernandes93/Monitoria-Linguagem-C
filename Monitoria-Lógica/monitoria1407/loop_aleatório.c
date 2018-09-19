#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/** Programa em C que gera valores aleat�rios de 0 at� 100 at� que o valor 0 seja gerado, ap�s isso mostra na tela quantos valores informados s�o pares e quantos s�o impares **/

main(){
    int pares=0;
    int impares=0;
    int valor,i;

    srand(time(NULL));
    do{
        for(i=0; i<10 ;i++){
            printf("%i ",valor);
            valor = 0 + ( rand() % 100 );

            if(valor%2==0){
                pares++;
            }
            else{
                impares++;
            }
        }
    }while(valor!=0);

    printf("\nFoi gerado %i pares\n",pares);
    printf("Foi gerado %i impares",impares);
}
