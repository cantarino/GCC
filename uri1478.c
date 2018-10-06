#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    while(n!=0){
        int m[n][n];

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                m[i][j] = m[j][i] = j+1-i;
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j==0){
                    if(m[i][j]<10){
                        printf("  %d",m[i][j]);
                        continue;
                    }
                    if(m[i][j]<100){
                        printf(" %d",m[i][j]);
                        continue;
                    }
                    if(m[i][j]<1000){
                        printf("%d",m[i][j]);
                        continue;
                    }
                }
                if(m[i][j]<10){
                    printf("   %d",m[i][j]);
                    continue;
                }
                if(m[i][j]<100){
                    printf("  %d",m[i][j]);
                    continue;
                }
                if(m[i][j]<1000){
                    printf(" %d",m[i][j]);
                    continue;
                }
            }
            printf("\n");
        }
        printf("\n");
        scanf("%d",&n);

    }
    return 0;
}