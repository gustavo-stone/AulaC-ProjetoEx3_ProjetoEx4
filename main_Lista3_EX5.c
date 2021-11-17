#include <stdio.h>

int main() {
	
	float salario, reajuste, salario_reajuste ;
	int qtdeDias ;
	
	printf("Informe o numero de dias trabalhados:");
	scanf("%i", &qtdeDias);
	
	 salario = 200.00 * qtdeDias ;
	 reajuste = salario * 0.2 ;
	 salario_reajuste = reajuste + salario ; 
	 
	if (salario >= 1000.00){
		printf("Salario sem reajuste = %f", salario);
	}
	else{
		printf("O salario com reajuste foi: %f", salario_reajuste);
	}
	return 0;
}
