#include <stdio.h>

int main(){
	int idade, anos, meses, dias; //int para arredondar
	
	//printf("Insira a sua idade em dias: ");
	scanf("%d", &idade);
	
	anos = idade/365;  //res é 21. resto da div de: idade/365 = 125dias
	meses = (idade%365)/30; //res é 4
	dias = (idade%365)%30;
	
	
	
	printf("%d %d %d \n", anos, meses, dias);
	

	return 0;
}	
	

