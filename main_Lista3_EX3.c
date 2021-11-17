#include <stdio.h>

int main() {
	
	float H, homem, mulher ;
	char sexo ;
	
	printf("Informe sua altura: ");
	scanf("%f", &H);
	
	printf("Informe seu sexo: ");
	scanf("%c", &sexo);
	
	homem = (72.7 * H) - 58 ;
	mulher = (62.1 * H) - 44.7 ;
	
	if (sexo = homem){
		printf("Seu peso ideal eh = ");
	}
	else {
	   printf("Seu peso ideal eh = "); 
	}
	
	return 0;
}
