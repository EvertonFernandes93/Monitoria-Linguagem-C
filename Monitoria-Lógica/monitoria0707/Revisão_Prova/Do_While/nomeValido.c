#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/** Escreva um programa que pe�a para o usu�rio digitar seu primeiro nome (caractere por caractere) at� que o ENTER seja digitado
 ('13'). Ent�o mostre na tela se o nome � v�lido. Considere o nome v�lido caso o primeiro caractere seja uma letra mai�scula,
  e todos os outros forem minusculas. **/

                                                /// EXEMPLO USANDO VETOR
main(){
    char letra;
    int cont=0,posicaoDoVetor=0,i;
    char vet[20];

    printf("Digite seu primeiro nome: ");

    do{

        letra = getche(); /// AQUI CAPTURAMOS UMA LETRA POR VEZ
        if( posicaoDoVetor == 0 && letra>='A' && letra<='Z'){ /// SE NA PRIMEIRA POSI��O DO VETOR O USU�RIO INFORMAR UM CARACTER MAIUSCULO
            cont++; /// SIGNIFICA QUE AT� ENT�O O NOME EST� CORRETO, CONTAMOS 1 E DAQUI EM DIANTE VERIFICAMOS A DEMAIS POSI��ES
            vet[posicaoDoVetor] = letra;/// LETRA MAIUSCULA NA POSI��O, ENT�O VAMOS GUARDA-LA NA PRIMEIRA POSI��O DO VETOR
        }
        else{ /// DE AGORA EM DIANTE VAMOS VERIFICAR A POSI��O 1 DO VETOR EM DIANTE
            if(posicaoDoVetor!=0 && letra>='a' && letra<='z'){ /// AQUI J� COME�A A CONTAR DA POSI��O 1 EM DIANTE, ENT�O OS CARACTERES DEVEM SER TODOS MINUSCULOS
                cont++; /// se o restante todo for minusculo, significa que o nome ate entao esta correto
                vet[posicaoDoVetor] = letra; /// GUARDAMOS TODAS AS SEGUINTES LETRAS MINUSCULAS DENTRO DO VETOR
            }
        }
        posicaoDoVetor++; /// AQUI COME�A NA POSI��O 0, (ATEN��O: ENTRA NA PRIMEIRA VEZ NO PRIMEIRO IF) ap�s o primeiro incremento vai entrar somente no ELSE

    }while(letra!=13);

    posicaoDoVetor--;

    /// Essa linha abaixo diminui 1 do tamanho FINAL do nome que foi digitado, pois o enter tamb�m conta, caso n�o excluirmos a ultima posi��o o nome
    /// ficaria, por exemplo: Eliel \n ou eliel \n ( AQUELE MESMO ESQUEMA QUE TI EXPLIQUEI SEXTA NA MONITORIA) ;)

    printf("\n"); /// pulamos uma linha

    /// Se o cont incrementou da primeira posi��o at� a ultima do vetor, significa que o nome � verdadeiro
    if(posicaoDoVetor==cont){
        printf("O nome que voce informou e considerado VALIDO");
    }
    else{ /// caso o CONT tenha falhado alguma vez, ou seja encontrou letra minuscula na posi��o 0 e maiuscula em alguma posi��o 1 em diante, ent�o � falso, NOME INVALIDO
        printf("O nome que voce informou e considerado INVALIDO");
    }
}
