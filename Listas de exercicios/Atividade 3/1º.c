#include <stdio.h>
#include <conio.h>
	int maior=0;
	int menor=100000;
int numeros(int num){
	if (num>=maior)
		maior=num;			
	else{
		if ((num<=menor)&& (num>=0))
		menor=num;	
	}	
	if (num<0){
		printf("O maior numero da sequencia = %d",maior);
		printf("\nO menor numero da sequencia = %d",menor);
	}
}
int main(){
	int NUM;
	NUM=0;
	printf("Digite uma sequencia de numeros\n");
	while (NUM>=0){
		scanf("%d",&NUM);
		numeros(NUM);
	}
	return 0 ;
}
