//Feito para treinar com o exemplo do Rodrigo.

#include <bits/stdc++.h>
#define N 150000

using namespace std;

vector<int> G[N];

int t, n, m, a, b;
int vis[N];

bool dfs(int u){
	vis[u] = 1;
	for(int i =0; i<G[u].size();i++){
		int v = G[u][i];
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
	vis[u] = 2;
	return 0;
}

int main(){
	scanf("%d", &t);
	while(t--){
		scanf("%d %d", &n, &m);
		for(int i=0; i<m; i++){
			scanf("%d %d", &a, &b);
			a--;
			b--;
			G[a].push_back(b);
		}
		memset(vis, 0, sizeof vis);
		bool temCiclo = false;
		for(int i = 0; i< n && !temCiclo; i++){
			if(!vis[i]){
				temCiclo = dfs(i);
			}
		}
		if(temCiclo){
			printf("SIM\n");
		}
		else printf("NAO\n");

		for(int i=0; i<n;i++) G[i].clear();
	}

	return 0;
}