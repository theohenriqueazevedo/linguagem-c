#include <math.h>
#include <stdio.h>

int main(){
	#define PI 3.14159
	double graus, sen, COS, tg;
	
	//printf("Insira o valor do angulo em graus: ");
	scanf("%lf", &graus);
	
	sen = sin(PI*graus/180);
	COS = cos(PI*graus/180);
	tg = tan(PI*graus/180);
	
	printf("%.2lf %.2lf %.2lf\n", sen, COS, tg);
	
	return 0;
}	
