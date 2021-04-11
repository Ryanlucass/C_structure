#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

void main(){
//20 Faça um programa que gerencie o estoque de um mercado e: 
//Crie e leia um vetor de 5 produtos, com os dados: código (inteiro), nome, preço e quantidade.
//	Leia um pedido, composto por um código de produto e a quantidade. Localize este código no vetor e, se houver quantidade suficiente para atender ao pedido integralmente, atualize o estoque e informe o usuário.     

setlocale(LC_ALL,"Portuguese");

typedef struct{
	int codigo;
    char nomeProduto[20];
	float preco;
	int quantidade;
}Estoque;

int codigoProd;
int quantProd;

Estoque Produtos[5];

for(int i=0; i<5; i++){
    printf("Produto %i\n",i+1);
    printf("Codigo do Produto: ");
    scanf("%d",&Produtos[i].codigo);

    printf("Nome do Produto: ");
    scanf("%s",&Produtos[i].nomeProduto);
    fflush(stdin);
    
    printf("Preço do produto: ");
    scanf("%f",&Produtos[i].preco);
    
    printf("Quantidade do Produto: ");
    scanf("%d",&Produtos[i].quantidade);
    system("cls");
}

printf("\nDigite o código do produto que você deseja: ");
scanf("%d", &codigoProd);
printf("Digite a quantidade desejada: ");
scanf("%d", &quantProd);
system("cls");

    for(int i=0; i<5; i++){
    
        if(codigoProd == Produtos[i].codigo && quantProd<=Produtos[i].quantidade){
            printf("Produto encontrado\n");
            printf("Preço do Produto: %.2f\n",Produtos[i].preco);
            printf("compra efetuada\n");  
            printf("Permaneceram no estoque de %s, %d quantidades",Produtos[i].nomeProduto,Produtos[i].quantidade - quantProd);  
            
        }
    }
}