#include<stdio.h>

/** Escreva um programa que pe�a para o usu�rio digitar duas palavras individualmente,
e mostre na tela se elas s�o iguais.
Caso n�o sejam, mostre na tela qual das duas possui o maior n�mero de consoantes.
**/
main(){
    int tam1=0,tam2=0,i,j,c;
    char palavra1[30];
    char palavra2[30];
    char letra1,letra2;
    int consoantesPalavra1=0;
    int consoantesPalavra2=0;
    printf("Informe a primeira palavra: ");

    do{ /// Captura a primeira palavra
        letra1 = getche();
        palavra1[tam1] = letra1;
        if(letra1!='a' && letra1!='e' && letra1!='i' && letra1!='o' && letra1!='u'){
            consoantesPalavra1++;
        }
        tam1++;
    }while(letra1!=13);

    printf("\nInforme a segunda palavra: ");

    do{ /// Captura a segunda palavra
        letra2 = getche();
        palavra2[tam2] = letra2;
        if(letra2!='a' && letra2!='e' && letra2!='i' && letra2!='o' && letra2!='u'){
            consoantesPalavra2++;
        }
        tam2++;
    }while(letra2!=13);

    int boolean = 0; /// SE BOLEAN FOR 1 � VERDADEIRO, SE FOR 0 � FALSO
    for(i=0;i<tam1;i++){
        if(palavra1[i]!=palavra2[i]){
            boolean++; /// VERDADEIRO AS PALAVRAS S�O DIFERENTES
        }
    }
    if(boolean==0){
        printf("\nIguais");
    }
    else if(consoantesPalavra1==consoantesPalavra2){
        printf("\nA palavra 1 tem %i consoantes",consoantesPalavra1-1);
        printf("\nA palavra 2 tem %i consoantes",consoantesPalavra2-1);
    }
    else if(consoantesPalavra1>consoantesPalavra2){
        printf("\nA palavra 1 tem %i consoantes",consoantesPalavra1-1);
    }
    else{
        printf("\nA palavra 2 tem %i consoantes",consoantesPalavra2-1);
    }
}
