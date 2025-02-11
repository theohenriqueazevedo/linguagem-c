#include <stdio.h>
int main(){
	
	int dias, km_rodados;
	float precoA, precoB;
	
	//printf("Informe a quantidade de km: \n");
	scanf("%d", &km_rodados);
	
	//printf("Informe a quantidade de dias: \n");
	scanf("%d", &dias);
	
	precoA = 62.0 * dias + 1.4 * km_rodados;
	precoB = 80.0 * dias + 1.2 * km_rodados;
	
	printf("%.2f %.2f", precoA, precoB); 
	

	return 0;
}
