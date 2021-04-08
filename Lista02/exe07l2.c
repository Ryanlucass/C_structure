#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void intervalo();

int fatorial();
void main(){
//14.	Calcular o fatorial de um número.
setlocale(LC_ALL,"Portuguese");

int fat, n;
printf("Insira um valor para o qual deseja calcular seu fatorial: ");
scanf("%d", &n);
 
fat = fatorial(n);
 
printf("\nFatorial calculado: %d", fat);
}

int fatorial(int n)
{
    int fat;

    for(fat = 1; n > 1; n = n - 1)
    {    
    fat = fat * n;
    }
    return fat;
}