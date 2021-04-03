#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//06-Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior.

//ponteiros é necessário usar 

void main(){

    setlocale(LC_ALL,"Portuguese");


    int valor01, valor02; 
    int valormaior, valormenor;

    printf("Digite o valor da variavel 01: ");
    scanf("%d", &valor01);

    printf("\nDigite o valor da variavel 01: ");
    scanf("%d", &valor02);
    
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

    
 // Dï¿½vidas sobre a questï¿½o: 

 /*
  uma dï¿½vida para falar na aula, quando eu tranfiro um valor de uma variï¿½vel para outra, ela tambï¿½m move o espaï¿½o na memï¿½ria, como aqui?
 */

}
 