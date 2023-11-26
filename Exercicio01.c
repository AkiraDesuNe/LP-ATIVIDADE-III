
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

//Exercício 1: 

int main() {
    char nome[5][240];
    int idade[5];
    float peso[5];
    float altura[5];
    int i;
    float maior_Peso = 0;
    float menor_Peso = 9999;
    float maior_Altura = 0;
    float menor_Altura = 9999;
    int maior_Idade = 0;
    int menor_Idade = 9999;

    for (i = 0; i < 5; i++) {
        printf("Digite nome:\n");
        scanf("%s", nome[i]);
        printf("Digite altura:\n");
        scanf("%f", &altura[i]);
        printf("Digite peso:\n");
        scanf("%f", &peso[i]);
        printf("Digite idade:\n");
        scanf("%d", &idade[i]);

        if (maior_Peso < peso[i]) {
            maior_Peso = peso[i];
        }
        if (menor_Peso > peso[i]) {
            menor_Peso = peso[i];
        }

        if (maior_Idade < idade[i]) {
            maior_Idade = idade[i];
        }
        if (menor_Idade > idade[i]) {
            menor_Idade = idade[i];
        }

        if (maior_Altura < altura[i]) {
            maior_Altura = altura[i];
        }
        if (menor_Altura > altura[i]) {
            menor_Altura = altura[i];
        }
    }

   
    for (i = 0; i < 5 ; i++) {
        if (idade[i] == maior_Idade) {
            printf("Nome da pessoa de maior idade: %s, idade: %d\n", nome[i], maior_Idade);
        }
        if (idade[i] == menor_Idade) {
            printf("Nome da pessoa de menor idade: %s, idade: %d\n", nome[i], menor_Idade);
        }
        if (peso[i] == maior_Peso) {
            printf("Nome da pessoa de maior peso: %s, peso: %.2f\n", nome[i], maior_Peso);
        }
        if (peso[i] == menor_Peso) {
            printf("Nome da pessoa de menor peso: %s, peso: %.2f\n", nome[i], menor_Peso);
        }
        if (altura[i] == maior_Altura) {
            printf("Nome da pessoa de maior altura: %s, altura: %.2f\n", nome[i], maior_Altura);
        }
        if (altura[i] == menor_Altura) {
            printf("Nome da pessoa de menor altura: %s, altura: %.2f\n", nome[i], menor_Altura);
        }
    }

    return 0;
}
