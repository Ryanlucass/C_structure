#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//[Explicação sobre esse modo]

//A cada passo, procura o melhor valor do array e
//o coloca na primeira posição do array
//Descartar-se a primeira posição do array e
//repete-se o processo para a segunda posição
//isso é feito para todas as posições do array


//[Performance]
//Melhor caso: 0(N^2)
//Pior caso: 0(N^2)
//Ineficiente para grandes conjutnos de dados
//Estável: não altera a ordem de dados iguais 

void EscreverVetor(int *numeros, int tamanho);
void SelectionSort(int *numeros, int tamanho);
int main(){

	//SelectSort ou ordenação por seleção

	setlocale(LC_ALL,"Portuguese");
	
	
	
	int tamanho = 4; //tamanho do vetor
	int numeros[tamanho]; //vetor 
	
	EscreverVetor(numeros,tamanho);
	
	SelectionSort(numeros, tamanho);
	
	 printf("\nElementos do array em ordem crescente: \n");

    for(int i = 0; i<tamanho; i++){
        printf("%4d",numeros[i]);
    }
	
	return 0;
	
		
	
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

void SelectionSort(int *numeros, int tamanho){
	int j,i, menor, trocar;
	
	for(i =0; i<tamanho-1; i++){
		menor = i;
		
		for(j = i+1; j<tamanho; j++){
			
			if(numeros[j] < numeros[menor])
				menor = j;
		}	
		if(i != menor){
			trocar = numeros[i];
			numeros[i] = numeros[menor];
			numeros[menor] = trocar;
		}
	}

}


