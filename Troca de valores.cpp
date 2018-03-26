#include <stdio.h>
#include <stdlib.h>

void troca (int a, int b){
	int aux = a;
	a = b;
	b = aux;
	printf("O valor de a e: %d e o endereco de a e %d \n", a, &a);
}

main(){
	int x = 1, y = 2;
	printf("O valor de x e: %d e o endereco de x e %d \n", x, &x);
	troca(x,y);
	printf("O valor de x e: %d e o endereco de x e %d \n", x, &x);
}


