#include <stdio.h>
#include <stdlib.h>

int fibonacci (int numero){
	if(numero == 0)
		return 0;
	else if (numero == 1)
		return 1;
	else
		return (fibonacci(numero-1) + fibonacci(numero-2)); 
	
}

main(){
	int numero,res;
	do{
		printf("Digite um valor: ");
		scanf("%d", &numero);
		for(int i = 0; i < numero; i++){
			printf("%d ", fibonacci(i));
		}
		printf("\n\n\n\n");
	}while(numero > 0);
	
}
