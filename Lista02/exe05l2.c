#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//12.	Calcular se um n�mero � ou n�o primo
int primo();
void main(){

setlocale(LC_ALL,"Portuguese");

int num, resposta;
 
 printf("Digite um n�mero: ");
 scanf("%d", &num);

 resposta = primo(num);
 
 
 
 if (resposta == 0)
    printf("%d � um n�mero primo\n", num);
 else
    printf("%d n�o � um n�mero primo\n", num);
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
