#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main (void){
    struct classe{ /*Cria tipo struct*/
        char nome[30];
        //char matricula[8];
        int matricula;
        float media_final;
    };

    int i;

    struct classe alunos[2]; /*Cria variaveis do tipo strutc para calculos*/
    struct classe alunos_rep[2];
    struct classe alunos_aprov[2];

    for(i=0;i<2;i++){ 
        alunos_rep[i].nome[0]=' ';
        alunos_aprov[i].nome[0]=' ';
    }

    for(i=0;i<2;i++){  /*Entrada de dados*/
        printf("Digite o nome: ");
        scanf("%s",&alunos[i].nome);
        fflush(stdin);
        printf("Digite o numero da matricula: ");
        scanf("%s",&alunos[i].matricula);
        fflush(stdin);
        printf("Digite a media final: ");
        scanf("%f",&alunos[i].media_final);
        fflush(stdin);
        printf("\n");
    }
    for (i=0;i<2;i++){
        if(alunos[i].media_final<(5.0)){
            alunos_rep[i]=alunos[i];
            
        }
        if(alunos[i].media_final>(5.0)){
           
            alunos_aprov[i]=alunos[i];
           
        }
    }

    for(i=0;i<2;i++){ 
        if(alunos_aprov[i].nome[0]!=' '){
            printf("[Aprovado]\nNome: %s\nMatricula: %s\nNota: %2.1f\n\n",alunos_aprov[i].nome,alunos_aprov[i].matricula,alunos_aprov[i].media_final);
        }
    }

    for(i=0;i<2;i++){
        if(alunos_rep[i].nome[0]!=' '){
            printf("[Reprovado]\nNome: %s\nMatricula: %s\nNota: %2.1f\n\n",alunos_rep[i].nome,alunos_rep[i].matricula,alunos_rep[i].media_final);
        }
    }
}