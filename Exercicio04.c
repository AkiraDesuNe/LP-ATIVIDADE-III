#include <stdio.h>
#include <stdlib.h>
//exercicio4

int main () {
int n[5];
int i;
int par=0;
int impar=0;
int somapar=0;
float mediapar;
float mediatotal;
int somatotal=0;
int maior_n=0;
int menor_n=99999999;
int negativos=0;

for (i = 0;i<5;i++) {
printf ("digite um número: ");
scanf ("%d",&n[i]);

somatotal+=n[i];

if  (n[i]%2!=0) {
impar++;
}


else if (n[i]%2==0) {
par++;
somapar+=n[i];}


if (maior_n < n[i]) {
maior_n = n[i]; }

if (menor_n > n[i]) {
menor_n = n[i]; }

if (n[i] < 0) {
negativos++; }
}

mediapar = (somapar/par);
mediatotal = (somatotal / 5 );

printf ("a quantidade de números impares é: %d\n",impar);
printf ("a quantidade de números negativos é: %d\n",negativos);
printf ("o maior número é %d e o menor número é %d\n",maior_n, menor_n);
printf ("a média de números pares é: %.2f\n",mediapar);
printf ("a média de números inseridos é: %.2f\n",mediatotal);


return 0;
}
