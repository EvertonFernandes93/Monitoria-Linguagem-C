/**Elaborar um programa em C para ler valores inteiros e armazen�-los em uma matriz D 3 x
3 (considere que n�o ser�o informados valores duplicados). A seguir o programa dever�
solicitar um n�mero X e escrever uma mensagem indicando se o valor de X existe ou N�O
na matriz.**/
#include<stdio.h>
main(){
    int d[3][3],i=0,j=0,num;
    int cont,a,b;
    for(i=0;i<3;i++){///faz a linha
        for(j=0;j<3;j++){///faz a coluna
            do{
                cont=0;///se o contador continuar zero sinal q todos os numeros s�o distintos sem precisar digitar  mesma posi��o novamente
                scanf("%i",&num);///insere o numero para depois verificar na matriz
                for(a=0;a<3;a++){///estes dois for fazem a verifica��o para ver se tem valores iguais na matriz
                    for(b=0;b<3;b++){
                        if(num==d[a][b]){///aqui faz a verifica��o
                            printf("\nNumero invalido. Digite outro numero:\n");
                            cont=1;///contador se tiver numero igual na matriz ele n�o saira do do{}while
                            break;
                        }
                    }
                }
            }while(cont>0);
            d[i][j]=num;///depois da verifica��o ele guarda na matriz na sua devida posi��o
        }
    }

    for(a=0;a<3;a++){/// aqui ela imprime a matriz na tela
        for(b=0;b<3;b++)
                printf(" %i ",d[a][b]);
        printf("\n\n");
    }

    int valorX,exist=0;
    printf("Informe um valor: ");
    scanf("%i",&valorX);
    for(a=0;a<3;a++){///estes dois for verificam se o valorX existe na matriz ou n�o
        for(b=0;b<3;b++){
           if(valorX==d[a][b]){
                exist=1;
           }
        }
    }
    if(exist==1)
        printf("\nEXISTE NA MATRIZ");
    else
        printf("\nNAO EXISTE NA MATRIZ");
}
