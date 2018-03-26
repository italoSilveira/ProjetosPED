#include <stdio.h>
#include <string.h>

char palindromo(char string[0]){
	char invertido[strlen(string)];
	int j = 0,i;
	
	for(i = strlen(string); i >= 0; i--)
	{
		if (string[i] != '\0')
		{
			invertido[j] = string[i];
			j++;
		} 
	}
	
	invertido [j] = '\0';
	
	if(strcmp(string,invertido) == 0){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	char string[0];
	printf("\nDigite uma palavra: ");
	gets(string);
	if(palindromo(string) == 1){
		printf("\nA palavra e um palindromo");
	}
	else{
		printf("\nA palavra nao e um palindromo");
	}
}
