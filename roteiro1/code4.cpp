#include <iostream>
#include <vector>

using namespace std;

vector<int> G[101];
vector<int> tasks;

int vis[101];

void dfs(int u){
	vis[u]=1;
	for(int i=0;i<G[u].size();i++){
		int v = G[u][i];
		if(!vis[v])
			dfs(i);
	}
	tasks.push_back(u);
}

int main(){
	int m,n,i,j;
	while(scanf("%d %d",&m,&n) && (m||n)){
		while(m--){
			scanf("%d %d",&i,&j);
			i--;
			j--;
			G[i].push_back(j);
		}
		for(int k=0;k<n;k++){
			if(!vis[i])
				dfs(k);
		}
		for(int k=0;k<n;k++){
			printf("%d ",tasks[k+tasks.size()-1]+1);
		}
	}
	return 0;
} 