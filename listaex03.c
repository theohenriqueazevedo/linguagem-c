#include <stdio.h>
#include <math.h>
int main(){
	float peso;
	int gotas_por_quilo;
	
	//printf("Insira o peso:");
	scanf("%f", &peso);
	
	gotas_por_quilo = ceil(peso*2.5);     //2.5 gotas/kg
	
	printf("%d\n", gotas_por_quilo);		
	
	return 0;
} 


