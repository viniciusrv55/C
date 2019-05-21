/*
    Escreva um programa que verifique se um numero é positivo!
*/

#include <stdio.h>

int main(){

    int numero;

    printf("Digite um numero qualquer: ");
    scanf("%d",&numero);

    if(numero > 0){
        printf("O numero eh: positivo\n");
    }

return 0;}
