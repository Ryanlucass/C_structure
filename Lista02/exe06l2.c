#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void intervalo();
void main()
    {
     //13.Informar se um n�mero inteiro est� ou n�o dentro de um intervalo de 2 numero
     //O intervalo vai ser de entre 5 e 10

     setlocale(LC_ALL,"Portuguese");

        intervalo();
     
     
    }

     void intervalo(){
         int num, num1, num2;
     int chance =0;

     retorno: printf("Digite um n�mero e veremos se ele est� dentro do intervalo: ");
     scanf("%d",&num);
     
     system("cls");
     if(num >= 5 && num <= 10 ){
         printf("parab�ns, o n�mero est� dentro do intervalo\n");
     }

     switch (chance)
     {
     case 2:
         printf("O intervalo � menor do que 100\n");
         break;
     
     case 5:
        printf("O intervalor � menor do que 20\n");
         break;
        
     case 7:
        printf("O intevalo � menor do que 15\n");
        break;
     
     case 10:
        printf("Meu deus, t� entre 5 e 10 homi\n");
        break;

     default:
        break;
     }

     while(!(num >= 5 && num <= 10 )){
         
         printf("O n�mero est� fora do intervalo\n");
         
         chance++;
         goto retorno;
     }
      
     }