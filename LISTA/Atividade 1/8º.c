/*8º Faça um Programa que peça as 4 notas bimestrais e mostre a média.*/
#include<stdio.h>
float media(float x1,float x2,float x3,float x4){
return((x1+x2+x3+x4)/4);

}
int main(){
	float n1,n2,n3,n4;
	printf ("Digite 4 Notas\n");
	scanf("\n%f\n%f\n%f\n%f",&n1,&n2,&n3,&n4);	
	printf("Media = %f",media(n1,n2,n3,n4));
} 	
