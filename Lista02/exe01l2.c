#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//8. Escreva um programa que leia 10 n�meros e escreva o menor valor lido e o maior valor lido

void MaiorNumero();

void main(){

    setlocale(LC_ALL,"Portuguese");

    int maiornumero, menornumero;

    int vetor[10];

    for(int i=0; i<10; i++){
        printf("Digite um n�mero: ");
        scanf("%d", &vetor[i]);

    }
    
    MaiorNumero(vetor);

    
 
}

void MaiorNumero(int *vetor){
    int maiornumero, menornumero;     
    int i=1;

    maiornumero = vetor[0];
    while (i < 10)
    {
        if(vetor[i] >maiornumero)
        {
            maiornumero = vetor[i];
        }
        else
        {
            menornumero = vetor[i];
        }
        i++;  
    }
    printf("o maior n�mero � :%d\n",maiornumero);
    printf("o menor n�mero � :%d",menornumero);

}
