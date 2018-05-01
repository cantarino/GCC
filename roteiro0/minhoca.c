#include <stdio.h>

int main(){
	int m,n,max,comp;
	scanf("%d %d",&m,&n);
	int mat [m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d ",&mat[i][j]);
		}
	}
	max = 0;
	comp = 0;

	for(i=0;i<m;i++){
		max += mat[i][0];
	}

	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			comp += mat[i][j]
		}
		if(comp>max)
			max=comp;
		comp =0;
	}

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			comp += mat[j][i]
		}
		if(comp>max)
			max=comp;
		comp =0;
	}







}