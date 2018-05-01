#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j,k;
	while(scanf("%d",&i) != EOF){
		for(k=0;k<i;k++){
			for(j=0;j<i;j++){
				if(k+j==i-1){
					printf("2");
					continue;
				}
				if(k==j){
					printf("1");
				}
				else{
					printf("3");
				}

			}
			printf("\n");
		}
	}
}	