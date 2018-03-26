#include <stdio.h>
#include <stdlib.h>

long fatorial(int);

main(){
	int n;
	do{
		printf("Digiteum numero ou negativo para terminar: ");
		scanf("%d",&n);
		if(n < 0){
			break;
		}
		printf("O fatorial de %d e %d. \n", n,fatorial(n));
	}while(1);
}

long fatorial (int n){
	printf("\n%p\n",&n);
	return ((n == 0) ? (long)1 : (long)n * fatorial(n-1));
}

