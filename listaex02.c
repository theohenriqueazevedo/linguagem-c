#include <stdio.h>
#include <math.h>
int main(){
	double prod;
	int desconto;
	float valor_desconto;
	
	//printf("Insira o valor do produto: \n");
	scanf("%lf", &prod);
	
	//printf("Insira a porcentagem de desconto: \n");
	scanf("%d", &desconto);
	
	
	valor_desconto = ((double)(desconto/100.0)) * prod;
	
	
	printf("%.2f %.2f\n", prod, valor_desconto);
	

	return 0;
}	//79.90 15 res = 79.90 11.98
