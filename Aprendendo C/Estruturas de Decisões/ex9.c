/*
    Escreva um programa que leia o código numérico de um produto e que escreva o nome
    do produtoa que se refere o código.

    Os Códigos podem ser:
    1-Panela
    2-Chaleira
    3-Prato

    Qualquer outro numero digitado deverá informar: Código digitado é inválido.
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
            printf("Código Digitado eh invalido\n");
        }break;
    }

return 0;}
