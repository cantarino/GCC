#include <stdio.h>

int main(){
    int r,r2,tA,tB,i,t;
    int a[1000];
    int b[1000];
    int p[100];
    scanf("%d",&r);
    r2=1;
    if(r==0)
        return 0;
    while(r>0){
        t=r;
        while(r>0){
            scanf("%d %d",&a[t-r],&b[t-r]);
            r--;
        }
        scanf("%d",&r);
        r2++;
        tA=tB=0;
        for(i=0;i<t;i++){
            tA+=a[i];
        }
        for(i=0;i<t;i++){
            tB+=b[i];
        }
        if(tA>tB){
            p[r2-2]=1;
        }
        if(tB>tA){
            p[r2-2]=0;
        }
    }
    for(i=0;i<r2-1;i++){
        printf("Teste %d\n",i+1);
        if(p[i]==1){
            printf("Aldo\n\n");
        }
        if(p[i]==0){
            printf("Beto\n\n");
        }
    }
    
}