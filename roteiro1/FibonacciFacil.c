#include <stdio.h>

int main(){
	long int a,i;
	long int fib[46];
	fib[0] = 0;
	fib[1] = 1;
	scanf("%ld",&a);
	for(i=0;i<a-1;i++){
		printf("%ld ",fib[i]);
		if(i>0)
			fib[i+1] = fib[i] + fib[i-1];
	}
	printf("%ld",fib[i]);
	printf("\n");
}