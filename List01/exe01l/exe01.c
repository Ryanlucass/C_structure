#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"Portuguese");

//Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char. Associe as vari?veis aos ponteiros (use &). Modifique os valores de cada vari?vel usando os ponteiros. Imprima os valores das vari?veis antes e ap?s a modifica??o.

int inteiro, *PonteiroInt;
//float real, *PonteiroReal;
char c, *PonteiroChar;

PonteiroInt = 232;
c = 'c';

inteiro = &PonteiroInt;
//real = &PonteiroReal;
c = &PonteiroChar;

printf("Conte?do da vari?vel PonteiroInt : %x\n", *PonteiroInt);
printf("Conte?do da vari?vel PonteiroChar : %x\n", *PonteiroChar);




}