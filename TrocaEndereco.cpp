#include <stdio.h>

void troca (int &a, int &b)
{
	int aux;
	aux = a;
	a = b;
	b = aux;
}

int main(){
	int a, b;
	printf("Digite dois valores: ");
	scanf("%d %d",&a,&b);
	troca(a,b);
	printf("\nValor de A: %d\nValor de B: %d", a, b);
}
