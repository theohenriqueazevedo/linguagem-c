#include <math.h>
#include <stdio.h>

int main(){

	double volume, raio;
	
	printf("Insira o valor do raio: \n");
	scanf("%lf", &raio);
	
	volume = (4 * acos(-1) *raio*raio*raio) / 3;
	
	printf("O valor do volume da esfera é: %lf\n", volume);
	
	
	return 0;
}	
