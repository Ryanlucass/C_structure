#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//11.	Diferenciar dentre 3 n�meros, qual � o maior e qual � o menor


void MaiorNumero();

void main(){

    setlocale(LC_ALL,"Portuguese");

    int maiornumero, menornumero;

    int vetor[3];

    for(int i=0; i<3; i++){
        printf("Digite um n�mero: ");
        scanf("%d", &vetor[i]);

    }
    
    MaiorNumero(vetor);

}

void MaiorNumero(int *vetor){
    int maiornumero, menornumero;     
    int i=1;

    maiornumero = vetor[0];
    while (i < 3)
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
    printf("O maior n�mero � :%d\n",maiornumero);
    printf("O menor n�mero � :%d",menornumero);

}
