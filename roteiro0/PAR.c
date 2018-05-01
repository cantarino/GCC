#include <stdio.h>

int main(){
    char n1[10];
    char n2[10];
    int i,j,j1,j2,t,s;
    t=0;
    scanf("%d",&j);
    while(j>0){
        scanf("%s",n1);
        scanf("%s",n2);
        printf("Teste %d\n",t+1);
        for(i=0;i<j;i++){
            scanf("%d",&j1);
            scanf("%d",&j2);
            s = j1+j2;
            if(s%2==0){
                printf("%s\n",n1);
            }
            else{
                printf("%s\n",n2);
            }
        }

        scanf("%d",&j);
        if(j>0){
        	printf("\n");   
        }     
        t++;
    }
}
