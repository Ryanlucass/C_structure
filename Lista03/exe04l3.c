#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

//19.	Fa�a um programa que armazene em um registro de dados (estrutura composta) os dados de um funcion�rio de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, Data de Nascimento, C�digo do Setor onde trabalha (0-99), Cargo que ocupa (String de at� 30 caracteres) e sal�rio. Os dados devem ser digitados pelo usu�rio, armazenados na estrutura e exibidos na tela.

void main(){
    setlocale(LC_ALL,"Portuguese");

typedef struct FuncionarioEmpresa
{
    char nome[12];
    int idade;
    char sexo[2];
    char cpf[15]; //utilizei char pois int n suporta, achei mais f�cil assim
    int dataNasciment;
    int codigo; //(0-99)
    char cargo[30];
    float salario;
}Funcionario;
Funcionario f1;

    printf("Informe o nome do funcion�rio: ");
    scanf("%s", &f1.nome);
    fflush(stdin);

    printf("Informe a idade do funcion�rio: ");
    scanf("%d", &f1.idade);

    printf("Informe o sexo do funcin�rio (M/F):");
    scanf("%s", &f1.sexo);
    fflush(stdin);

    printf("Informe o CPF do funcion�rio: ");
    scanf("%s", &f1.cpf);
    fflush(stdin);
 
    printf("Informe a data de nascimento do funcion�rio (sem barras): ");
    scanf("%d", &f1.dataNasciment);

    printf("Informe o c�digo do funcion�rio (0-99): ");
    scanf("%d", &f1.codigo);

    printf("Informe o cargo do funcion�rio: ");
    scanf("%s", &f1.cargo);
    fflush(stdin);

    printf("Informe o sal�rio do Funcion�rio: ");
    scanf("%f", &f1.salario);

    system("cls");

        printf("informa��o do funcion�rio: \n");
        printf("Nome : %s\n",f1.nome);
        printf("Idade: %d\n",f1.idade);
        printf("Sexo: %s\n",f1.sexo);
        printf("CPF: %s\n",f1.cpf);
        printf("Data de nascimento: %d\n",f1.dataNasciment);
        printf("C�digo do funcion�rio: %d\n",f1.codigo);
        printf("Cargo do funcion�rio: %s\n",f1.cargo);
        printf("sal�rio do funcion�rio: %.2f\n",f1.salario);

        printf("................\n");





}