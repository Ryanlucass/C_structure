#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//03-Escreva um programa que contenha duas vari�veis inteiras. Leia essas vari�veiss do teclado. Em seguida, compare seus endere�os e exiba o conte�do do maior endere�o.

 

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
    
    printf("O maior endereco eh: %x\n", valormaior);
    printf("O menor endereco eh: %x\n", valormenor);

    
 // D?vidas sobre a quest?o: 

 /*
  uma d?vida para falar na aula, quando eu tranfiro um valor de uma vari?vel para outra, ela tamb?m move o espa?o na mem?ria, como aqui?
 */

}




