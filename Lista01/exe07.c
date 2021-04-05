#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

//07 Análise o código a seguir e descreva linha a linha o que ocorre e mostre o resultado final.

int a, b,*p1, *p2; //definindo as variáveis e os ponteiros  

    a = 4; // definindo o valor 4 para a variável A 
    b = 3; //defininfo valor 3 para a variável B
    p1 = &a; // atribuindo o endereço da variável A ao ponteiro p1 
    p2 = p1; // p2 recebe o endereço apontado pelo ponteiro p1 

    *p2 = *p1 + 3; // 4 = 4 + 3     p2 = 7
    b = b * (*p1); // 3 = 3 x (7)   b  = 21
    (*p2)++; //7++ = 8 
    p1 = &b; // atribuindo o endereço da variável B ao ponteiro p1 = 8

    printf("%d %d\n", *p1, *p2); //imprimindo o conteudo da variavel p1=21 e p2=8
    printf("%d %d\n", a, b); //imprimindo a variavel a=8 e b=21

}