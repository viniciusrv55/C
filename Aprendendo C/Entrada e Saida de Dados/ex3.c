// Exercicio 3 - Entrada e Saida de Dados
/*
    Escreva um programa que leia e armazene a receita e a despesa anual de uma empresa.
    Calcular e apresentar o lucro obtido pela empresa.
*/

#include <stdio.h>

int main(){

    float receita,despesa,lucro;

    printf("A receita obtida pela empresa foi de R$");
    scanf("%f",&receita);

    printf("A despeza da empresa foi de R$");
    scanf("%f",&despesa);

    lucro = receita - despesa;

    printf("O lucro foi de R$%.2f \n",lucro);

return 0;}
