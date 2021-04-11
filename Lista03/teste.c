#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>

typedef struct{
	char Nome[20];
	int Matricula;
	float Media_Final;
}Dados;

int main(){
	system("cls");
	setlocale(LC_ALL,"Portuguese");
	
	Dados Aluno[11];
	Dados Aprovados[11];
	Dados Reprovados[11];
	
	Dados *ponteiro1 = Aprovados;
	Dados *ponteiro2 = Reprovados;

	
	int i;
	
	for(i = 1; i <= 5; i++){
		printf(" Cadastre o %d aluno:\n", i);
				
		printf("\n Nome: ");
		fflush(stdin);
		//gets(Aluno[i].Nome);
		scanf("%s",&Aluno[i].Nome);
		
		printf("\n Matrícula: ");
		scanf("%d", &Aluno[i].Matricula);
		
		printf("\n Média Final: "),
		scanf("%f", &Aluno[i].Media_Final);	
		printf("\n\n");
	}
	 for(i = 1; i <= 5; i++){
	 	if(Aluno[i].Media_Final >= 5){
	 		*ponteiro1[i].Nome = Aluno[i].Nome;
	 		Aprovados[i].Matricula = Aluno[i].Matricula;
	 		Aprovados[i].Media_Final = Aluno[i].Media_Final;
		 }else{
		 	*ponteiro2[i].Nome = Aluno[i].Nome;
	 		Reprovados[i].Matricula = Aluno[i].Matricula;
	 		Reprovados[i].Media_Final = Aluno[i].Media_Final;
		 }
	 }
	
	
	return 0;
}