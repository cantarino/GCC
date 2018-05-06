#include <stdio.h>

int main(){
	int cons,cont,aux;
	scanf("%d",&cons);
	cont = 7;
	aux=0;
	if(cons>10 && cons<31){
		cont+= cons - 10;
		aux=1;
	}
	if(cons>10 && aux==0){
		cont += 20;
	}
	aux=0;
	if(cons>30 && cons<101){
		cont += 2*(cons-30);
		aux=1;
	}
	if(cons>30 && aux==0){
		cont += 140;
	}
	aux=0;
	if(cons>100){
		cont+=5*(cons-100);
	}
	printf("%d\n",cont);
}