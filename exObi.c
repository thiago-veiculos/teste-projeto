#include <stdio.h>
#include <stdlib.h>

int main(){

	int distancia;

	system("clear");

	printf("Digite a distancia em que a bola foi lançada: ");
	scanf("%i", &distancia);

	if(distancia > 0 && distancia <= 800){
		printf("\nVoce marcou 1 ponto!");
	}
	else if(distancia > 800 && distancia <= 1400){
		printf("\nVoce marcou 2 pontos!");
	}
	else if(distancia > 1400 && distancia <= 2000){
		printf("\nVoce marcou 3 pontos!");
	}
	else{
		printf("\nVoce esta fora da quadra!");
	}

	printf("\n");

	return 0;
}