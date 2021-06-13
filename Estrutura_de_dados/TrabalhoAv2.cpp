//Gerar a tabela de um campeonato com Vitorias, Empates, Derrotas, Pontua��o e Classifica��o,
//onde a classifica��o deve ser definida atrav�s de algoritmos de Ordena��o. 
//Utilize pelo menos tr�s exemplos diferentes de Ordena��o
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <conio.h>

void BubbleSort(int *Classificados, int tamanho, int aux, int contador);
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

/*
	printf("Esquemas de pontua��o: \n");

	printf("Vit�rias: 3 pontos \n");
	printf("Empates:  1 pontos \n");
	printf("Derrotas: 0 pontos\n");
*/



//											V   E   D   P
//	01-Paris Saint-Germain Football Club	3,	1,	1,	0,	
//	02-Manchester City Football Club		2,	2,	1,	0,
//	03-Barcelona Football Club				1,	0,	4,	0,
//	04-Bayern M�nchen Football				2,	2,	1,	0,
//	05-Chelsea Football Club				2,	2,	1,	0,
//	06-Atl�tico de Madrid					1,	1,	3,	0
//

/*
	printf("\nParis Saint-Germain Football Club x Manchester City Football Club\n");	
	printf("Placar: 2 x 3\n");
	
	printf("\nParis Saint-Germain Football Club x Barcelona Football Club\n");	
	printf("Placar: 2 x 3\n");	
	
	printf("\nParis Saint-Germain Football Club x Bayern M�nchen Football\n");	
	printf("Placar: 2 x 3\n");	
	
	printf("\nParis Saint-Germain Football Club x Chelsea Football Club\n");	
	printf("Placar: 2 x 3\n");	
	
	printf("\nParis Saint-Germain Football Club x Atl�tico de Madrid\n");	
	printf("Placar: 2 x 3\n");	
	
	printf("\nManchester City Football Club x Barcelona Football Club\n");	
	printf("Placar: 2 x 3\n");	
	
	printf("\nManchester City Football Club x Bayern M�nchen Football\n");	
	printf("Placar: 2 x 3\n");	
	
	printf("\nManchester City Football Club x Chelsea Football Club\n");	
	printf("Placar: 2 x 3\n");	
	
	printf("\nManchester City Football Club x Atl�tico de Madrid\n");	
	printf("Placar: 2 x 3\n");	
	
	printf("\nBarcelona Football Club x Bayern M�nchen Football\n");	
	printf("Placar: 2 x 3\n");	
	
	printf("\nBarcelona Football Club x Chelsea Football Club\n");	
	printf("Placar: 2 x 3\n");	
	
	printf("\nBarcelona Football Club x Atl�tico de Madrid\n");	
	printf("Placar: 2 x 3\n");	
	
	printf("\nBayern M�nchen Football x Chelsea Football Club\n");	
	printf("Placar: 2 x 3\n");	
	
	printf("\nBayern M�nchen Football x Atl�tico de Madrid\n");	
	printf("Placar: 2 x 3\n");	
	
	printf("\nChelsea Football Club x Atl�tico de Madrid\n");	
	printf("Placar: 2 x 3\n");	
							
*/

	//char Times[6][]
	int TabelaJogos [6][5]
							{
						
							3,	1,	1,	10,	1,
							2,	2,	1,	8,	2,
							1,	0,	4,	3,  3,
							2,	2,	1,	8,	4,
							2,	2,	1,	8,	5,
							1,	1,	3,	4,	6
							};
	
	
	//for para percorrer os jgoos
	//time [i] 2 x 1 time [i+1]
							
	int Classificados[6]{10,8,3,8,8,4};
	
	int aux, contador;
	int tamanho = 6;

	for ( int i=0; i<6; i++ ){
  		for ( int j=0; j<5; j++ ){
     	printf ("%4d", TabelaJogos[i][j]);
  		}
  		printf("\n");
	}

	BubbleSort(Classificados,tamanho, aux, contador);
	
	printf("\nClassificados: \n");

    for(int b = 5; b >= 0; b--){
    	
        printf("%4d\n",Classificados[b]);
    }
	
//system("cls");
}

void BubbleSort(int *Classificados, int tamanho, int aux, int contador){
	
	//for � tam - 1 pois ele n�o pega o �ltimo �tem do array, ele j� � o maior 
    //n�o precisa ser verificado     
    for(contador = 1; contador <tamanho; contador++){ 
    	for(int i = 0; i<tamanho-1; i++){
			if(Classificados[i] > Classificados[i + 1]){
				aux = Classificados[i];
				Classificados[i] = Classificados[i + 1];
				Classificados[i + 1] = aux;
			}
		
		}	
	}	
	
}


