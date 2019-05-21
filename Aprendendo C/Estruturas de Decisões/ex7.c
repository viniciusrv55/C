/*
    Exercicio 7 - Escreva um programa que leia o sal�rio bruto de um funcionario.
    Calcular o desconto de INSS baseado nas informa��es a seguir:
    -----------------------------------------------------------------
    Salario                                         |   Taxa de INSS
    -----------------------------------------------------------------
    Salario at� R$1.317,07                          | 8% de desconto
    Salario acima de R$1.317,07                     | 9% de desconto
    Salario acima de R$2.195,12                     | 11% de desconto
    ------------------------------------------------------------------
    Apresentar:
    => O valor do s�lario bruto
    => A taxa de INSS
    => O valor do desconto de INSS
    => O valor do s�lario liquido
*/
#include <stdio.h>

int main(){

    float salario,ajuste;

    printf("Digite o seu salario: ");
    scanf("%f",&salario);

    if(salario<=1317.07){
        ajuste = salario - salario*0.08;
        printf("O Sal�rio Bruto eh: %.2f\n",salario);
        printf("A taxa eh: 8%\n");
        printf("O desconto foi de : %.2f\n",salario*0.08);
        printf("O Valor liquido eh: %.2f\n",ajuste);
    }else if(salario>2195.12){
        ajuste = salario - salario*0.11;
        printf("O Sal�rio Bruto eh: %.2f\n",salario);
        printf("A taxa eh: 11%\n");
        printf("O desconto foi de : %.2f\n",salario*0.11);
        printf("O Valor liquido eh: %.2f\n",ajuste);
    }else{
        ajuste = salario - salario*0.09;
        printf("O Sal�rio Bruto eh: %.2f\n",salario);
        printf("A taxa eh: 9%\n");
        printf("O desconto foi de : %.2f\n",salario*0.09);
        printf("O Valor liquido eh: %.2f\n",ajuste);
    }

return 0;}
