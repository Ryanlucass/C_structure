#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//12.	Calcular se um número é ou não primo
int primo();
void main(){

setlocale(LC_ALL,"Portuguese");

int num, resposta;
 
 printf("Digite um número: ");
 scanf("%d", &num);

 resposta = primo(num);
 
 
 
 if (resposta == 0)
    printf("%d é um número primo\n", num);
 else
    printf("%d não é um número primo\n", num);
}

int primo(int num){

int resultado = 0;
int i=2;

for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado++;
       break;
    }
 }

 return resultado;
}
