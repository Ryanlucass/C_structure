#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void intervalo();
void main()
    {
     //13.Informar se um número inteiro está ou não dentro de um intervalo de 2 numero
     //O intervalo vai ser de entre 5 e 10

     setlocale(LC_ALL,"Portuguese");

        intervalo();
     
     
    }

     void intervalo(){
         int num, num1, num2;
     int chance =0;

     retorno: printf("Digite um número e veremos se ele está dentro do intervalo: ");
     scanf("%d",&num);
     
     system("cls");
     if(num >= 5 && num <= 10 ){
         printf("parabéns, o número está dentro do intervalo\n");
     }

     switch (chance)
     {
     case 2:
         printf("O intervalo é menor do que 100\n");
         break;
     
     case 5:
        printf("O intervalor é menor do que 20\n");
         break;
        
     case 7:
        printf("O intevalo é menor do que 15\n");
        break;
     
     case 10:
        printf("Meu deus, tá entre 5 e 10 homi\n");
        break;

     default:
        break;
     }

     while(!(num >= 5 && num <= 10 )){
         
         printf("O número está fora do intervalo\n");
         
         chance++;
         goto retorno;
     }
      
     }