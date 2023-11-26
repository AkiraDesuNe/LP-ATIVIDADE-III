#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Exercício 3: 

int main() {
   int numeros [5];
   char nomes  [5] [240];
   int e;
   int i;
    
    printf ("Digite 1: ");
    scanf ("%d",&e);
    
if (e==1) {

for (i=0; i<5;i++) {
 printf ("digite um nome: \n ");
 scanf ("%s",nomes[i]);
 printf ("digite um número telefônico: \n");
 scanf ("%d",&numeros[i]);
}
} else
printf ("inválido");


printf ("Digite 2: ");
    scanf ("%d",&e);
if (e== 2) {
    for (i=0; i<5;i++) {
    printf (" %dª pessoa -> nome: %s e número de telefone: %d \n",i + 1, nomes[i], numeros [i] );
    }
} else
printf ("inválido");



return 0;
}