#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

void main(){

	//Faça um programa que leia os dados de 10 alunos (Nome, matricula, Media Final), armazenando em um vetor. Uma vez lidos os dados, dívida estes dados em 2 novos vetores, o vetor dos aprovados e o vetor dos reprovados, considerando a media mínima para a aprovação como sendo 5.0. Exibir na tela os dados do vetor de aprovados, seguido dos dados do vetor de reprovados.

	setlocale(LC_ALL,"Portuguese");

	typedef struct{
	char Nome[20];
	char Matricula[8];
	float MediaFinal;
	}Dados;
	
	int i;

	Dados Aluno[2];
	Dados Aprovados[2];
	Dados Reprovados[2];

	for(i=0; i<2; i++){
		Aprovados[i].Nome[0]=' ';
		Reprovados[i].Nome[0]=' ';
	}
	
	for(i = 0; i < 2; i++)
	{
		printf(" Cadastre o %dª aluno:\n", i+1);

		printf("Digite o nome: ");
        scanf("%s",&Aluno[i].Nome);
        fflush(stdin);
				
		printf("Matrícula: ");
		scanf("%s", &Aluno[i].Matricula);
		fflush(stdin);
		
		printf("Média Final: "),
		scanf("%f", &Aluno[i].MediaFinal);	
		printf("\n\n");
	}

	for(i = 0; i < 2; i++){
	 	if(Aluno[i].MediaFinal > (5.0)){

	 		Aprovados[i] = Aluno[i];			
		}
		if(Aluno[i].MediaFinal < (5.0)){

			Reprovados[i] = Aluno[i];
		}
	}
	

	for(i = 0; i < 2; i++){
		if(Aprovados[i].Nome[0]!= ' '){
			printf("\nAprovados: \n");
			printf("\nAluno: %s",Aprovados[i].Nome);
			printf("\nAluno Matrícula: %s\n",Aprovados[i].Matricula);
			printf("Media Final: %.2f\n",Aprovados[i].MediaFinal);
		}
	}

	for(i = 0; i <2; i++){
		if(Reprovados[i].Nome[0]!= ' '){

		printf("\nReprovados: \n");
		printf("\nAluno: %s",Reprovados[i].Nome);
		printf("\nAluno Matrícula: %s\n",Reprovados[i].Matricula);
		printf("Media Final: %.2f",Reprovados[i].MediaFinal);
		
		}
	}

}