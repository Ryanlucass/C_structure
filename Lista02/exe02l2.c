#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//9.	Fa�a um programa que pe�a ao usu�rio para digitar 10 valores e some-os.
float soma();
void main(){

    setlocale(LC_ALL,"Portuguese");

    int vetor[10];
    
    float resultado;

    for(int i=0; i<10; i++)
    {
        printf("Digite um valor: \n");
        scanf("%d", &vetor[i]);
    }
        resultado = soma(vetor);
   

    printf("A soma da m�dia dos valores �: %.2f", resultado);



}

float soma(int *vetor){
    
    float res=0;
    float media;

     for(int i=0; i<10; i++){
        res = res + vetor[i];
    }

    media = res / 10;


    return media;
}