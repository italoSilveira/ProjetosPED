// Resultado 
#include <stdio.h>
main(){
	float nota_final, carga, faltas, max_faltas, aux;
	
	printf("Digite a nota final: ");
	scanf("%f",&nota_final);
	
	printf("Digite a carga horaria: ");
	scanf("%f",&carga);
	
	printf("Digite o numero de faltas: ");
	scanf("%f",&faltas);
	
	max_faltas = carga - (carga * 75 / 100);
	aux = faltas * 0.83;
	
	if(nota_final >= 70){
		if(aux <= max_faltas){
			printf("Voce foi aprovado!");
		}
		else{
			printf("Voce foi reprovado");
		}
	}
	else if(nota_final >= 45){
		if(aux <= max_faltas){
			printf("Voce deverá realizar o exame especial!");
		}
		else{
			printf("Voce foi reprovado");
		}
	}
	else
	{
		printf("Voce foi reprovado");
	}
}
