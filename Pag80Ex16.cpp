// Página 80 exercício 16
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main(){
	unsigned char ch;
	
	while(ch != 27)
	{
		printf(" %c ", ch >= 97 && ch <= 123 ? ch - 32 : ch );
		
		ch = getch();
	}
}
	
