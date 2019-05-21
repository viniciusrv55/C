// Exercicio 4 - Entrada e Saida de Dados
/*
    Escreva um programa que leia as três notas escolares de um aluno.
    Calcular e apresentar a média do aluno.
*/

#include <stdio.h>

int main(){

    float nota1,nota2,nota3,media;

    printf("Digite a Nota 1: ");
    scanf("%f",&nota1);
    printf("Digite a Nota 2: ");
    scanf("%f",&nota2);
    printf("Digite a Nota 3: ");
    scanf("%f",&nota3);

    media = (nota1+nota2+nota3)/3;

    printf("A media eh: %.2f \n",media);

return 0;}
