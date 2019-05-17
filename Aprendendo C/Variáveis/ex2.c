// Exercicio 2 - Variaveis

/*
    Escreva um programa que armazene as 3 notas
    escolares de um aluno.

    Calcule a média e armazerna
    em uma variavel.

    apresentar a media do aluno.

    Obs.: Usar variaveis dop tipo de dado float, pois elas
    são do tipo que armazena casas decimais.

*/

#include <stdio.h>

int main(){

    float nota1,nota2,nota3,resultado;

    nota1 = 65;
    nota2 = 50;
    nota3 = 80;
    resultado = (nota1 + nota2 + nota3)/3;

    printf("A Media eh ...: %.2f \n",resultado);

return 0;}
