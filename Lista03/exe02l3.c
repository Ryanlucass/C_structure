#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
 
//17.	Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma estrutura.

void main(){

setlocale(LC_ALL,"Portuguese");

typedef struct DadosPessoa
{
    int idade,numero,cep;
    char rua[21];
    char nome[15];
}dados;
dados pessoa01;

printf("Digiteo seu nome...............:");
scanf("%s",&pessoa01.nome);
fflush(stdin);

printf("Digite sua idade...............:");
scanf("%d",&pessoa01.idade);

printf("Digite o seu endereço, rua......:");
scanf("%s",&pessoa01.rua);
fflush(stdin);

printf("Digite o seu endereço, número...:");
scanf("%d",&pessoa01.numero);

printf("Digite o seu endereço, CEP.....:");
scanf("%d",&pessoa01.cep);


printf("\n........DADOS.......\n");

printf("Nome...........%s\n",pessoa01.nome);
printf("Idade..........%d\n",pessoa01.idade);
printf("Endereço:\n");
printf("Rua............%s\n",pessoa01.rua);
printf("Numero.........%d\n",pessoa01.numero);
printf("CEP............%d\n",pessoa01.cep);

}
