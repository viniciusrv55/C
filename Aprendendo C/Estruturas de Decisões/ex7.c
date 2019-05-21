/*
    Exercicio 7 - Escreva um programa que leia o salário bruto de um funcionario.
    Calcular o desconto de INSS baseado nas informações a seguir:
    -----------------------------------------------------------------
    Salario                                         |   Taxa de INSS
    -----------------------------------------------------------------
    Salario até R$1.317,07                          | 8% de desconto
    Salario acima de R$1.317,07                     | 9% de desconto
    Salario acima de R$2.195,12                     | 11% de desconto
    ------------------------------------------------------------------
    Apresentar:
    => O valor do sálario bruto
    => A taxa de INSS
    => O valor do desconto de INSS
    => O valor do sálario liquido
*/
#include <stdio.h>

int main(){

    float salario,ajuste;

    printf("Digite o seu salario: ");
    scanf("%f",&salario);

    if(salario<=1317.07){
        ajuste = salario - salario*0.08;
        printf("O Salário Bruto eh: %.2f\n",salario);
        printf("A taxa eh: 8%\n");
        printf("O desconto foi de : %.2f\n",salario*0.08);
        printf("O Valor liquido eh: %.2f\n",ajuste);
    }else if(salario>2195.12){
        ajuste = salario - salario*0.11;
        printf("O Salário Bruto eh: %.2f\n",salario);
        printf("A taxa eh: 11%\n");
        printf("O desconto foi de : %.2f\n",salario*0.11);
        printf("O Valor liquido eh: %.2f\n",ajuste);
    }else{
        ajuste = salario - salario*0.09;
        printf("O Salário Bruto eh: %.2f\n",salario);
        printf("A taxa eh: 9%\n");
        printf("O desconto foi de : %.2f\n",salario*0.09);
        printf("O Valor liquido eh: %.2f\n",ajuste);
    }

return 0;}
