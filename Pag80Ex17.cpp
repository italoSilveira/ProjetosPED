// Página 80 Exercício 17
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main(){
	char aux[100];
	int numero;
	int i;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);
	
	sprintf(aux,"%d",numero);

	printf("O inverso e:");
	
	for(i=strlen(aux);i>=0;--i){
		printf("%c",aux[i]);
	}
  		
}

