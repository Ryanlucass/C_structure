#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//02 Escreva um programa que contenha duas vari�veis inteiras. Compare seus endere�os e exiba o maior endere�o.

  
void main(){

    setlocale(LC_ALL,"Portuguese");

    //declarando vari�veis inteiras e defindo seus valores 
    int valor01 = 43, valor02 = 126; 
    int valormaior, valormenor;

    //declarando ponteiros
    int *P_valor01;
    int *P_valor02;

    //passando valores paras os ponteiros 
    P_valor01 = &valor01;
    P_valor02 = &valor02;

    //endere�o das vari�veis
    printf("O valor do endere�o de A �: %x\n",P_valor01); 
    printf("O valor do ender�co de B �: %x\n",P_valor02);


    //Definindo o maior endere�o
    valormaior = P_valor01;
   
    //Se o primeiro valor continuar sendo maior, ele � definitivamente o maior valor
    if(valormaior > P_valor02)
    {
        valormenor = P_valor02;
    }
    //se n�o, ele � o menor endere�o
    else 
    {
        valormaior = P_valor02;
        valormenor = P_valor01;
    }
    
    printf("\nO maior endere�o �: %x\n", valormaior);
    printf("O menor endere�o �: %x\n", valormenor);

    printf("\nEndere�o em Deciamal\n");

    printf("\nO maior endere�o �: %d\n", valormaior);
    printf("O menor endere�o �: %d\n", valormenor);

    
 
}




