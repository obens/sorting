#include <stdio.h>
#include <stdlib.h>
int int main()
{

tempoQuick = clock();
  	
  	if(tipo == 1)
  	{
	  	quick(vet, num);
	  	 	
		printf("\t[QUICK]: Ordem CRESCENTE: ");
		
	  	for (int i=0; i < num; i++) 
			printf("%d ", vet[i]);
			
		printf("\n\n");
	}
	else
	{
		printf("\t[QUICK]: Ordem DECRESCENTE: ");
		
		for(i = 0; i < num; i++)
		{
			for(j = 0; j < i; j++)
			{
				if(vet[i] > vet[j])
				{
					aux = vet[i];
					vet[i] = vet[j];
					vet[j] = aux;	
				}
			} 	
		}
		
		for(i = 0; i < num; i++)
  			printf("%d ", vet[i]);
		
		printf("\n\n");
	}
  	
  	tempoQuick = clock() - tempoQuick;
  	printf("\t[QUICK]: Tempo de execucao: %lf segundos\n\n", ((double)tempoQuick)/((CLOCKS_PER_SEC/1000)));
  	printf("\t|------------------------------------------------------------|\n\n"); 





	return 0;
}



  	