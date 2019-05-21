// Exercicio 2 - Entrada e Saida de Dados
/*
    Escreva um programa que calcule e apresente o valor do volume
    de uma lata de azeite de forma cilindrica

    O programa deve utilizar a fórmula: volume = 3.14159 * raio * raio * altura
*/
#include <stdio.h>

int main(){

    float raio,altura,volume;

    printf("Digite o Raio: ");
    scanf("%f",&raio);
    printf("Digite a Altura: ");
    scanf("%f",&altura);

    volume = 3.14159 * raio * raio * altura;

    printf("O Volume eh .: %.2f \n",volume);

return 0;}
