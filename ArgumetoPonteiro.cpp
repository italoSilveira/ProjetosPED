/* Ponteirocons.c*/
/* Mostra o uso de ponteiros em variaveis */

#include <stdio.h>
#include <stdlib.h>

void reajusta20(float *, float *); /* Prototipo */

int main(){
float val_preco, val_reaj;
do{
	system ("color 9f");
	printf("\n Insira o preco atual:");
	scanf("%f", &val_preco);
	reajusta20 (&val_preco, &val_reaj); //enviando endereços
	printf("\nO novo preco e:%.2f\n",val_preco);
	printf("\n O aumento foi de e:%.2f\n",val_reaj);
}while(val_preco != 0.0);

system("pause");
return 0;
}
/* Reajusta20() *//* Reajusta o preço em 20% */

void reajusta20(float *preco, float *reajuste){
*reajuste = *preco * 0.2;
*preco *= 1.2;
}
