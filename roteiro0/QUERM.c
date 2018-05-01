#include <stdio.h>

int main(){
	int ent,gan,i,p,t;
	ent =1;
	t=1;
	while(ent!=0){
		scanf("%d",&ent);
		if(ent==0){
			break;
		}
		for(i=0;i<ent;i++){
			scanf("%d",&p);
			if(p==i+1){
				gan=p;
			}
		}
		printf("Teste %d\n%d\n\n",t,gan);
		t++;
	}
}