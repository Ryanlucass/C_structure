#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

//21.	Crie um programa que receba tr�s valores (obrigatoriamente maiores que zero), representando as medidas dos tr�s lados de um tri�ngulo. Elabore fun��es para: 
//a.	Determinar se eles lados formam um triangulo, sabendo que: 

//?	O comprimento de cada lado de um tri�ngulo � menor do que a soma dos outros dois lados.
//obs um lado n�o pode ser maior que os dois lados somados  

//b.	Determinar e mostrar o tipo de triangulo, caso as medidas formem um triangulo. 
//?	Equil�tero tr�s lados iguais.  
//?	Is�sceles dois lados iguais. 
//?	Escaleno tr�s lados diferentes

void main(){

    setlocale(LC_ALL,"Portuguese");

    typedef struct{
        int a,b,c;
    }lados;

    lados l1;

    

    printf("\nDigite o primeiro lado: ");
    scanf("%d",&l1.a);
  
    printf("Digite o segundo lado: ");
    scanf("%d",&l1.b);

    printf("Digite o Terceiro lado: ");
    scanf("%d", &l1.c);

    

    if (l1.a != l1.b && l1.a != l1.c && l1.b != l1.c){
        printf("Tri�ngulo Escaleno");
        
    }
    if (l1.a == l1.b && l1.a == l1.c && l1.b == l1.c){
        printf("Tri�ngulo Equilatero");
        
    } 

    if (l1.a != l1.b && l1.a == l1.c){
        printf("triangulo isoceles");
        
    } 

    if(l1.a == l1.b && l1.a != l1.c) {

        printf("triangulo isoceles");
        
    }
    if(l1.b == l1.c && l1.b != l1.a){
        printf("triangulo isoceles");
    }
    

}
