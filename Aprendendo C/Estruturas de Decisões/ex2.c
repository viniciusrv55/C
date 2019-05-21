/*
    Escreva um programa que leia dois números inteiros quaisquer.
    escreva o maior deles.
*/

#include <stdio.h>

int main(){

    int num1,num2;

    printf("Digite um numero: ");
    scanf("%d",&num1);
    printf("Digite outro numero: ");
    scanf("%d",&num2);

    if(num1>num2){
        printf("O primeiro eh: MAIOR\n");
    }else{
        printf("O segundo eh: MAIOR\n");
    }

return 0;}
