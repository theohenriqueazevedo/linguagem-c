#include <stdio.h>
#include <math.h>
int main(){
	int numero;
	double cubica, quarta, soma;

	//printf("Insira o valor inteiro:");
	scanf("%d", &numero);
	
	cubica = pow(numero, 1.0/3.0); //colcoar 1/3 nao pois 1/3 é div de inteiros e isso resultado em 0.333, que é arredondado para 0
	quarta = pow(numero, 1.0/4.0);
	
	soma = cubica + quarta;
	
	
	printf("%.2f\n", soma);
	
	return 0;
}
