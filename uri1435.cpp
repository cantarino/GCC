#include <iostream>
#include <vector>

using namespace std;

int main(){
    int o,i,j,k;
    while(scanf("%d",&o)&&o){
        k=0;
        int m[100][100];
        while(o>k){
            for(i=k;i<(o-k);i++)
                for(j=k;j<(o-k);j++)
                    m[i][j] = k+1;
            k++;
        }
        for(i=0;i<o;i++){
            for(j=0;j<o;j++)
                printf("%d ",m[i][j]);
            printf("\n");
        }
    }
    return 0;
}