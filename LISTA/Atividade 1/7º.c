/* 7ºFaça um Programa que peça dois números e imprima a soma.*/
#include<stdio.h>
float soma(float x,float y){
	return(x+y);
	}
int main(){
	float num1,num2;
	printf("Digite dois numeros\n");
	scanf("%f%f",&num1,&num2);
	printf("Resultado = %f\n",soma(num1,num2));
	system("pause");
}
