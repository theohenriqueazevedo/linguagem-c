#include <stdio.h>
#include <math.h>
int main(){
	
	double a, b, c, A, p;
	//printf("Escreva o valor dos tres lados do triangulo:\n");
	
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	
	p = (a+b+c)/2.0;	
	A = sqrt(p * (p-a) * (p-b) * (p-c));

	printf("%.1lf\n", A);
	
	return 0;
}
