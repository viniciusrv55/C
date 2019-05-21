/*
    Exercicio 8 - Escreva um programa que leia o salário de um professor, a quantidade
    de horas trabalhadas, e a quantidade de filhos menores de 14 anos.

    Calcular o valor do salário bruto deste professor.(salarioBruto = salarioHora*quantidadeHoras)
    Para calcular o salário familia leve em consideração as informações  a seguir:

    ---------------------------------------------------------------------
    Salario Bruto                             |      Salario Familia
    ---------------------------------------------------------------------
    Salario até R$700,00                      | R$8,50 para cada filho
    Salario acima de R$700,00 até R$1000,00   | R$6,50 para cada filho
    Salario acima de R$1000,00                | R$2,50 para cada filho
    ---------------------------------------------------------------------

    Apresentar:
    => O valor do salario bruto
    => O valor do salario familia(salarioFamilia = valor por cada filho * quantidadeFilhos)
    => O valor do salario liquido
*/
#include <stdio.h>

int main(){

    float salarioBruto,salarioHora,salarioFamilia,salarioLiquido;
    int quantidadeHora,quantidadeFilhos;

    printf("Digite o Salario pago por hora: ");
    scanf("%f",&salarioHora);

    printf("Digite a quantidade de horas trabalhada: ");
    scanf("%d",&quantidadeHora);

    salarioBruto = salarioHora*quantidadeHora;

    printf("Digite a quantidade de Filhos acima de 14 anos: ");
    scanf("%d",&quantidadeFilhos);

    if(salarioBruto<=700){
        salarioFamilia = 8.50*quantidadeFilhos;
        salarioLiquido = salarioBruto + salarioFamilia;
        printf("O salario Bruto eh: %.2f \n",salarioBruto);
        printf("O Valor do Salario Familia: %.2f \n",salarioFamilia);
        printf("O Salario Liquido eh: %.2f \n",salarioLiquido);
    }else if(salarioBruto>1000){
        salarioFamilia = 2.50*quantidadeFilhos;
        salarioLiquido = salarioBruto + salarioFamilia;
        printf("O salario Bruto eh: %.2f \n",salarioBruto);
        printf("O Valor do Salario Familia: %.2f \n",salarioFamilia);
        printf("O Salario Liquido eh: %.2f \n",salarioLiquido);
    }else{
        salarioFamilia = 6.50*quantidadeFilhos;
        salarioLiquido = salarioBruto + salarioFamilia;
        printf("O salario Bruto eh: %.2f \n",salarioBruto);
        printf("O Valor do Salario Familia: %.2f \n",salarioFamilia);
        printf("O Salario Liquido eh: %.2f \n",salarioLiquido);
    }



return 0;}
