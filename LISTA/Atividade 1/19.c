/*Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. 
Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, 
faça um programa que nos dê:
salário bruto.
quanto pagou ao INSS.
quanto pagou ao sindicato.
o salário líquido.
calcule os descontos e o salário líquido, conforme a tabela abaixo:
+ Salário Bruto : R$
- IR (11%) : R$
- INSS (8%) : R$
- Sindicato ( 5%) : R$
= Salário Liquido : R$
Obs.: Salário Bruto - Descontos = Salário Líquido.*/
#include <stdio.h>
int main(){
    const float ir=0.11;
    const float inss=0.08;
    const float sindicato=0.05;
    float horastrabalhada,horasmes,salariobruto,descontos,salarioliquido;
    printf("Quanto voce ganha por hora trabalhada?");
    scanf("%f",&horastrabalhada);
    printf("\nQuanto horas voce trabalha por mes?\n");
    scanf("%f",&horasmes);
    salariobruto=(horasmes*horastrabalhada);    
    descontos=((salariobruto*ir)+(salariobruto*inss)+(salariobruto*sindicato));
    salarioliquido=salariobruto-descontos;
    printf("\nSalario bruto = R$ %.2f",salariobruto);
    printf("\nIR = R$ %.2f",salariobruto*ir);
    printf("\nINSS = R$ %.2f",salariobruto*inss);
    printf("\nSindicato = R$ %.2f",salariobruto*sindicato);
    printf("\nSalario liquido = R$ %.2f\n",salarioliquido);
    system("pause");
} 
