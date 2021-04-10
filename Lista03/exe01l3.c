#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

//16.	Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme solicitado abaixo:
//? Horário: composto de hora, minutos e segundos.
//? Data: composto de dia, mês e ano. 
//? Compromisso: composto de uma data, horário e texto que descreve o compromisso
void main(){

setlocale(LC_ALL,"Portuguese");

struct horario
{
    int horas, minutos, segundos;
};


struct data
{
    int dia, mes, ano;
};

typedef struct compromisso
{   
    struct data EstaData;
    struct horario EsteHorario;
    char descricao[30];
}com;
com c1;


}