#include <stdio.h>

int main(){
	
	float diferenca, diaria, diaria_promo, valor_arrecadado1, valor_arrecadado2;
	
	printf("Insira o valor normal da diaria: ");
	scanf("%f", &diaria);
	
	diaria_promo = diaria - (25.0/100.0 * diaria);
	valor_arrecadado1 = 80.0/100.0 * 80.0 * diaria_promo;
	valor_arrecadado2 = 50.0/100.0* 80.0 * diaria;
	diferenca = valor_arrecadado1 - valor_arrecadado2;
	
	
	printf("Valor da diaria promocional: %.2f reais \n\n", diaria_promo); //letra a
	
	
	printf("Valor arrecadado com 80 de ocupação e diaria promocional (valor1): %.2f reais\n\n", valor_arrecadado1); //letra b
	
	
	printf("Valor arrecadado com 50 de ocupação e diaria normal(Valor2): %.2f reais\n\n", valor_arrecadado2); //letra c
	
	printf("A diferença entre valor1 e valor 2 é: %.2f\n reais", diferenca);
	
	
	return 0;
}	
