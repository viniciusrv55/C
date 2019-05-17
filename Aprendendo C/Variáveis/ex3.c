// Exercicio 3 - Variaveis

/*
    Escreva um programa que calcule e apresente o valor do volume de uma
    lata de azeite de forma cilindrica.

    O programa deve utilizar a formula: volume = 3.14159*raio*raio*altura

    Obs.: Atribua valores para as variaveis raio e altura.
*/

#include <stdio.h>
#define pi 3.14159 //Define é utilizado para definir uma constante

int main(){

    float raio,altura,volume;

    raio = 3.57;
    altura = 10;
    volume = pi*raio*raio*altura;

    printf("O Volume eh ..: %.2f \n",volume);

return 0;}
