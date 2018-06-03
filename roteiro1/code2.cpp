#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
using namespace std;

vector<int> G[50500];
int vis[50500];
vector<int> total;

int dfs(int u){
    vis[u] = 1;
    int v,tot;
    tot = 0;
    for(int i=0;i<G[u].size();i++){
        v = G[u][i];
        if(vis[v] == 0)
            tot = 1 + tot + dfs(v);
    }
    vis[u] = 2;
    total[u] = tot;
    return tot;
}

int main(){
    int T,n,a,b,m;
    cin>>T;
    for(int t=0;t<T;t++){
        cin>>n;
        m=n;
        while(n--){
            cin>>a;
            cin>>b;
            a--;
            b--;
            G[a].push_back(b);
            total[n] = -1;
        }
        int max,nmax;
        max = nmax = 0;
        for(int i=0;i<m;i++){
            if(total[i] == -1)
                dfs(i);
            if(total[i]>max){
                nmax = i;
                max = total[i];
            }
        }
        cout<<nmax+1;

    }
    return 0;
}