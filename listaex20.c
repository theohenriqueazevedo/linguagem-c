#include <stdio.h>

int main() { 
	int aula;
	double ganho_total, gasto_mat, saldo;
	
	printf("Insira o numero de aulas ministradas:");
	scanf("%d", &aula);
	
	ganho_total = aula * 50;
	gasto_mat = 15.0/100.0 * ganho_total;
	saldo = ganho_total - gasto_mat;
	
	printf("%.2lf\n", ganho_total);
	printf("%.2lf\n", gasto_mat);
	printf("%.2lf\n", saldo);
	

	return 0;
}	
