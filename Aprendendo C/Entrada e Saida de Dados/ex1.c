// Exercicio 1 - Entrada e Saidad de Dados
/*
    Escreva um programa que leia a quilometragem inicial de um carro, antes de uma viagem.
    Ler tamb�m a quilometragem final do carro ap�s o t�rmino da viagem.

    O programa dever� calcular e apresentar a dist�ncia percorrida do carro
    (diferen�a entre a quilometragem inicial da quilometragem final).

    Obs.: Este resultado dever� ser armazenado em uma vari�vel, para que seja apresentada.
*/
#include <stdio.h>

int main(){

    float km_inicial,km_final,resultado;

    printf("Digite o KM inicial do carro antes da viagem: ");
    scanf("%f",&km_inicial);

    printf("Digite o KM Final do carro ap�s a viagem: ");
    scanf("%f",&km_final);

    resultado = km_final - km_inicial;

    printf("Foi percorrido %.2f KM \n",resultado);

return 0;}
