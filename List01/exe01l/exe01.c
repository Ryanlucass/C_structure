#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"Portuguese");

//Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.

int inteiro, *PonteiroInt;
//float real, *PonteiroReal;
char c, *PonteiroChar;

inteiro = 34;
c = 'c';

inteiro = &PonteiroInt;
//real = &PonteiroReal;
c = &PonteiroChar;

printf("Conteúdo da variável PonteiroInt : %d\n", *PonteiroInt);
printf("Conteúdo da variável PonteiroChar : %c\n", *PonteiroChar);




}