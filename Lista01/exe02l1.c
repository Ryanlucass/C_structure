#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//02 Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.

  
void main(){

    setlocale(LC_ALL,"Portuguese");

    //declarando variáveis inteiras e defindo seus valores 
    int valor01 = 43, valor02 = 126; 
    int valormaior, valormenor;

    //declarando ponteiros
    int *P_valor01;
    int *P_valor02;

    //passando valores paras os ponteiros 
    P_valor01 = &valor01;
    P_valor02 = &valor02;

    //endereço das variáveis
    printf("O valor do endereço de A é: %x\n",P_valor01); 
    printf("O valor do enderçco de B é: %x\n",P_valor02);


    //Definindo o maior endereço
    valormaior = P_valor01;
   
    //Se o primeiro valor continuar sendo maior, ele é definitivamente o maior valor
    if(valormaior > P_valor02)
    {
        valormenor = P_valor02;
    }
    //se não, ele é o menor endereço
    else 
    {
        valormaior = P_valor02;
        valormenor = P_valor01;
    }
    
    printf("\nO maior endereço é: %x\n", valormaior);
    printf("O menor endereço é: %x\n", valormenor);

    printf("\nEndereço em Deciamal\n");

    printf("\nO maior endereço é: %d\n", valormaior);
    printf("O menor endereço é: %d\n", valormenor);

    
 
}




