#include<stdio.h>
#include<stdlib.h>
/**
Escreva um programa que pe�a para o usu�rio digitar seu primeiro nome (caracter por caracter) at� que o ENTER (13) seja precionado.
Ent�o mostre na tela se o nome � v�lido. Considere nome v�lido caso o primeiro caracter seja uma letra maiuscula, e todos os outros forem letras minusculas.
**/
main(){
    char vet[10];
    char letra;
    int i=0;

    printf("Informe uma palavra: \n");
    do{
        letra=getche();
        vet[i] = letra;
        i++;
    }while(letra!=13);

    for(i=0; i<10; i++){
        if(vet[i]>='A' && vet[i]<='Z'){
            printf("Nome valido!\n");
            break;
        }
        else{
            printf("Invalido!\n");
            break;
        }
    }
}
