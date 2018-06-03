#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

#define N 10001

vector <int> G[N];
int visitei;
vector <int> visitados;

int vis [N];


bool dfs(int u){
    vis[u] = 1; //to visitando
    int v;
    visitei++;
    visitados.push_back(u);
    
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
    int a,b,m,n;
    scanf("%d %d",&a,&b);
        while(scanf("%d %d",&m,&n)&&m&&n){
            n--;
            m--;
            G[m].push_back(n);
        }
        bool ciclo = false;
        for(int i=0;i<a && !ciclo;i++){
            ciclo = dfs(i);
            if(!ciclo){
                if(visitei==a){
                    break;
                }
                cout<<visitados[0]<<" - "<<visitados.size()<<"\n";
                visitados.clear();
                visitei = 0;
            }
        }
        for(int i=0;i<visitados.size();i++){
            cout<<visitados[i];
        }
        memset(vis,0,sizeof vis);
    return 0;
}
