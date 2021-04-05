#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

setlocale(LC_ALL,"Portuguese");

//1.Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.

//declarando as variáveis
int inteiro;
float real;
char caractere;

//conteúdo das variáveis
inteiro = 35;
real = 35.0;
caractere = 'e';


//declarando os ponteiros 
int *P_inteiro;
float *P_real;
char *P_char;

//Associando as variáveis ao ponteiros 
P_inteiro = &inteiro; 
P_real = &real;
P_char = &caractere;


printf("\nValores das variáveis antes das modificações\n");
printf("Conteúdo da variável Inteiro : %d\n", inteiro);
printf("Conteúdo da variável Real : %.2f\n", real);
printf("Conteúdo da variável Caractere : %c\n", caractere);

//Alterando os valores das variáveis atraves dos ponteiros 
*P_inteiro = 34;
*P_real = 32.0;
*P_char = 'c';

printf("\nValores das variáveis após as modificações\n");
printf("Conteúdo da variável Inteiro : %d\n", inteiro);
printf("Conteúdo da variável Real : %.2f\n", real);
printf("Conteúdo da variável Caractere : %c\n", caractere);;

}