/*
Obs: Professor, fiquei com algumas d�vidas em rela��o a quest�o pedida,
participei da sua �ltima aula parcialmente, cheguei a ver e rever as �timas
grava��es da aula, por�m minha d�vida n�o foi sanada.

No decorrer do c�digo deixei expl�cito a l�gica do meu algoritmo,
se ela n�o conhecidir com a sua requisi��o, pe�o humildemente que
depois da semana de provas, fa�a a resulu��o da mesma. 
*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <conio.h>
void BubbleSort(int *pontuacao, int tamanho);
void SelectionSort(int *pontuacao, int tamanho);
void InsertionSort(int *pontuacao, int tamanho);
int main(){
	
	system("cls");
	setlocale(LC_ALL, "Portuguese");


	printf("UEFA Champions League\n");
	printf("Times participantes da Champions League: \n\n");
	printf("01 - Paris Saint-Germain Football Club\n");
	printf("02 - Manchester City Football Club\n");
	printf("03 - Barcelona Football Club\n");
	printf("04 - Bayern M�nchen Football Club\n");
	printf("05 - Chelsea Football Club\n");
	printf("06 - Atl�tico de Madrid");

	printf("\n\n\n\n");

			
						

//											V   E   D   P
//	01-Paris Saint-Germain Football Club	3,	1,	1,	0,	
//	02-Manchester City Football Club		2,	2,	1,	0,
//	03-Barcelona Football Club				1,	0,	4,	0,
//	04-Bayern M�nchen Football				2,	2,	1,	0,
//	05-Chelsea Football Club				2,	2,	1,	0,
//	06-Atl�tico de Madrid					1,	1,	3,	0
//

//tabela de resultdas setada de maneira fixa, 
//com exce��o da colua de pontua��o e classifica��o 

	printf("Tabela de Resultados: \n\n");

			
		int TabelaJogos [6][5]
							{									
							3,	1,	1,	0,	1,
							1,	2,	2,	0,	2,
							1,	0,	4,	0,  3,
							2,	2,	1,	0,	4,
							2,	2,	1,	0,	5,
							1,	1,	3,	0,	6
							};
							
			int aux1 [6][5]
							{									
							0,	0,	0,	0,	1,
							0,	0,	0,	0,	2,
							0,	0,	0,	0,  3,
							0,	0,	0,	0,	4,
							0,	0,	0,	0,	5,
							0,	0,	0,	0,	6
							};
	//Pontua��o est� sendo definida de maneira autom�tica
	//de acorda com a somatoria de pontua��o est� sendo acrescentada na tabela
		
	for(int i=0; i<=6; i++){				 				
		for(int i=0; i<6; i++){
			for ( int j=0; j<5; j++ ){
     					printf ("%4d", TabelaJogos[i][j]);
  						}
  						printf("\n");	
						}
						printf("\n   V   E   D   P   C");
						printf("\n");
						TabelaJogos[i][3] = TabelaJogos[i][0] * 3 + TabelaJogos[i][1];
					}
				
	printf("\n");
	
	//como a pontua��o foi gerada em tempo de execua��o eu coloquei eles em um vetor
	//para jogar na estrutura de organiza��o, n�o sei se poderia fazer dessa forma, interpretei assim.
	int tamanho = 6;
	int pontuacao[tamanho]{
						10,
						5,
						3,
						8,
						8,
						4};
	
	printf("\nusando estrutura de ordena��o no Vetor de pontua��o: \n");
	
	BubbleSort(pontuacao, tamanho);
	//SelectionSort(pontuacao, tamanho);
	//InsertionSort(pontuacao, tamanho);
	
	printf("\n   P");
    for(int i = 5; i>=0; i--){
        printf("\n%4d",pontuacao[i]);
    }
    
    printf("\n");
    printf("\n");
    
   
	aux1[1][0] = TabelaJogos[1][0];
	aux1[1][1] = TabelaJogos[1][1];
	aux1[1][2] = TabelaJogos[1][2];
	aux1[1][3] = TabelaJogos[1][3];
	
	aux1[3][0] = TabelaJogos[3][0];
	aux1[3][1] = TabelaJogos[3][1];
	aux1[3][2] = TabelaJogos[3][2];
	aux1[3][3] = TabelaJogos[3][3];
	
	TabelaJogos[3][0] = TabelaJogos[1][0];
	TabelaJogos[3][1] =	TabelaJogos[1][1]; 
	TabelaJogos[3][2] =	TabelaJogos[1][2];
	TabelaJogos[3][3] =	TabelaJogos[1][3];
	
	TabelaJogos[1][0] = aux1[3][0];
	TabelaJogos[1][1] = aux1[3][1];
	TabelaJogos[1][2] = aux1[3][2];
	TabelaJogos[1][3] = aux1[3][3];
	
	aux1[2][0] = TabelaJogos[2][0];
	aux1[2][1] = TabelaJogos[2][1];
	aux1[2][2] = TabelaJogos[2][2];
	aux1[2][3] = TabelaJogos[2][3];
	
	aux1[4][0] = TabelaJogos[4][0];
	aux1[4][1] = TabelaJogos[4][1];
	aux1[4][2] = TabelaJogos[4][2];
	aux1[4][3] = TabelaJogos[4][3];
	 
	TabelaJogos[2][0] = TabelaJogos[4][0];
	TabelaJogos[2][1] = TabelaJogos[4][1];
	TabelaJogos[2][2] = TabelaJogos[4][2];
	TabelaJogos[2][3] = TabelaJogos[4][3];
	
	aux1[5][0] = TabelaJogos[5][0];
	aux1[5][1] = TabelaJogos[5][1];
	aux1[5][2] = TabelaJogos[5][2];
	aux1[5][3] = TabelaJogos[5][3];
	
	TabelaJogos[5][0] = aux1[2][0];
	TabelaJogos[5][1] = aux1[2][1];
	TabelaJogos[5][2] = aux1[2][2];
	TabelaJogos[5][3] = aux1[2][3];
	
	TabelaJogos[4][0] = aux1[5][0];
	TabelaJogos[4][1] = aux1[5][1];
	TabelaJogos[4][2] = aux1[5][2];
	TabelaJogos[4][3] = aux1[5][3];
	
	printf("\nTabela j� ordenada de maneira correta: \n");
	 
		for(int i=0; i<6; i++){
			for ( int j=0; j<5; j++ ){
     					printf ("%4d", TabelaJogos[i][j]);				
  						}
  						printf("\n");						  	
						}
	
 return 0;
}

void BubbleSort(int *pontuacao, int tamanho){
	int aux, contador;
    for(contador = 1; contador <tamanho; contador++){ 
    	for(int i = 0; i<tamanho-1; i++){
			if(pontuacao[i] > pontuacao[i + 1]){
				aux = pontuacao[i];
				pontuacao[i] = pontuacao[i + 1];
				pontuacao[i + 1] = aux;
			}
		
		}	
	}	
	
}

void SelectionSort(int *pontuacao, int tamanho){
	int j,i, menor, trocar;
	
	for(i =0; i<tamanho-1; i++){
		menor = i;
		
		for(j = i+1; j<tamanho; j++){ 
			//sempre verifica o pr�ximo
			if(pontuacao[j] < pontuacao[menor])
				menor = j;
		}	
		if(i != menor){ 
			
			trocar = pontuacao[i];
			pontuacao[i] = pontuacao[menor];
			pontuacao[menor] = trocar;
		}
	}

}

void InsertionSort(int *pontuacao, int tamanho){
	int j,i,aux;
	
	for (i=1; i<tamanho; i++){
		aux = pontuacao[i];
		for(j = i; (j > 0) && (aux < pontuacao[j - 1]); j--){
			pontuacao[j] = pontuacao[j - 1];
		}
		pontuacao [j] = aux;
	}

}
