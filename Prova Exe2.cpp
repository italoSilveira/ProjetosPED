#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int testar(int num[]){
	int resultado[2], aux,i,j;
	for(i=0;i<sizeof(num);i++){
		for(j = i+1; j<sizeof(num);j++){
			if(num[j] > num[i]){
				aux = num[i];
				num[i] =  num[j];
				num[j] = aux;
			}
		}
	}
	resultado[0] = num[0];
	resultado[1] = num[(sizeof(num)-1)];
	return *resultado;
}

int main(){
	int num[] = {1,2,3,4,5,6,854};
}
