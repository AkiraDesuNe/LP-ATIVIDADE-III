#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

//Exercício 5

int
main ()
{
  int i;
  float preco[5];
  int qtd[5];
  char nome[5][240];
  float preco_Total[5];
  float soma_Total = 0;
  int e = 0;
  int qtd_Total = 0;

  printf ("Digite 1 para adicionar vendas: ");
  scanf ("%d", &e);

  if (e == 1)
    {
      for (i = 0; i < 5; i++)
	{
	  printf ("digite o nome do produto: ");
	  scanf ("%s", nome[i]);
	  printf ("digite o preço do produto: ");
	  scanf ("%f", &preco[i]);
	  printf ("digite a quantidade a ser comprada: ");
	  scanf ("%d", &qtd[i]);

	  qtd_Total += qtd[i];

	  preco_Total[i] = qtd[i] * preco[i];

	  soma_Total += preco_Total[i];
	}

    } else  {
      printf ("inválido");
    }

      printf ("Digite 2 para sair do menu e exibir total de vendas: ");
      scanf ("%d", &e);

      if (e == 2)
	{

	  printf ("saindo...");

	  sleep (10);

	  system ("clear");

	  for (i = 0; i < 5; i++)
	    {

	      printf (" %d - nome do produto: %s | preço do produto: %.2f | qtd a ser comprada: %d \n",  i + 1, nome[i], preco[i], qtd[i]);
	    }
	    printf ("A quantidade total de produtos comprados: %d \n", qtd_Total);
	    printf ("o valor total de vendas : %.2f", soma_Total);


	} else	{
	  printf ("inválido");
	}


     return 0;
        
 }
