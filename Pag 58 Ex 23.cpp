//Treinamento em linguagem C Exercício 23 página 58
#include <stdio.h>
#include <stdlib.h>

main(){
	int dias;
	float valor, desconto, valor_final;
	
	printf("Digite os dias trabalhados: ");
	scanf("%d", &dias);
	
	valor = dias * 20.00;
	
	desconto = valor * 8 / 100;
	
	valor_final = valor - desconto;
	
	printf("\nO valor liquido e: %.2f", valor_final);
}
