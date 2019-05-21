/*
    Escreva um programa que leia um inteiro qualquer
    informar se o número é diferente de 1000 ouse é igual
*/

#include <stdio.h>

int main(){

    int numero;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    if(numero!=1000){
        printf("o numero eh: DIFERENTE\n");
    }else{
        printf("o numero eh: IGUAL\n");
    }

return 0;}
