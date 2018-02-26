#include <stdio.h>
#include <stdlib.h>

float soma(float x, float y, float result)
{
	printf("\nEntre com o primeiro numero:");
	scanf("%f", &x);
	
	printf("\nEntre com o segundo numero:");
	scanf("%f", &y);
	
	result=x+y;
	
	return (result);
}

int main()
{
	float primeiro;
	float segundo;
	float resultado;
	
	resultado = soma(primeiro, segundo);
	
	printf("\nA soma dos dois numeros e igual a: %f", resultado);
	
	return 0;
}
