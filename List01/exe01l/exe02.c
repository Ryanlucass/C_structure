#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//02-Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.

void main(){

    setlocale(LC_ALL,"Portuguese");

    int valor01, valor02, valormaior, valormenor;

    printf("Digite o valor 01: ");
    scanf("%d",& valor01);

    valormaior = valor01;
    
    printf("Digite o valor 02: ");
    scanf("%d",& valor02);

    if(valormaior > valor02)
    {
        valormenor = valor02;
    }
    else 
    {
        valormaior = valor02;
        valormenor = valor01;
    }
    
    printf("O maior endereço é: %x\n", valormaior);
    printf("O menor endereço é: %x\n", valormenor);

    
 // Dúvidas sobre a questão: 

 /*
  uma dúvida para falar na aula, quando eu tranfiro um valor de uma variável para outra, ela também move o espaço na memória, como aqui?
 */

}




