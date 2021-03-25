#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

//06 parecida
//07Análise o código a seguir e descreva linha à linha o que ocorre e mostre o resultado final.

int a, b,*p1, *p2; //definindo variáveis e ponteiros 

    a = 4; // definindo valor 4 para a variável a 
    b = 3; //defininfo valor 3 para a variável b
    p1 = &a; // atribuindo o endereço da variável ao ponteiro 
    p2 = p1; // passando o endereço de um ponteiro para o outro 

    *p2 = *p1 + 3; // 4 = 4 + 3
    b = b * (*p1); // 3 = 3 x (4)
    (*p2)++; // 7++ = 8
    p1 = &b; //  atribuindo o endereço da variável ao ponteiro 

    printf("%d %d\n", *p1, *p2); //imprimindo o conteudo da variavel
    printf("%d %d\n", a, b); //imprimindo a variavel

}