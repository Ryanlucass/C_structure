#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

//18.	Construa uma estrutura aluno com nome, número de matr?cula e curso. Leia do usuário a informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.

void main(){

setlocale(LC_ALL,"Portuguese");

struct aluno{
    char nome[15], curso[20];
    int matricula;
};
//engenharia
struct aluno ListaAlunos[5];

for (int i=0; i<5;i++) { 
          printf("Informe o nome do aluno %i: ",i+1);
          scanf("%s", &ListaAlunos[i].nome);
          fflush(stdin);
          printf("Informe a matricula do aluno %i: ",i+1);
          scanf("%d", &ListaAlunos[i].matricula);
          printf("Informe o curso do aluno %i: ",i+1);
          scanf("%s", &ListaAlunos[i].curso);
          fflush(stdin);
          printf("................\n");
          system("cls");
    }

    for (int i =0;i<5;i++) { 
        printf("informação do aluno %i: \n",i+1);
         printf("Aluno : %s\n", ListaAlunos[i].nome);
         printf("Matricula: %d\n", ListaAlunos[i].matricula);
         printf("Curso: %s\n", ListaAlunos[i].curso);
         printf("................\n");
    };

}