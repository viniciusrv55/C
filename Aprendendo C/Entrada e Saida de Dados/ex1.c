// Exercicio 1 - Entrada e Saidad de Dados
/*
    Escreva um programa que leia a quilometragem inicial de um carro, antes de uma viagem.
    Ler também a quilometragem final do carro após o término da viagem.

    O programa deverá calcular e apresentar a distância percorrida do carro
    (diferença entre a quilometragem inicial da quilometragem final).

    Obs.: Este resultado deverá ser armazenado em uma variável, para que seja apresentada.
*/
#include <stdio.h>

int main(){

    float km_inicial,km_final,resultado;

    printf("Digite o KM inicial do carro antes da viagem: ");
    scanf("%f",&km_inicial);

    printf("Digite o KM Final do carro após a viagem: ");
    scanf("%f",&km_final);

    resultado = km_final - km_inicial;

    printf("Foi percorrido %.2f KM \n",resultado);

return 0;}
