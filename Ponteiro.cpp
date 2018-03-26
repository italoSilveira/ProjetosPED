#include <stdio.h>

int main(){
	int x = 20,y = 10,aux;
	int *px, *py, *paux;
	
	px = &x;
	py = &y;
	paux = &aux;
	
	*paux =  *px;
	*px = *py;
	*py = *paux;
	
	printf("O valor de X e: %d \nO valor de Y e: %d",*px,*py);
}
