#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//4.Fa�a um programa que leia 2 valores inteiros e troque os seus conte�dos, ou seja, por exemplo e, ap�s a execu��o, A conter� o valor de B e B ter� o valor de A
 

 void main(){

    setlocale(LC_ALL,"Portuguese");

    int valor01, valor02;
    int *Pvalor01, *Pvalor02;
    int a,b;

    Pvalor01 = &valor01;
    Pvalor02 = &valor02;

    printf("Digite o valor de A �: ");
    scanf("%d",& valor01);

    printf("Digite o valor de B �: ");
    scanf("%d",& valor02);

    printf("O valor de A �: %d\n", valor01);
    printf("O valor de B �: %d\n", valor02);

    a = *Pvalor01;
    b = *Pvalor02;
    

    printf("O valor de A �: %d\n", a);
    printf("O valor de B �: %d", b);


 }