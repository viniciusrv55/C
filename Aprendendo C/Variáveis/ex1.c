//Exercicio 1 Variaveis

/*
    Escreva um programa que declare variáveis.
    Estas variáveis irão armazenar:
    => A quilometragem inicial de um carro: 200000
    E depois de uma viagem:
    => A quilometragem final do carro:  207349
    O programa deverá atribuir estes valores as variáveis
    e depois calcular e apresentar a distância percorrida do
    carro (diferença entre a quilometragem inicial da quilometragem final).

    Obs.: Este resultado deverá ser armazenado em uma variável, para
    que seja apresentado.
*/

#include <stdio.h>

int main(){

    int km_inicial,km_final,resultado;

    km_inicial = 200000;
    km_final = 247892;
    resultado = km_final - km_inicial;

    printf("O resultado eh ...: %d\n",resultado);

return 0;}
