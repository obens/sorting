#include<stdio.h>
#include<stdlib.h>

int tamanho;
int valor;

void printVet(int vet[], int tamanho){
  for (int i = 0; i < tamanho; i++){	  
	    printf("%d ", vet[i]);
	}
		printf("\n");

	}

void Insertion_Sort(int vet[], int tamanho){

		for (int passo = 1; passo < tamanho; passo++){
			int key= vet[passo];
			int j = passo -1;

			while(key < vet[j] && j >= 0){
				 vet [j+1] = vet[j];
				--j;
			}
			vet[j+1]= key;

	}

}

int main()
{
		int valor[] = {9,5,1,4,3};
		int tamanho = sizeof(valor)/ sizeof(valor[0]);
		Insertion_Sort(valor,tamanho);
		printf("vamos imprimir os valores na ordem crescente :\n");
		printVet(valor, tamanho);
		




	return 0;

	
}
