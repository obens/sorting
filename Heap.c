#include <stdio.h>
#include <stdlib.h>

void troca(int vet[],int a, int b){
	int aux=vet[a];
	vet[a]= vet[b];
	vet[b]= aux;
}

void criar_heap(int vet[], int i, int tamanho){
	int inicio=0;
	int maior=i;
	int esquerda =2*i+1;
	int direita =2*i+2;
	if (esquerda <tamanho && vet[esquerda]> vet[i])
	{
			maior= esquerda;
	}

if (direita<tamanho && vet[direita]> vet[maior])
	{
		maior=direita;
	}	

if (maior!=i)
	{
		troca(vet,i,maior);
		criar_heap(vet, maior,tamanho);
	}

}

void Heap_Sort(int vet[], int tamanho){
	int inicio=0;

	for (int k=(tamanho/2)-1; k>=0; k--) // função principal da HEAP
	{
		criar_heap(vet, k, tamanho);
	}
for (int k = tamanho-1; k >=0; k--)
{
	troca(vet,inicio, k);
	criar_heap(vet,0,k);
	}

}

 int main()
{
	int vet[] = {0,12,14,45,14,24,21,7,23,5,21};
	int tamanho = 11;
	//Heap_sort(vet,tamanho);
	Heap_Sort(vet, tamanho);
	for (int i = 0; i < tamanho; i++)
	{
		printf("%d\n",vet[i] );/* code */
	}


	return 0;
}