#include <stdio.h>

int visitados [50][50];
char tabuleiro [50][50];
int end = 0;

void dfs(char c,int i,int j,int n,int m,int step){
    if(end)
        return;
    
    if(step==2 && visitados[i][j]){
        printf("Yes\n");
        end = 1;
        return;
    }
    
    visitados[i][j] = 1;
    
    //sentido anti-horario
    //step 0 - baixo(i+1)
    //step 1 - cima(i-1)
    //step 2 = dir(j+1)
    //step 3 - esq(j-1)
    
    if(step==2){
        if(j+1<m){
            if(tabuleiro[i][j+1] == c)
                dfs(c,i,j+1,n,m,2);
        }
        if(i-1>=0){
            if(tabuleiro[i-1][j] == c)
                dfs(c,i-1,j,n,m,1);
        }
    }
    
    if(step==1){
        if(i-1>=0){
            if(tabuleiro[i-1][j] == c)
                dfs(c,i-1,j,n,m,1);
        }
        if(j-1>=0){
            if(tabuleiro[i][j-1] == c)
                dfs(c,i,j-1,n,m,3);
        }
    }
    
    if(step==3){
        if(j-1>=0){
            if(tabuleiro[i][j-1] == c)
                dfs(c,i,j-1,n,m,3);
        }
        if(i+1<n){
            if(tabuleiro[i+1][j] == c)
                dfs(c,i+1,j,n,m,0);
        }
    }
    
    if(step==0){
        if(i+1<n){
            if(tabuleiro[i+1][j] == c)
                dfs(c,i+1,j,n,m,0);
        }
        if(j+1<m){
            if(tabuleiro[i][j+1] == c)
                dfs(c,i,j+1,n,m,2);
        }
    }

    visitados[i][j] = 0;
}

int main(){
    int n,m;
    char c;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            visitados [i][j] = 0;
            scanf("%c",&c);
            if(c=='\n')
                scanf("%c",&c);
            tabuleiro[i][j] = c;
        }
    }
    for(int i=0;i<n&&!end;i++){
        for(int j=0;j<m&&!end;j++){
                dfs(tabuleiro[i][j],i,j,n,m,2);
        }
    }
    
    if(end==0)
        printf("No\n");
    
    return 0;
}
