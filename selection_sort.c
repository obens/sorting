#include <stdio.h>
#include <stdlib.h>


/*int main() {
int a[]= {4,3,21,457,02}
int length = 5;
for(int i=0; i< length-1; i++){
	int min_pos= i;
	for (int j = i+1; j< length; j++)
		if(a[j]< a[min_pos]) min_pos= j;		
	if(min_pos != i){
	int temp= a[i];
	a[i]= a [min_pos];
	 a [min_pos]= temp;
	 	
		}
	}	
	for ( int i= 0; i < length; i++)
		printf("a[%d]= %d|n", i, a[i]);


	return 0;


}
*/


void selection_sort(int num[], int tam) { 
  int i, j, min, aux;
  for (i = 0; i < (tam-1); i++) 
  {
     min = i;
     for (j = (i+1); j < tam; j++) {
       if(num[j] < num[min]) 
         min = j;
     }
     if (i != min) {
       aux = num[i];
       num[i] = num[min];
       num[min] = aux;
     }
  }
}

int main(){
int i, j, min,aux, tam,num;
printf("pooo")





}

