#include <stdio.h>
void soma50pares(){
		int i,soma=0,a=0;
		for((i=0);(i<50);(i++)){
			a=a+2;
			soma=soma+a;
				}
			printf("Soma dos 50 N primeiros pares = %d",soma);
		return;	
}
int main(){
	soma50pares();
	return 0;
}
