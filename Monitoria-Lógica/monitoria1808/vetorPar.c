#include<stdio.h>

/** Programa que pede para o usu�rio preencher um vetor de tamanho 10 do tipo INT
Ap�s isso pegue todos os valores deste vetor que foi preenchido e guarde em outro vetor
somente valores que s�o pares **/

main(){
    int vetor[10];
    int vetorPar[10];
    int i,j,par=0;

    printf("\t\t\tPreenchendo o vetor: \n");
    printf("Informe 10 valores: \n");
    for(i=0; i<10; i++){
        printf("vetor[%i] = ",i); /// come�a pedindo o valor na posi��o 0, depois na posi��o 1 e assim sucessivamente
        scanf("%i",&vetor[i]); /// ESTE FOR PREENCHE O VETOR
    }

    for(i=0; i<10; i++){ /// NESTE FOR VERIFICAMOS OS VALORES QUE S�O PARES E GUARDAMOS NO OUTRO VETOR
        if(vetor[i]%2==0){
            vetorPar[par]=vetor[i]; /// ENCONTROU O PAR, PEGA ELE E JOGA NO OUTRO VETOR
            par++; /// par vira 1, ou seja o vetor par na posi��o 0 tem um valor par l� dentro, agora ele fica aguardando um valor par
        }/// na posi��o 1 e assim sucessivamente
    }
    printf("\nRESULTADO DO VETOR PAR\n");
    for(j=0; j<par; j++){ /// AQUI MOSTRA O VETOR PAR NA TELA
        printf("Vetor Par[%i] = %i\n",j,vetorPar[j]);
    }
}
