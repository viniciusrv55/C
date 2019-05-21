/*
    Escreva um programa que leia o sal�rio de um funcion�rio.

    Dever� ser concedido ao funcion�rio um reajuste de sal�rio baseado
    nas informa��es a seguir:

    ---------------------------------------------------------------
    Salario                                |     Taxa de Reajuste
    ---------------------------------------------------------------
    Salario at� R$1000,00                  |    15% de Reajuste
    Salario de R$1000,00 at� R$2000,00     |    10% de Reajuste
    Salario acima de R$2000,00             |     5% de Reajuste
    ---------------------------------------------------------------
*/

#include <stdio.h>

int main(){

    float salario,reajuste;

    printf("Digite o seu salario: ");
    scanf("%f",&salario);

    if(salario<=1000){
        reajuste = salario + salario*0.15;
    }else if(salario>2000){
        reajuste = salario + salario*0.05;
    }else{
        reajuste = salario + salario*0.10;
    }
    printf("O valor apos o reajuste eh de: %.2f \n",reajuste);

return 0;}
