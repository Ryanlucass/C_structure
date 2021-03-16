#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"Portuguese"); //Teria que mudar o UTF-8   

    int *x; //declarando um ponteiro
    int valor, y;
    valor = 35;

    x = &valor; // Atribuindo o endereço do valor a X
    y = *x; //Atribuindo o conteúdo da variável apontada por X a Y

    //%x me retorna um valor hexadecimal
    //%p me retorna toda o endereço, com muito lixo 

    //& operador de endereço, operador unário que permite retornar o endereço na memória
    //* operador de indireção, repasse o valor apontado, NÃO o endereço  

    printf("Endereco da variavel comum valor: %x\n", &valor); //Pedindo o endereço armazenado então é %p
    printf("Lendo o conteúdo do ponteiro x: %x\n", x);//como x é um ponteiro ele irá retornar o endereço nele armazenado
    printf("Endereco de variável ponteiro x: %x\n", &x);// posição na memória do ponteiro
    printf("Endereco de x em decimal: %d\n", x);//se eu colocar %d ele faz a conversão de hexadecimal para decimal   
    printf("Conteudo da variavel apontada por x: %d\n",*x);

    printf("Conteudo da variavel comum y: %d\n", y);//valor de Y
    
     

}