#include <stdio.h>

int main() {
	int n_pecas, tempo_total, tempo_min, tempo_h, tempo_s;
	
	printf("Insira a qntd de peças: ");
	scanf("%d", &n_pecas);
	
	tempo_total = 17 * n_pecas;
	tempo_h = tempo_total / 3600;
	tempo_min = tempo_total / 60;
	tempo_s = tempo_total % 60;
	
	printf("%d %d %d", tempo_h, tempo_min, tempo_s);
	

	return 0;
}	//8 0 2 16
