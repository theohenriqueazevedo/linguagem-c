#include <stdio.h>

int main() {
	int porcentagemfaltas, cargatotal, horasfaltas;
	
	//printf("Insira a carga horario total da disciplinha:");
	scanf("%d", &cargatotal);
	
	//printf("Insira a quantidade de horas de faltas acumuladas:");
	scanf("%d", &horasfaltas);
	
	
	
	porcentagemfaltas = (horasfaltas * 100)/cargatotal;
	
	printf("%d", porcentagemfaltas);
	

	return 0;
	
 }  

 
