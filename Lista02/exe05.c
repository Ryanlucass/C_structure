#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//05-Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior.

//ponteiros é necessário usar 
void main(){

    setlocale(LC_ALL,"Portuguese");

    int valor01 = 43, valor02 = 126; 
    int valormaior, valormenor;

    printf("O valor da variavel A eh: %x", valor01);
    printf("\nO valor da variavel B eh: %x", valor02);
    
    valormaior = valor01;
   

    if(valormaior > valor02)
    {
        valormenor = valor02;
    }
    else 
    {
        valormaior = valor02;
        valormenor = valor01;
    }
    
    printf("\nO maior endereco eh: %x\n", valormaior);
    printf("O menor endereco eh: %x\n", valormenor);

}