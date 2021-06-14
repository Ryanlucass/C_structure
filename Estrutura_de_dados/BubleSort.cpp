#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void EscreverVetor(int *numeros, int tamanho);
void BubbleSort(int *numeros, int tamanho, int aux, int contador);

//quando for compilar no dev++ prestar atenção no tipo do arquivo tem que ser cpp, like that


int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	
    int aux, contador; //objetos completaeres do vetor
    int tamanho = 4;
    
	int numeros[tamanho]; //vetor
   
	//chamando as funções   
    EscreverVetor(numeros,tamanho);
    BubbleSort(numeros,tamanho, aux, contador);
     
     
   printf("\nElementos do array em ordem crescente: \n");

    for(int i = 0; i<tamanho; i++){
        printf("%4d",numeros[i]);
    }
	
	return 0;
}

	//criando uma função para escrever vetor
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

	//criando uma função para o Bublesort
void BubbleSort(int *numeros, int tamanho, int aux, int contador){
	
	//for é tam - 1 pois ele não pega o último ítem do array, ele já é o maior 
    //não precisa ser verificado     
    for(contador = 1; contador <tamanho; contador++){ 
    	for(int i = 0; i<tamanho-1; i++){
			if(numeros[i] > numeros[i + 1]){
				aux = numeros[i];
				numeros[i] = numeros[i + 1];
				numeros[i + 1] = aux;
			}
		
		}	
	}	
	
}

