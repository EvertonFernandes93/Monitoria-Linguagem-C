#include<stdio.h>
/** Fa�a um programa que pe�a para o usu�rio digitar caracter do (tipo char).
 Ao fim mostre na tela se este caracter � uma vogal ou uma consoante. **/

 main(){
    char caracter;

    printf("Digite uma letra: "); /// PEDE UMA LETRA
    scanf(" %c",&caracter); /// GUARDA ESTA LETRA

    if(caracter!='a' && caracter!='e' && caracter!='i' && caracter!='o' && caracter !='u'){ /// SE FOR DIFERENTE DE (a,e,i,o,u) � consoante
        printf("A letra informada e uma consoante! \n");
    }
    else{ /// caso contr�rio � vogal
        printf("A letra informada e uma vogal! \n");
    }
 }
