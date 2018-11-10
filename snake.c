#include <stdio.h>

int main(){
    int n,m,aux1=1,aux2=1;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(aux1%2==1)
                printf("#");
            if(aux1%2==0){
                if(aux2%2==1){
                    if(j+1 == m)
                        printf("#");
                    else
                        printf(".");
                }
                if(aux2%2==0){
                    if(j == 0)
                        printf("#");
                    else
                        printf(".");
                }
            }
        }
        if(aux1%2==0)
            aux2++;
        aux1++;
        printf("\n");
    }
    return 0;
}