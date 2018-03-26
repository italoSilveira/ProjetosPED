#include <stdio.h>
#include <stdlib.h>

float somar(float, float), subtrair(float, float), dividir(float, float), multiplicar(float, float), a, b;
void menu(), perguntar();

main(){
	int option;
	float div, resultado;
	
	do
	{
		menu();
		scanf("%d", &option);
		system("cls");
		menu();
		
		if(option == 1){
			perguntar();
			resultado = somar(a, b);
			printf("Soma = %.2f\n", resultado);
		}
		else if(option == 2){
			perguntar();
			resultado = subtrair(a, b);
			printf("Subtracao = %.2f\n", resultado);
		}
		else if(option == 3){
			perguntar();
			if(a == 0 || b == 0)
			{
				printf("Nao pode dividir numero por zero!\n");
			}
			else
			{
				div = dividir(a, b);
				printf("Divisao = %.2f\n", div);
			}
		}
		else if(option == 4){
			perguntar();
			resultado = multiplicar(a, b);
			printf("Multiplicacao = %.2f\n", resultado);
		}
		else{
			printf("Escolha uma opcao valida !\n");
		}
		system("PAUSE");
		system("cls");
		
	}while(option != 0);
}

float somar (float a, float b){
	return a + b;
}

float subtrair (float a, float b){
	return a - b;
}

float multiplicar (float a, float b){
	return a * b;
}

float dividir (float a, float b){
	return a / b;
}

void menu(){
	printf("\n\tMenu\n");
	printf("1) Somar dois numeros\n");
	printf("2) Subtrair dois numeros\n");
	printf("3) Dividir dois numeros\n");
	printf("4) Multiplicar dois numeros\n");
	printf("0) Sair\n\n");
}

void perguntar(){
	printf("Digite dois numeros:\n");
	scanf("%f %f",&a, &b);
}
