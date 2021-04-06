#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//9.	Faça um programa que peça ao usuário para digitar 10 valores e some-os.
int soma();
void main(){

    setlocale(LC_ALL,"Portuguese");

    int vetor[10];
    
    int resultado;

    for(int i=0; i<10; i++)
    {
        printf("Digite um valor: \n");
        scanf("%d", &vetor[i]);
    }
        resultado = soma(vetor);
   

    printf("A soma dos valores é: %d", resultado);



}

int soma(int *vetor){
    
    int res=0;

     for(int i=0; i<10; i++){
        res = res + vetor[i];
    }

    return res;
}