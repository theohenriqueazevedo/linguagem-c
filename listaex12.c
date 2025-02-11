#include <stdio.h>

int main(){
	double v0, v1, v2;
	
	printf("Insira o valor de v1: \n");
	scanf("%lf", &v1); 
	
	printf("Insira o valor de v2: \n");
	scanf("%lf", &v2); 
	
	v0 = v1; //v1 vazio e v0 tem valor do v1
	v1 = v2; //v1 recebe valor de v2 e v2 esta vazio
	v2 = v0; //v2 estava azio e v0 estava com valor de v1
	
	printf("valor de v1 e v2, respectivamente: %lf %lf", v1, v2);
	
	
	return 0;
}	
