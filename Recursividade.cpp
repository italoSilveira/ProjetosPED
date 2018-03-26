#include <stdio.h> 
#include <stdlib.h>

int mdc(int m, int n){
	int r = m%n; 
	if(r == 0)
		return n; 
	return mdc(n, (m%n));
}

main(){
	int a=544;
	int b=119;
	printf("%d \n", mdc(a, b));
	system("pause");
}
