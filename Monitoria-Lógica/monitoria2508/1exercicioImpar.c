#include<stdio.h>

/** Fa�a um programa que pe�a para o usu�rio digitar um n�mero, ao fim mostre na tela se este n�mero � impar. **/

main(){
    int numero;

    printf("Digite um numero: "); /// pede para o usu�rio informar um numero
    scanf("%i",&numero); /// guarda este numero

    if(numero%2!=0){ /// pega o numero informado e diz se ele � impar
        printf("O valor informado e impar! \n");
    }
    else{ /// SEN�O FOR IMPAR, ENT�O ELE � PAR
        printf("O valor informado e par! \n");
    }
}
