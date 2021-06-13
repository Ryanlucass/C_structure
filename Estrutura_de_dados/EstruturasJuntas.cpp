#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

void VetorRandom(int Vetor[], int Tamanho);
void LerVetor(int Vetor[], int Tamanho);
void EscreverVetor(int Vetor[], int Tamanho);
void BubbleSort(int Vetor[], int Tamanho);
void SelectSort(int Vetor[], int Tamanho);
void InsertSort(int Vetor[], int Tamanho);
void QuickSort(int Vetor[], int Inicio, int Fim);
int IndiceMenorValor(int Vetor[], int Tamanho, int IndiceInicial);
int Particao(int Vetor[], int Inicio, int Fim);

int main(){
system("cls");
setlocale(LC_ALL, "Portuguese");
int Tamanho = 10, Vetor[Tamanho];
clock_t Tempo;

 // LerVetor(Vetor, Tamanho);
VetorRandom(Vetor, Tamanho);
printf("\n\tVetor: {");
EscreverVetor(Vetor, Tamanho);
Tempo = clock();
// BubbleSort(Vetor, Tamanho);
// SelectSort(Vetor, Tamanho);
InsertSort(Vetor, Tamanho);
/*
int Inicio = Tamanho - (Tamanho - 1);
int Fim = Tamanho;
QuickSort(Vetor, Inicio, Fim);
*/
Tempo = clock() - Tempo;
printf("Vetor Ordenado = {");
EscreverVetor(Vetor, Tamanho);
printf("Tempo de Execução: %.2lf", ((double)Tempo)/(CLOCKS_PER_SEC/100));
// Dividir por CLOCKS_PER_SEC = 1000000 Para resultado em Segundos Dividir por (CLOCKS_PER_SEC/1000) Para resultado em Milissegundos
return 0;
system("pause");
}

void VetorRandom(int Vetor[], int Tamanho){
srand(time(NULL));
int Aux, Vazio = 1; // Vazio é Verdade ou (Vetor Vazio)
printf("Valores Gerados: ");
for(int i = 1; i <= Tamanho; i++){
Random:
Aux = (rand() % 100);
printf("%d ", Aux);
if(Vazio == 1){
Vazio = 0; // Vazio é Falso ou (Vetor não Vazio)
Vetor[i] = Aux;
}else if (Vazio == 0){
for(int j = 1; j <= i; j++){
if(Vetor[j] == Aux){
goto Random;
}
}
Vetor[i] = Aux;
}
}
}

void LerVetor(int Vetor[], int Tamanho){
for(int i = 1; i <= Tamanho; i++){
printf("Vetor[%d] = ", i);
scanf("%d",&Vetor[i]);
}
}

void EscreverVetor(int Vetor[], int Tamanho){
for(int i = 1; i <= Tamanho; i++){
printf(" %d", Vetor[i]);
}
printf(" }\n");
}

void BubbleSort(int Vetor[], int Tamanho){
int Aux, Cont = Tamanho - 1;
while(Cont > 0){
for(int i = 1; i <= Tamanho - 1; i++){
if(Vetor[i] > Vetor[i + 1]){
Aux = Vetor[i];
Vetor[i] = Vetor[i + 1];
Vetor[i + 1] = Aux;
}
printf("Passo: {");
EscreverVetor(Vetor, Tamanho);
}
Tamanho--;
Cont--;
}
}

void SelectSort(int Vetor[], int Tamanho){
int Aux, Indice;
for(int i = 1; i <= Tamanho; i++){
Indice = IndiceMenorValor(Vetor, Tamanho, i);
printf("Indice Inicial = %d Indice Menor = %d", i, Indice);
Aux = Vetor[i];
Vetor[i] = Vetor[Indice];
Vetor[Indice] = Aux;
printf("Passo: {");
EscreverVetor(Vetor, Tamanho);
}
}

int IndiceMenorValor(int Vetor[], int Tamanho, int IndiceInicial){
int Indice = IndiceInicial;
for(int i = IndiceInicial + 1; i <= Tamanho; i++){
if(Vetor[Indice] > Vetor[i]){
Indice = i;
}
}
return Indice;
}

void InsertSort(int Vetor[], int Tamanho){

 int Aux, j;
for(int i = 2; i <= Tamanho; i++){
Aux = Vetor[i];
j = i - 1;
while((j >= 1) && (Aux < Vetor[j])){
Vetor[j + 1] = Vetor[j];
Vetor[j] = Aux;
j--;
printf("Passo: {");
EscreverVetor(Vetor, Tamanho);
}
Vetor[j + 1] = Aux;
}
}

void QuickSort(int Vetor[], int Inicio, int Fim){

 if(Inicio < Fim){
int Pivo = Particao(Vetor, Inicio, Fim); // printf("Pivo: %d", Pivo);
QuickSort(Vetor, Inicio, Pivo - 1);
QuickSort(Vetor, Pivo + 1, Fim);
}

}

int Particao(int Vetor[], int Inicio, int Fim){
int Aux = Vetor[Fim];
int j = Inicio - 1;
for(int i = Inicio; i < Fim; i++){
if (Aux >= Vetor[i]){
j = j + 1;
int Aux_2 = Vetor[j];
Vetor[j] = Vetor[i];
Vetor[i] = Aux_2;
}
}
Vetor[Fim] = Vetor[j + 1];
Vetor[j + 1] = Aux;
return (j + 1);
}
