#include <stdio.h>

int main() {
	
	float peso_de_peixes, multa, excesso ;
	
	printf("Informe a quantidade de peixes pescado:");
	scanf("%f", &peso_de_peixes);
	
	excesso = peso_de_peixes - 50 ;
	multa = 4.00 * excesso ;
	
	if (peso_de_peixes > 50){
	  printf("A multa a ser paga eh = %f", multa);
	  printf("O excesso de KG = %f", excesso);
	}
	else{
	  printf("Nao ah multa!");
	}
	
	return 0;
}
