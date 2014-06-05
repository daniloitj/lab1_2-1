/*As tarifas de certo parque de estacionamento são as seguintes: 1.a e 2.a hora - R$ 
1,00 cada 3.a e 4.a hora - R$ 1,40 cada 5.a hora e seguintes - R$ 2,00 cada. O numero 
de horas a pagar é sempre inteiro e arredondado por excesso. Deste modo, quem 
estacionar durante 61 minutos pagara por duas horas, que é o mesmo que pagaria se 
tivesse permanecido 120 minutos. Os momentos de chegada ao parque e partida deste 
são apresentados na forma de pares de inteiros, representando horas e minutos.Por 
exemplo, o par 12 50 representara ”dez para a uma da tarde”. Pretendesse um 
programa que, lidos pelo teclado os momentos de chegada e de partida, escreva na tela 
o preço cobrado pelo estacionamento. Devera haver validação de dados. Admite-se que 
a chegada e a partida se dão com intervalo não superior a 24 horas (mas cujo controle 
de verificação não passa pelo programa aqui em causa). Portanto, se uma dada hora 
de ˜chegada for superior a da partida, isso não é uma situação de erro, signi?cará que a 
partida ocorreu no dia seguinte ao da chegada.*/
#include <stdio.h>
typedef struct Entrada {
	char HORA_entrada[2], MINUTO_entrada[2];
};
	int i;
	for (i=0;i<2;i++){
		printf("Digite o horario de entrada do %d carro\n",i+1);
		scanf("Horas ->")
		scanf("%c",&HORA_entrada[i]);
		printf("Minutos -> ");
		scanf("%c",&MINUTO_entrada[i]);
		return(menu);
	}
}
typedef struct saida {
 	char HORA_saida[2], MINUTO_saida[2])
 	};
	for (i=0;i<2;i++){
	printf("Digite o horario de Saida do carro\n");
	scanf("Horas ->")
	scanf("%c",&HORA_saida);
	printf("Minutos -> ");
	scanf("%c",&MINUTO_saida);
	return(menu);
}

int converte_horas(char horas[2],char minutos[2]){
	return(horas*60+minutos);
}
int main(menu){
	printf("1-Hora de Entrada dos carros\n2-Hora de saida dos carros");
	scanf("%d",&opcao);
	if opcao==1{
	entrada;
	}
	else{
	saida;	
	}
}

