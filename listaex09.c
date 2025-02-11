#include <stdio.h>

int main(){
	
	int idade_em_dias, anos, meses, dias;
	
	//printf("Insira o valor da idade por meio de anos, meses e dias, respectivamente:\n");
	
	scanf("%d", &anos);
	scanf("%d", &meses);
	scanf("%d", &dias);
	
	idade_em_dias = anos*365 + meses*30 + dias;
	
	printf("%d\n", idade_em_dias);

	return 0;
}	
