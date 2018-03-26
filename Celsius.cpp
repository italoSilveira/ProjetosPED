#include <stdio.h>
#include <stdlib.h>

float celsius(float);

main(){
	float c, f;
	printf("Digite a temperatura em Fahrenheit: ");
	scanf("%f",&f);
	
	c = celsius(f);
	
	printf("Celsius = %.2f\n", c);
	
	system("PAUSE");
}

float celsius (float fahr){
	float c;
	c = (fahr - 32.0) * 5.0/9.0;
	return c;
}
