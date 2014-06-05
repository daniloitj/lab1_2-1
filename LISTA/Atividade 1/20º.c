/*20° Faça um programa que peça o tamanho de um arquivo para download (em MB) e a velocidade de um link de Internet (em Mbps), calcule e informe o tempo aproximado de download do arquivo usando este link (em minutos).*/ 
#include <stdio.h>
int main(){
	int tam,vel;
	printf("Digite o tamanho do arquivo em mb\n");
	scanf("%d", &tam);
	printf("Digite a velocidade do link\n");
	scanf("%d", &vel);
	printf("velocidade do download = %d minutos ",(tam*vel)/60);
	system("pause");
}
