#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//03-Escreva um programa que contenha duas vari�veis inteiras. Leia essas vari�veiss do teclado. Em seguida, compare seus endere�os e exiba o conte�do do maior.

 

void main(){

    setlocale(LC_ALL,"Portuguese");

    //definindo as vari�veis 
    int valor01, valor02, valormaior, valormenor;

    //definindo os ponteiros 
    int *Pvalor01, *Pvalor02;

    //Atribuindo as vari�veis aos ponteiros 
    Pvalor01 = &valor01;
    Pvalor02 = &valor02;


    retorno: printf("Digite o valor 01: ");
    scanf("%d",& valor01);

    valormaior = Pvalor01;
    
    printf("Digite o valor 02: ");
    scanf("%d",& valor02);
   
    if(valor01 == valor02){
        printf("\nOs valores s�o iguais\n\n");
        goto retorno;
    }

    if(valormaior > Pvalor02)
    {
        valormenor = Pvalor02;
    }
    else 
    {
        valormaior = Pvalor02;
        valormenor = Pvalor01;
    }
    
    printf("\nO valor do endere�o de A �: %x\n",Pvalor01); 
    printf("O valor do ender�co de B �: %x\n",Pvalor02);


    printf("O maior endere�o �: %x\n", valormaior);
    printf("O menor endere�o �: %x\n", valormenor);

}