#include <stdio.h>
int main(){
	double custo_fabricacao, custo_final;
	
	//printf("Insira o valor do custo de fabricação: ");
	scanf("%lf", &custo_fabricacao);
	
	custo_final = custo_fabricacao + 0.28*custo_fabricacao+ 0.45*custo_fabricacao;
	
	printf("%.2lf", custo_final);



	return 0;
} //22704.81

	

//39279.32

