//Exercicio 1 Variaveis

/*
    Escreva um programa que declare vari�veis.
    Estas vari�veis ir�o armazenar:
    => A quilometragem inicial de um carro: 200000
    E depois de uma viagem:
    => A quilometragem final do carro:  207349
    O programa dever� atribuir estes valores as vari�veis
    e depois calcular e apresentar a dist�ncia percorrida do
    carro (diferen�a entre a quilometragem inicial da quilometragem final).

    Obs.: Este resultado dever� ser armazenado em uma vari�vel, para
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
