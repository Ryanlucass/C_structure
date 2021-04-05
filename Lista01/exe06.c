#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//03-Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveiss do teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior.

 

void main(){

    setlocale(LC_ALL,"Portuguese");

    //definindo as variáveis 
    int valor01, valor02, valormaior, valormenor;

    //definindo os ponteiros 
    int *Pvalor01, *Pvalor02;

    //Atribuindo as variáveis aos ponteiros 
    Pvalor01 = &valor01;
    Pvalor02 = &valor02;


    retorno: printf("Digite o valor 01: ");
    scanf("%d",& valor01);

    valormaior = Pvalor01;
    
    printf("Digite o valor 02: ");
    scanf("%d",& valor02);
   
    if(valor01 == valor02){
        printf("\nOs valores são iguais\n\n");
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
    
    printf("\nO valor do endereço de A é: %x\n",Pvalor01); 
    printf("O valor do enderçco de B é: %x\n",Pvalor02);


    printf("O maior endereço é: %x\n", valormaior);
    printf("O menor endereço é: %x\n", valormenor);

}