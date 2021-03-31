#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//04-Faça um programa que leia 2 valores inteiros e troque os seus conteúdos, ou seja, por exemplo e, após a execução, A conterá o valor de B e B terá o valor de A.

//é necessário usar ponteiros 

void main()
{

int a = 23, b = 12;

printf("A = %d e B = %d\n", a,b);

printf("A = %d e B = %d", b,a);

}