#include <stdio.h>

int fibonacci(int a){
	int i,aux1,t;
	if(a==1){
		return 0;
	}
	if(a==2){
		return 1;
	}
	t=0;
	aux1=1;
	for(i=0;i<a-1;i++){
		t+=aux1;
		aux1=t;
		//printf("%d",t);
	}
	return t;
}

int main(){
	int a;
	scanf("%d",&a);
	printf("%d\n",fibonacci(a));
}