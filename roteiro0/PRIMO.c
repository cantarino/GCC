#include <stdio.h>

int main(){
	int n,d;
	scanf("%d",&n);
	if(n<0){
		n*=-1;
	}
	if(n==1){
		printf("nao\n");
		return 0;
	}
	for(d=2;n>1;d++){
		if(n%d==0){
			if(n==d){
				printf("sim\n");
				return 0;
			}
			if(n!=d){
				printf("nao\n");
				return 0;
			}

		}
	}

}