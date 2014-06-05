/*12ºFaça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.*/
#include<stdio.h>
float salario(float trabalho_hora, float horas_mes){
return(trabalho_hora*horas_mes);
}
int main(){
	float th,hm;
	printf("Digite o quanto voce ganha por hora trabalhada\n");
	scanf("%f",&th);
	printf("\nDigite quantas horas voce trabalha no mes\n");
	scanf("%f",&hm);
	printf("SALARIO = RS %f",salario(th,hm));	
}
