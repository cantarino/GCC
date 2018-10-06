#include <stdio.h>

int main(){
    int inicio[24], fim[24];
    int n,a;
    while(scanf("%d",&n)!=EOF){
        int ult = 0;
        for(int i=0;i<n;i++){
            scanf("%d",&a);
            inicio[i] = a;
        }
        for(int i=0;i<n;i++){
            scanf("%d",&a);
            fim[i] = a;
        }
        for(int i=0;i<n;i++){
            if(inicio[i]!=fim[i]){
                for(int j=i;j<n;j++){
                    if(fim[i] == inicio [j]){
                        a = inicio[j-1];
                        inicio[j - 1] = inicio [j];
                        inicio[j] = a;
                        ult++;
                        break;
                    }
                }
                i--;
            }
        }
        printf("%d\n",ult);
    }
    return 0;
}