/*
    Escreva um programa que leia o c�digo num�rico de um produto e que escreva o nome
    do produtoa que se refere o c�digo.

    Os C�digos podem ser:
    1-Panela
    2-Chaleira
    3-Prato

    Qualquer outro numero digitado dever� informar: C�digo digitado � inv�lido.
*/
#include <stdio.h>

int main(){

    int codProduto;

    printf("Digite o codProduto de 1 a 3: ");
    scanf("%d",&codProduto);

    switch(codProduto){
        case 1:{
            printf("Panela\n");
        }break;
        case 2:{
            printf("Chaleira\n");
        }break;
        case 3:{
            printf("Prato\n");
        }break;
        default:{
            printf("C�digo Digitado eh invalido\n");
        }break;
    }

return 0;}
