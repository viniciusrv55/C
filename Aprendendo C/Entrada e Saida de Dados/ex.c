// Exercicio 5 - Entrada e Saida de Dados
/*
    Escreva um programa que leia o ano de nascimento de uma pessoa.
    Calcular e apresentar a quantidade de dias, de horas, de minutos e a quantidade
    de segundos que esta pessoa vive desde o seu nascimento.
*/

#include <stdio.h>

int main(){

    int ano_nascimento,ano_atual,ano_resultado,aux_a,aux_d,aux_m,aux_s,ano=365,dia=24,min=60,seg=60;

    printf("Digite o Ano de Nascimento: ");
    scanf("%d",&ano_nascimento);

    printf("Digite o Ano em que estamos: ");
    scanf("%d",&ano_atual);

    ano_resultado = ano_atual - ano_nascimento;

    aux_a = ano_resultado*ano; //Quantos dias de vida
    aux_d = aux_a * dia; // Quantas horas de vida
    aux_m = aux_d * min; // Quantos minutos de Vida
    aux_s = aux_m * seg; // Quantos segundos de Vida

    printf("Entao voce tem: %d\n",ano_resultado);

    printf("A quantidade de Dias de vida eh: %d\n",aux_a);
    printf("A quantidade de Horas de vida eh: %d\n",aux_d);
    printf("A quantidade de Minutos de Vida eh: %d\n",aux_m);
    printf("A quantidade de Segundos de vida eh: %d\n",aux_s);

return 0;}
