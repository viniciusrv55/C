/*
    Escreva um programa que leia a receita e a despesa de uma empresa no ano anterior
    Apresentar a mensagem: "LUCRO" ou "PREJUIZO", conforme a situa��o da empresa.
*/
#include <stdio.h>

int main(){

    float receita,despeza;

    printf("digite a receita: ");
    scanf("%f",&receita);
    printf("digite a despeza: ");
    scanf("%f",&despeza);

    if(receita>despeza){
        printf("LUCRO\n");
    }else{
        printf("PREJU�ZO\n");
    }

return 0;}
