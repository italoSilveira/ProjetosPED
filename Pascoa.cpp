#include <stdio.h>
#include <stdlib.h>

int pascoa(int);

main(){
	int ano,data;
	printf("Digite o ano: ");
	scanf("%d",&ano);
	data = pascoa(ano);
	printf("A data � : %.4d (mmdd)!", data);
	
}

int pascoa (int ano){
	int a,b,c,d,e,f,g,h,i,k,l,m,mes,dia,retorno;
	
	a = ano%19;
	b = ano/100;
	c = ano%100;
	d = b/4;
	e = b%4;
	f = (b+8)/25;
	g = (b - f + 1)/3;
	h = (19 * a + b - d - g + 15 )%30;
	i = c/4;
	k = c%4;
	l = (32 + 2 * e + 2 * i - h - k)%7;
	m = (a + 11 * h + 22 * l)/451;
	mes = (h + l - 7 * m + 114)/31;
	dia = ((h + l - 7 * m + 114)%31)+1;
	
	retorno = mes * 100 + dia;
	
	return retorno;
	
}
