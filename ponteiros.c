#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"Portuguese"); //Teria que mudar o UTF-8   

    int *x; //declarando um ponteiro
    int valor, y;
    valor = 35;

    x = &valor; // Atribuindo o endere?o do valor a X
    y = *x; //Atribuindo o conte?do da vari?vel apontada por X a Y

    //%x me retorna um valor hexadecimal
    //%p me retorna toda o endere?o, com muito lixo 

    //& operador de endere?o, operador un?rio que permite retornar o endere?o na mem?ria
    //* operador de indire??o, repasse o valor apontado, N?O o endere?o  

    printf("Endere?o da vari?vel comum valor: %x\n", &valor); //Pedindo o endere?o armazenado ent?o ? %p
    printf("Lendo o conte?do do ponteiro x: %x\n", x);//como x ? um ponteiro ele ir? retornar o endere?o nele armazenado
    printf("Endere?o de vari?vel ponteiro x: %x\n", &x);// posi??o na mem?ria do ponteiro
    printf("Endere?o de x em decimal: %d\n", x);//se eu colocar %d ele faz a convers?o de hexadecimal para decimal   
    printf("Conte?do da vari?vel apontada por x: %d\n",*x);

    printf("Conte?do da vari?vel comum y: %d\n", y);//valor de Y
    
     

}