#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//exercício02
int main() {
    int i, j;
    float notas[5][3];
    char nome[5][240];
    int idade[5];
    float soma_Notas[5] = {0};  
    float Media[5]; 

    for (i = 0; i < 5; i++) {
        printf("Digite nome do %dº aluno: \n", i + 1);
        scanf("%s", nome[i]);
        printf("Digite idade do %dº aluno: \n", i + 1);
        scanf("%d", &idade[i]);

        for (j = 0; j < 3; j++) {
            printf("Digite %dª nota: ", j + 1);
            scanf("%f", &notas[i][j]);
            soma_Notas[i] += notas[i][j];
        }

       
        for (j = 0; j < 3; j++) {
            Media[i] = soma_Notas[i] / 3;
        }
    }

    
    for (i = 0; i < 5; i++) {
        printf("Nome: %s, Idade: %d\n", nome[i], idade[i]);

        for (j = 0; j < 3; j++) {
            printf("Nota %d: %.2f | ", j + 1, notas[i][j]);

        }    
     printf ("Média: %.2f | ", Media[i]);
        
     if (Media[i] >= 7) {
        printf("Aprovado\n");
 } else if (Media[i] >= 5 && Media[i]<7) {
        printf("Recuperação\n");
  } else {
       printf("Reprovado\n");
            }
        }

        printf("\n");  
    

    return 0;
}