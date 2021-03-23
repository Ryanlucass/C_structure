#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//02-Escreva um programa que contenha duas vari�veis inteiras. Compare seus endere�os e exiba o maior endere�o.

void main(){

    setlocale(LC_ALL,"Portuguese");

    int valor01 = 43, valor02 = 126; 
    int valormaior, valormenor;

    printf("O valor da variavel A eh: %d", valor01);
    printf("\nO valor da variavel B eh: %d", valor02);
    
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

    
 // D�vidas sobre a quest�o: 

 /*
  uma d�vida para falar na aula, quando eu tranfiro um valor de uma vari�vel para outra, ela tamb�m move o espa�o na mem�ria, como aqui?
 */

}




