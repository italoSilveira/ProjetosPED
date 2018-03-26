#include <stdio.h>
#include <stdlib.h>

int testar(int);

main(){
	int a, aux;
	printf("Digite um valor inteiro: ");
	scanf("%d",&a);
	aux = testar(a);
	aux == 1 ? printf("E um numero primo") : printf("Nao e um numero primo");
}

int testar (int a){
	for(int i = 1; i <= 9; i++){
		if((a%i == 0) && (a != i) && (i != 1)){
			return 0;
		}
		else if((a%i != 0) && (i == 9))
		{
			return 1;
		}
	}
}
