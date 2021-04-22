#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define TAM 10

void main(){

setlocale(LC_ALL,"Portuguese");

    //declarando as variáveis e o vetor 
    int numeros[TAM];
    int i, aux, contador;

    //armazenando os valores no vetor 
    printf("Entre com dez números para preencher o array, e pressione enter após cada um: \n");
    for(i = 0; i<TAM; i++){
        scanf("%d", &numeros[i]);    
    }

    //demonstrando como ficou após o armazenamento
    for(i = 0; i<TAM; i++){
        printf("%4d", numeros[i]);
    }

    //Algoritmo de ordenação Bubble Sort
    //o contador faz com que o for abaixo dele repita a quantidade de vezes necessárias
    //se não fizer isso, ele só vai pegar o número maior e colocar no final do array
    //se ouver mais de um número tão alto, ele não pega;
    
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