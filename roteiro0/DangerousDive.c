#include <stdio.h>

int main(){
    int vol,sob,i,j,k;
    while(scanf("%d",&vol)!= EOF){
        int bus[vol];
        for(i=0;i<vol;i++){
            bus[i]=i+1;
        }
        scanf("%d",&sob);
        for(i=0;i<sob;i++){
            scanf("%d",&j);
            for(k=0;k<vol;k++){
                if(bus[k]==j){
                    bus[k] = vol+1;
                }
            }
        }
        if(vol==sob){
            printf("*\n");
            continue;
        }
        for(i=0;i<vol;i++){
            if(bus[i]!=vol+1){
                printf("%d ",bus[i]);
            }
        }
        printf("\n");
    }
    
    
}
