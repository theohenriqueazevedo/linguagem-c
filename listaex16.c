#include <stdio.h>

int main() {
    float n1, n2;
    
    scanf("%f", &n2); //n2 recebe o 1 valor
    
    n1 = n2; //n2 esta vazio e n1 tem o 1 valor
    
    scanf("%f", &n2); //n2 tem o segundo valor
    
    n2 = n2 + n1; // n2 é a soma dos dois valores
    
    scanf("%f", &n1);  //n1 recebe o 3 valor
    
    n2 = (n1 + n2) / 3.0;
    
    printf("%f", n2);
    
	 	
	
	return 0;
} 


