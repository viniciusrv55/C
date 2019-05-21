/*
    Exercicio 1 - Estrutura Condicional Composta por que tem if e else
*/

#include <stdio.h>

int main(){

    int numero;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    if(numero>1000){
        printf("O numero Digitado eh: MAIOR\n");
    }else{
        printf("O numero digitado eh: MENOR\n");
    }

}
