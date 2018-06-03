#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;

#define N 15000

vector <int> G[N];

int vis [N];


bool dfs(int u){
    vis[u] = 1; //to visitando
    int v;
    
    for(int i=0;i<G[u].size();i++){
        v= G[u][i];
        if(vis[v] == 1){
            return 1;
        }
        else if(vis[v] == 0){
            int ret = dfs(v);
            if(ret==1){
                return 1;
            }
        }
    }
    vis[u]=2;
    return 0;
}

int main(){
    int t,m,n,a,b;
    scanf("%d",&t);
    
    while(t--){
        scanf("%d",&n);
        scanf("%d",&m);
        
        while(m>0){
            
            scanf("%d %d",&a,&b);
            m--;
            a--;
            b--;
            G[a].push_back(b);
        }
        bool ciclo = false;
        for(int i=0;i<n && !ciclo;i++){
            if(vis[i] == 0)
                ciclo = dfs(i);
        }
        if(ciclo){
            cout<<"SIM\n";
        }
        else
            cout<<"NAO\n";
        ciclo = false;
        for(int i =0;i<n;i++){
            G[i].clear();
        }
        memset(vis,0,sizeof vis);
        
    }
    return 0;
}