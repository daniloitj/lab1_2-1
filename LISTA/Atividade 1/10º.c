/*10º Ler o valor do raio de um circulo e calcular a área do circulo correspondente, considere  = 3:141592*/
#include<stdio.h>
float area_circuferencia(float R){
return(3.14*R*R);
}
int main(){
	float r;
	printf("DIGITE  VALOR DO RAIO DA CIRCUFERENCIA\n");
	scanf("%f",&r);
	printf("AREA DA CIRCUFERENCIA = %f",area_circuferencia(r));
	system("pause");
}
