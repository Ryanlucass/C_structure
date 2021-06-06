#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


 
void EscreverVetor(int *numeros, int tamanho);
void InsertionSort(int *numeros, int tamanho);
int main(){

	//SelectSort ou ordenação por seleção

	setlocale(LC_ALL,"Portuguese");
	
	
	
	int tamanho = 4; //tamanho do vetor
	int numeros[tamanho]; //vetor 
	
	EscreverVetor(numeros,tamanho);
	
	InsertionSort(numeros, tamanho);
	
	 printf("\nElementos do array em ordem crescente: \n");

    for(int i = 0; i<tamanho; i++){
        printf("%4d",numeros[i]);
    }
	
	return 0;
}

void EscreverVetor(int *numeros, int tamanho){
	
	//armazenando os valores no vetor 
    printf("Digite um número: \n");
    for(int i = 0; i<tamanho; i++){
        scanf("%d", &numeros[i]);    
    }
	
	//mostrando os valores
	//4 antes do tipo é a quantidade de espaços 
	for(int i = 0; i<tamanho; i++){
        printf("%4d", numeros[i]);
    }
	
}

void InsertionSort(int *numeros, int tamanho){
	int j,i,aux;
	
	for (i=1; i<tamanho; i++){
		aux = numeros[i];
		for(j = i; (j > 0) && (aux < numeros[j - 1]); j--){
			numeros[j] = numeros[j - 1];
		}
		numeros [j] = aux;
	}

}


