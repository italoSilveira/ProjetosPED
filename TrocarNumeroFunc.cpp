#include <stdio.h>

int a,b;

void troca()
{
	int aux;
	aux = a;
	a = b;
	b = aux;
}

int main(){
	printf("Digite dois valores: ");
	scanf("%d %d",&a,&b);
	troca();
	printf("\nValor de A: %d\nValor de B: %d", a, b);
}
