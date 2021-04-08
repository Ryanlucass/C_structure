#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//15.	Leia uma temperatura a qual o usuário irá o Valor e a escala atual: (Fahrenheit Celsius, Kelvin), e informar a escala para qual deseja converter.
//Celcius para Fahrenheit: F = C*(1,8) + 32
//Fahrenheit para Celcius: C = (F ? 32) / 1,8
//Kelvin para Celcius: C = K ? 273,15
//Celcius para Kelvin: K = C + 273,15
//Kelvin para Fahrenheit: F = 1,8(K-273) + 32
void con();
void main(){
    setlocale(LC_ALL,"Portuguese");
    float ValorEscala;
    int escala;
    int conversao;

    printf("Digite: 1 Celcius;  2 Fahrenheit;  3 Kelvin;  \n");
    scanf("%d", &escala);

    printf("Digite o valor da escala atual:  \n");
    scanf("%f", &ValorEscala);

    if(escala == 1){
        printf("Digite: 1 Celcius para Fahrenheit; 2 Celcius para Kelvin;\n");
        scanf("%d",&conversao);
    }
    else if(escala == 2)
    {
        printf("Digite: 3 Fahrenheit para celcius\n");
        scanf("%d",&conversao);
    }
    else if(escala == 3)
    {
        printf("Digite: 4 Kelvin para Fahrenheit; 5 Kelvin para Celcius; \n");
        scanf("%d",&conversao);
    }

    con(conversao, ValorEscala);

    

}
void con(int conversao, float ValorEscala){
    
    float ValorConver;

    switch (conversao)
    {
    case 1:
    //celcius para Fahrenheit
        ValorConver = (ValorEscala * 1.8) + 32;
        printf("A conversão fica: %.2f Fahrenheit", ValorConver);
        break;
    case 2:
    //celcius para kelvin
        ValorConver = ValorEscala + 273.15;
        printf("A conversão fica: %.2f kelvin", ValorConver);
        break;
    case 3:
    //Fahrenheit para celcius
        ValorConver = (ValorEscala - 32)/1.8;
        printf("A conversão fica: %.2f celcius", ValorConver);
        break;
    case 4:
    //Kelvin para Fahrenheit
        ValorConver = 1.8*(ValorEscala - 273.15) + 32;
        printf("A conversão fica: %.2f Fahrenheit", ValorConver);
        break;
    case 5:
    //Kelvin para Celcius
        ValorConver = ValorEscala - 273.15;
        printf("A conversão fica: %.2f celcius", ValorConver);
        break;
    default:
        break;
    }

}