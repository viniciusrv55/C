#include <stdio.h>

int main(){

    float volume,comprimento,largura,altura; //Declaração

    printf("Digite o valor do comprimento: ");
    scanf("%f",&comprimento);
    printf("Digite o valor da largura: ");
    scanf("%f",&largura);
    printf("Digite o valor de altura: ");
    scanf("%f",&altura);
    volume = comprimento*largura*altura;
    printf("O volume eh..: %.2f \n",volume);

return 0;}
