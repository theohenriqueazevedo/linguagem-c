#include <math.h>
#include <stdio.h>


int main(){
	
	double volume, raio, altura;
	
	printf("EScreva o valor do raio: \n");
	scanf("%lf", &raio);
	
	printf("Escreva o valor da altura: \n");
	scanf("%lf", &altura);
	
	volume = acos(-1) * raio * raio * altura;
	
	printf("O volume do cilindro é: %.2lf \n", volume);
	
	return 0;
}	
