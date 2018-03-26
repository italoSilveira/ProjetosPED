//Treinamento em linguagem C Exercício 18 página 58
#include <stdio.h>
#include <stdlib.h>

main(){
	float volume, altura, raio;
	
	printf("Digite a altura do cilindro: ");
	scanf("%f", &altura);
	
	printf("Digite o raio do cilindro: ");
	scanf("%f", &raio);
	
	volume = 3.141592 * raio * raio * altura;
	
	printf("\n\n\nO volume do cilindro: %f", volume);
}
