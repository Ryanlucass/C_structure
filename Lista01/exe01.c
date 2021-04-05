#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

setlocale(LC_ALL,"Portuguese");

//1.Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char. Associe as vari�veis aos ponteiros (use &). Modifique os valores de cada vari�vel usando os ponteiros. Imprima os valores das vari�veis antes e ap�s a modifica��o.

//declarando as vari�veis
int inteiro;
float real;
char caractere;

//conte�do das vari�veis
inteiro = 35;
real = 35.0;
caractere = 'e';


//declarando os ponteiros 
int *P_inteiro;
float *P_real;
char *P_char;

//Associando as vari�veis ao ponteiros 
P_inteiro = &inteiro; 
P_real = &real;
P_char = &caractere;


printf("\nValores das vari�veis antes das modifica��es\n");
printf("Conte�do da vari�vel Inteiro : %d\n", inteiro);
printf("Conte�do da vari�vel Real : %.2f\n", real);
printf("Conte�do da vari�vel Caractere : %c\n", caractere);

//Alterando os valores das vari�veis atraves dos ponteiros 
*P_inteiro = 34;
*P_real = 32.0;
*P_char = 'c';

printf("\nValores das vari�veis ap�s as modifica��es\n");
printf("Conte�do da vari�vel Inteiro : %d\n", inteiro);
printf("Conte�do da vari�vel Real : %.2f\n", real);
printf("Conte�do da vari�vel Caractere : %c\n", caractere);;

}