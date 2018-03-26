#include <stdio.h>
#include <stdlib.h>
typedef struct{
	char marca[10];
	char versao[10];
	char motor[10];
} Modelo;

typedef struct{
	char placa[9];
	int ano;
	Modelo modelo;
} Carro;

int main(){
	
	Carro Teste[3];
	printf("Digite a placa, ano , marca, versao e motor: ");
	scanf("\n%s %d %s %s %s",&Teste.placa,&Teste.ano,&Teste.modelo.marca,&Teste.modelo.versao,&Teste.modelo.motor);
	
	printf("\nA placa e: %s",Teste.placa);
	printf("\nO ano e: %d",Teste.ano);
	printf("\nA marca e: %s",Teste.modelo.marca);
	printf("\nA versao e: %s",Teste.modelo.versao);
	printf("\nO motor e: %s",Teste.modelo.motor);
}
