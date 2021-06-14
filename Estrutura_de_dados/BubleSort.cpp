#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void EscreverVetor(int *numeros, int tamanho);
void BubbleSort(int *numeros, int tamanho, int aux, int contador);

//quando for compilar no dev++ prestar aten��o no tipo do arquivo tem que ser cpp, like that


int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	
    int aux, contador; //objetos completaeres do vetor
    int tamanho = 4;
    
	int numeros[tamanho]; //vetor
   
	//chamando as fun��es   
    EscreverVetor(numeros,tamanho);
    BubbleSort(numeros,tamanho, aux, contador);
     
     
   printf("\nElementos do array em ordem crescente: \n");

    for(int i = 0; i<tamanho; i++){
        printf("%4d",numeros[i]);
    }
	
	return 0;
}

	//criando uma fun��o para escrever vetor
void EscreverVetor(int *numeros, int tamanho){
	//armazenando os valores no vetor 
    printf("Digite um n�mero: \n");
    for(int i = 0; i<tamanho; i++){
        scanf("%d", &numeros[i]);    
    }
	
	//mostrando os valores
	//4 antes do tipo � a quantidade de espa�os 
	for(int i = 0; i<tamanho; i++){
        printf("%4d", numeros[i]);
    }
	
}

	//criando uma fun��o para o Bublesort
void BubbleSort(int *numeros, int tamanho, int aux, int contador){
	
	//for � tam - 1 pois ele n�o pega o �ltimo �tem do array, ele j� � o maior 
    //n�o precisa ser verificado     
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

