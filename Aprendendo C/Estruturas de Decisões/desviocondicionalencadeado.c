#include <stdio.h>

int main(){

    int numero;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    if(numero>0){
        printf("Numero eh: POSITIVO\n");
    }else if(numero<0){
        printf("Numero eh: NEGATIVO\n");
    }else{
        printf("este numero eh: ZERO\n");
    }

return 0;}
