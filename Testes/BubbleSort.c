#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define TAM 10

void main(){

setlocale(LC_ALL,"Portuguese");

    //declarando as vari�veis e o vetor 
    int numeros[TAM];
    int i, aux, contador;

    //armazenando os valores no vetor 
    printf("Entre com dez n�meros para preencher o array, e pressione enter ap�s cada um: \n");
    for(i = 0; i<TAM; i++){
        scanf("%d", &numeros[i]);    
    }

    //demonstrando como ficou ap�s o armazenamento
    for(i = 0; i<TAM; i++){
        printf("%4d", numeros[i]);
    }

    //Algoritmo de ordena��o Bubble Sort
    //o contador faz com que o for abaixo dele repita a quantidade de vezes necess�rias
    //se n�o fizer isso, ele s� vai pegar o n�mero maior e colocar no final do array
    //se ouver mais de um n�mero t�o alto, ele n�o pega;
    
    for(contador = 1; contador <TAM; contador++){
        for(i = 0; i<TAM-1; i++){
            if(numeros[i] > numeros[i + 1]){
                aux = numeros[i];
                numeros[i] = numeros[i+1];
                numeros[i + 1] = aux;
            }

        }
    }

    printf("\nElementos do array em ordem crescente: \n");

    for(i = 0; i<TAM; i++){
        printf("%4d",numeros[i]);
    }
        printf("\n");
}