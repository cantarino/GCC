#include <bits/stdc++.h>
#define N 10000

using namespace std;

vector<int> grafo[N];

int vis[N],din[N];

vector <int> distancias[N]; 

int capacidade,cap_atual;

int dfs(int u){
	vis[u] = 1;
	int dis = 0;
	for(int i=0;i<grafo[u].size();i++){
		int v = grafo[u][i];
		if(!vis[v]){
			if(din[v]<cap_atual)
				dis = dis + distancias[u] + dfs(v);
		}
	}
}

int main(){
	int n,a,b,c;
	scanf("%d %d",&n,&c);
	capacidade = c;
	cap_atual = capacidade;
	for(int i=0;i<n;i++){
		scanf("%d",din[i]);
	}
	for(int i=0;i<n;n++){
		scanf("%d %d %d",&a,&b,&c);
		a--;
		b--;
		grafo[a].push_back(b);
		distancias[a].push_back(c);
		distancias[b].push_back(c);
	}
	for(int i=0;i<n;i++){
		if(!vis[i])
			dfs(i);
	}
	return 0;
}