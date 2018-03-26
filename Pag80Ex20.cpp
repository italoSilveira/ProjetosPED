// Página 80 Exercício 20
#include <stdio.h>

main(){
	int numero, i, primeiro = 0, segundo = 1, fibonacci = 0;
	
	printf("Digite um numero da sequencia: ");
	scanf("%d", &numero);
	
	for(i=0;i<numero;i++){

		fibonacci = primeiro + segundo;
		primeiro = 	segundo;
		segundo = fibonacci;
		printf("\n%d ", fibonacci);
	}
	//printf("O numéro da sequencia de fibonacci e: %d ", fibonacci);
	
	
}

