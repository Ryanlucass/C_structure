#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"Portuguese");

//Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char. Associe as vari?veis aos ponteiros (use &). Modifique os valores de cada vari?vel usando os ponteiros. Imprima os valores das vari?veis antes e ap?s a modifica??o.

//declarando as vari?veis
int inteiro;
float real;
char e;

//conte?do das vari?veis
inteiro = 35;
real = 35.0;
e = 'e';


//declarando os ponteiros 
int *P_inteiro;
float *P_real;
char *P_char;

//Associando as vari?veis ao ponteiros 
P_inteiro = &inteiro; 
P_real = &real;
P_char = &e;


printf("\nEndere?os da mem?ria dos ponteiros\n");
printf("Endere?o da vari?vel PonteiroInt : %x\n", P_inteiro);
printf("Endere?o da vari?vel PonteiroReal : %x\n", P_real);
printf("Endere?o da vari?vel PonteiroChar : %x\n", P_char);

printf("\nValores dos ponteiros antes das modificações\n");
printf("Conte?do da vari?vel PonteiroInt : %d\n", *P_inteiro);
printf("Conte?do da vari?vel PonteiroReal : %.2f\n", *P_real);
printf("Conte?do da vari?vel PonteiroChar : %c\n", *P_char);

//Alterando os valores das vari?veis atraves dos ponteiros 
*P_inteiro = 34;
*P_real = 32.0;
*P_char = 'c';

printf("\nValores dos ponteiros ap?s as modifica??es\n");
printf("Conte?do da vari?vel PonteiroInt : %d\n", *P_inteiro);
printf("Conte?do da vari?vel PonteiroReal : %.2f\n", *P_real);
printf("Conte?do da vari?vel PonteiroChar : %c\n", *P_char);

}