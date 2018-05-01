#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//NUMEROMG SPOJ

int converte(char * a){
	int i,tA;
	for(i=0;a[i]!='\0';i++){
		if(47<a[i] && 58>a[i]){
			tA += (int)a[i] - 48;
		}
		else{
			tA += (int)a[i] - 55;
		}
	}
	return tA;
}

void converte2(int soma){
	int i;
	char c;
	for(i=0;soma/36!=0;i++){
		(int)c[i] = soma%36;
		soma = soma/36;
	}
}

int main(){
	char a[6];
	char b[6];
	int tA,tB,i,soma;
	scanf("%s %s",a,b);
	while(a>0){
		tA = converte(a);
		tB = converte(b);
		soma = tA + tB;
		if(soma<10){
			printf("%d\n",soma);
		}
		else{
			converte2(soma);
		}
	}
}