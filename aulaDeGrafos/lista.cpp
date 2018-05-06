#include <bits/stdc++.h>
# define N 105000

using namespace std;

vector<int> G[N];

int main(){
	G[0].push_back(1);//no final do 1 vertice coloca o 1
	G[1].push_back(0);//no final do 2 vertice coloca o 0
	G[2].push_back(5);// no final do 3 vertice coloca o 5
	G[2].push_back(2);// no final do 3 vertice coloca o 2
	//(vertice 3) -> 5->2
	for(int i=0;i<N;i++){
		for(int j=0;j<G[i].size();j++){
			//G[i][j] e um vertice conect com i
		}
	}
	return 0;
}