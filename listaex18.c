#include <stdio.h>

int main() {
	
	int larg, comprimento, area, pot_ideal;
	
	printf("Insira a largura:");
	scanf("%d", &larg);
	
	printf("Insira o valor do comprimento:");
	scanf("%d", &comprimento);
	
	area = larg * comprimento;
	pot_ideal = area * 18;
	
	printf("%d %d", area, pot_ideal);


	return 0;
}	
