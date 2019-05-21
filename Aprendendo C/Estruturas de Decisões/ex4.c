/*
    Escreva um programa que leia dois numeros quaisquer.
    Apresentar o resultado do calculo do maior dividido pelo menor
*/

#include <stdio.h>

int main(){

    float num1,num2,resultado;

    printf("Digite o valor de A: ");
    scanf("%f",&num1);
    printf("Digite o valor de B: ");
    scanf("%f",&num2);

    if(num1>num2){
        resultado = num1/num2;
    }else{
        resultado = num2/num1;
    }

    printf("A divisao eh : %.2f",resultado);

return 0;}
