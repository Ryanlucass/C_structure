#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL,"Portuguese");

	typedef struct{
	char Nome[20];
	int Matricula;
	float MediaFinal;
	}Dados;
	
	Dados Aluno[2];
	Dados Aprovados[2];
	Dados Reprovados[2];
	
	Dados *ponteiro1 = Aprovados;
	Dados *ponteiro2 = Reprovados;
	
	for(int i = 0; i < 2; i++)
	{
		printf(" Cadastre o %dª aluno:\n", i+1);
				
		printf("\n Nome: ");
		fflush(stdin);
		//gets(Aluno[i].Nome);
		scanf("%s",&Aluno[i].Nome);
		
		printf("\n Matrícula: ");
		scanf("%d", &Aluno[i].Matricula);
		
		printf("\n Média Final: "),
		scanf("%f", &Aluno[i].MediaFinal);	
		printf("\n\n");
	}

	for(int i = 0; i < 2; i++){
	 	if(Aluno[i].MediaFinal >= 5){ //verificando se estão na média
		 	//*ponteiro1[i].Nome = Aluno[i].Nome;
	 		Aprovados[i].Matricula = Aluno[i].Matricula;
	 		Aprovados[i].MediaFinal = Aluno[i].MediaFinal;
		}
		 else
		{
			//*ponteiro2[i].Nome = Aluno[i].Nome;
	 		Reprovados[i].Matricula = Aluno[i].Matricula;
	 		Reprovados[i].MediaFinal = Aluno[i].MediaFinal;
		 }

	}
	for(int i = 0; i < 2; i++){
		if(Aprovados[i].MediaFinal >= 5){
		printf("\nAprovados\n");
		//printf("Nome: %s\n",*ponteiro1[i].Nome);
		printf("Matrícula: %d\n",Aprovados[i].Matricula);
		printf("Media Final: %.2f\n",Aprovados[i].MediaFinal);
		break;
		}
		else if(Reprovados[i].MediaFinal < 5){
		printf("\nAprovados\n");
		//printf("Nome: %s\n",*ponteiro2[i].Nome);
		printf("Matrícula: %d\n",Reprovados[i].Matricula);
		printf("Media Final: %.2f\n",Reprovados[i].MediaFinal);
		break;
		}
	}

}