#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//4.Faça um programa que leia 2 valores inteiros e troque os seus conteúdos, ou seja, por exemplo e, após a execução, A conterá o valor de B e B terá o valor de A
 

 void main(){

    setlocale(LC_ALL,"Portuguese");

    int valor01, valor02;
    int *Pvalor01, *Pvalor02;
    int a,b;

    Pvalor01 = &valor01;
    Pvalor02 = &valor02;

    printf("Digite o valor de A é: ");
    scanf("%d",& valor01);

    printf("Digite o valor de B é: ");
    scanf("%d",& valor02);

    printf("O valor de A é: %d\n", valor01);
    printf("O valor de B é: %d\n", valor02);

    a = *Pvalor01;
    b = *Pvalor02;
    

    printf("O valor de A é: %d\n", a);
    printf("O valor de B é: %d", b);


 }