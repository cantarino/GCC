#include <stdio.h>
#include <string.h>

int main(){
    int n;
    int v[100];
    memset(v,0,100*sizeof(int));
    scanf("%d",&n);
    while(n!=0){
        int m,a = 1,cont = 0;
        v[0] = 1;
        for(m=1; 1;m++){
            while(a!=13 && cont < n){
                for(int i=0;i<m;i++,a++){
                    int b = a%n;
                    if(v[b] == 1)
                        i--;
                }
                cont++;
                v[(a - 1)%n] = 1;
                if(a>n)
                    a =a%n;
            }
            cont = 0;
            for(int i=0;i<n;i++)
                if(v[i] == 1)
                    cont++;
            memset(v,0,100*sizeof(int));
            if(cont==n)
                break;
            cont = 0;
            a = 1;
            v[0] = 1;
        }
        printf("%d\n",m);
        scanf("%d",&n);
    }
    return 0;
}
