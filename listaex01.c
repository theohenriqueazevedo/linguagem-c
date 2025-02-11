#include <stdio.h>
int main(){
	
	float valor_reais;
	float valor_dolar;
	float cotacao_dolar;
	
	printf("Insira um valor em reais para ser convertido em dolar: \n");
	scanf("%f", &valor_reais);
	
	printf("Digite a cotação do dólar: ");
	scanf("%f", &cotacao_dolar);
	
	
	valor_dolar = valor_reais/cotacao_dolar;
	
	printf("%.2f", valor_dolar);
	

	return 0;
}



