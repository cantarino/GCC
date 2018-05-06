#include <stdio.h>

int main(){
	int t1,t2,i,j;
	char c[8];
	char c2[4];
	char c3[2];
	for(i=0;i<8;i++){
		scanf("%d %d",&t1,&t2);
		if(t1>t2){
			c[i] = 65 + 2*i;
		}
		else{
			c[i] = 65 + 2*i + 1;
		}
	}
	for(i=0;i<4;i++){
		scanf("%d %d",&t1,&t2);
		if(t1>t2){
			c2[i] = c[2*i];
		}
		else{
			c2[i] = c[2*i +1];
		}
	}
	for(i=0;i<2;i++){
		scanf("%d %d",&t1,&t2);
		if(t1>t2){
			c3[i] = c2[2*i];
		}
		else{
			c3[i] = c2[2*i + 1];
		}
	}
	scanf("%d %d",&t1,&t2);
	if(t1>t2){
		printf("%c\n",c3[0]);
	}
	else{
		printf("%c\n",c3[1]);
	}
}