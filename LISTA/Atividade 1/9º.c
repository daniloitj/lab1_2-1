/*9ºFaça um Programa que converta metros para centímetros.*/
#include<stdio.h>
float conversao(float M){
return(M*100);

}
int main(){
	float m;
	printf("DIGITE A DISTANCIA EM METROS: \n-->");
	scanf("%f",&m);
	printf("DISTANCIA EM CENTIMETROS = %f",conversao(m));
}
