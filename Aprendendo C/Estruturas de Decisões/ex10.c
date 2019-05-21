/*
    Escreva um programa que leia um numero inteiro.

    Vamos supor que seja digitado um numero entre 0 e 10(inclusive)

    Escrever na tela o numero digitado por extenso.
*/

#include <stdio.h>

int main(){

    int numero;

    printf("Digite um numero de 1 a 10: ");
    scanf("%d",&numero);

    switch(numero){
        case 0:{
            printf("ZERO\n");
        }break;
        case 1:{
            printf("UM\n");
        }break;
        case 2:{
            printf("DOIS\n");
        }break;
        case 3:{
            printf("TRES\n");
        }break;
        case 4:{
            printf("QUATRO\n");
        }break;
        case 5:{
            printf("CINCO\n");
        }break;
        case 6:{
            printf("SEIS\n");
        }break;
        case 7:{
            printf("SETE\n");
        }break;
        case 8:{
            printf("OITO\n");
        }break;
        case 9:{
            printf("NOVE\n");
        }break;
        case 10:{
            printf("DEZ\n");
        }break;
        default:{
            printf("NUMERO FORA DA FAIXA DE 0 A 10\n");
        }break;
    }

return 0;}
