/*11º Faça um Programa que leia o tamanho de um lado do quadrado e calcule sua área, em seguida mostre o dobro desta área para o usuário*/
#include<stdio.h>
float area_quadrado(float L){
	return((L*L)/2);
}
int main(){
	float l;
	printf("Digite o valor de um dos lados do quadrado\n");
	scanf("%f",&l);
	printf("AREA DO QUADRADO = %f\n",area_quadrado(l));
	printf("DOBRO DA AREA DO QUADRADO = %f\n",2*(area_quadrado(l)));
	system("pause");
}

