#include<stdio.h>

/** Escreva um programa que pe�a para o usu�rio informar diversos caracteres enquanto o 'ENTER' n�o for
precionado, ao fim mostre na tela quantas vogais e quantas consoantes foram digitadas **/

main(){
    char letra;
    int vogais=0;
    int consoantes=0;
    do{
        letra = getche();
        if(letra>='a' && letra<='z' || letra>='A' || letra <='Z'){
            if (letra=='a' || letra=='e' || letra=='i' ||
                letra=='o' || letra=='u' || letra=='A' ||
                letra=='E' || letra=='I' || letra=='O' || letra=='U'){
                vogais++;
            }
            else{
                consoantes++;
            }
        }
    }while(letra!=13); /// ENQUANTO A LETRA N�O FOR IGUAL AO ENTER N�O SA� DO LOOP
    printf("\n%i caracteres informados sao vogais",vogais);
    printf("\n%i caracteres informados sao consoantes",consoantes-1);
}

