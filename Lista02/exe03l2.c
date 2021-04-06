#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float soma();
void main(){

setlocale(LC_ALL,"Portuguese");

//10.	Faça um programa que leia 10 inteiros e imprima sua média.

    int vetor[10];
    float resultado;

    for(int i=0; i<10; i++)
    {
        printf("Digite um valor: \n");
        scanf("%d", &vetor[i]);
    }
        resultado = soma(vetor);
   

    printf("A média dos valores é: %.2f", resultado);  



}

float soma(int *vetor){
    
    float res = 0;
    float media;
     
    for(int i=0; i<10; i++){
        res = res + vetor[i];
    }

    media = res / 10;
   
    return media;
}

