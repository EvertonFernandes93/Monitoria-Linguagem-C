#include <stdio.h>
#include <conio.h>
#include <stdlib.h>// necess�rio p/ as fun��es rand() e srand()
#include <time.h>//necess�rio p/ fun��o time()

int main(void)
{
     int i;

     printf("Gerando 10 valores aleatorios:\n\n");

     /* srand(time(NULL)) objetiva inicializar o gerador de n�meros aleat�rios
        com o valor da fun��o time(NULL). Este por sua vez, � calculado
        como sendo o total  de segundos passados desde 1 de janeiro de 1970
        at� a data atual.
        Desta forma, a cada execu��o o valor da "semente" ser� diferente.
     */
     srand(time(NULL));
    int aux,j;
    int numero[99];       // gerando valores aleat�rios na faixa de 0 a 100
   for(i=0;i<20;i++){
    numero[i] =1+rand() % 99;
    printf(" %d", numero[i]);
   }
for( i=0; i<20; i++ ){
                  for( j=i+1; j<20; j++ ){
                       if( numero[i] > numero[j] ){
                           aux = numero[i];
                           numero[i] = numero[j];
                           numero[j] = aux;
                       }
                  }
           }
           printf("\n Ordenado com sucesso!");
           for(i=0;i<20;i++)
           {
                            printf("\n%d",numero[i]);
           }

     return 0;
}
