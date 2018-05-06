#include <stdio.h>
#include <math.h>

int main(){
	float x1,x2,y1,y2;
	scanf("%f %f",&x1,&x2);
	scanf("%f %f",&y1,&y2);
	float aux1,aux2;
	aux1 = x2-x1;
	aux2 = y2-y1;
	pow(aux1,2);
	pow(aux2,2);
	aux1+=aux2;
	sqrt(aux1);
	
}