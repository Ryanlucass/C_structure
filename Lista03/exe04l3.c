#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

//19.	Faça um programa que armazene em um registro de dados (estrutura composta) os dados de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, Data de Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa (String de até 30 caracteres) e salário. Os dados devem ser digitados pelo usuário, armazenados na estrutura e exibidos na tela.

void main(){
    setlocale(LC_ALL,"Portuguese");

typedef struct FuncionarioEmpresa
{
    char nome[12];
    int idade;
    char sexo[2];
    char cpf[15]; //utilizei char pois int n suporta, achei mais fácil assim
    int dataNasciment;
    int codigo; //(0-99)
    char cargo[30];
    float salario;
}Funcionario;
Funcionario f1;

    printf("Informe o nome do funcionário: ");
    scanf("%s", &f1.nome);
    fflush(stdin);

    printf("Informe a idade do funcionário: ");
    scanf("%d", &f1.idade);

    printf("Informe o sexo do funcinário (M/F):");
    scanf("%s", &f1.sexo);
    fflush(stdin);

    printf("Informe o CPF do funcionário: ");
    scanf("%s", &f1.cpf);
    fflush(stdin);
 
    printf("Informe a data de nascimento do funcionário (sem barras): ");
    scanf("%d", &f1.dataNasciment);

    printf("Informe o código do funcionário (0-99): ");
    scanf("%d", &f1.codigo);

    printf("Informe o cargo do funcionário: ");
    scanf("%s", &f1.cargo);
    fflush(stdin);

    printf("Informe o salário do Funcionário: ");
    scanf("%f", &f1.salario);

    system("cls");

        printf("informação do funcionário: \n");
        printf("Nome : %s\n",f1.nome);
        printf("Idade: %d\n",f1.idade);
        printf("Sexo: %s\n",f1.sexo);
        printf("CPF: %s\n",f1.cpf);
        printf("Data de nascimento: %d\n",f1.dataNasciment);
        printf("Código do funcionário: %d\n",f1.codigo);
        printf("Cargo do funcionário: %s\n",f1.cargo);
        printf("salário do funcionário: %.2f\n",f1.salario);

        printf("................\n");





}