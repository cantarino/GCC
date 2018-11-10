#include <bits/stdc++.h>

#define N 1000000

using namespace std;

vector <int> comps;

int tabela [25][N] ;

int soma(int bloco){
    int s=0;
    for(int i=0;i<bloco;i++){
        s+=comps[i];
    }
    return s;
}

int pd(int bloco,int comprimento){
    if(tabela[bloco][comprimento] != -1)
        return tabela[bloco][comprimento];
    if(bloco == 0){//passo base -> completa com 1
        tabela[0][comprimento] = comprimento;
        return comprimento;
    }
    if(comprimento==0)
        return 0;
    if(comps[bloco] > comprimento)
        return pd(bloco-1,comprimento);
    int a = pd(bloco-1,comprimento);
    int b = comprimento/comps[bloco] + pd(bloco-1,comprimento%comps[bloco]);
    int s= soma(bloco);
    int c=2147483647;
    for(int i=1;i<comps[bloco];i++){
        int z = comprimento/comps[bloco] - i + pd(bloco-1,comprimento%comps[bloco]+comps[bloco]*i);
        if(z<c && z>-1)
            c = z;
    }
    int r = min(a,min(b,c));
    tabela[bloco][comprimento] = r;
    return r;
}

int main(){
    int c;
    scanf("%d",&c);
    for(int i=0;i<c;i++){
        int a,n;
        scanf("%d",&a);
        scanf("%d",&n);
        for(int j=0;j<a;j++){
            int d;
            scanf("%d",&d);
            comps.push_back(d);
        }
        for(int k=0;k<a;k++){
            for(int l=0;l<=n;l++)
                tabela[k][l] = -1;
        }
        printf("%d\n",pd(a-1,n));
        comps.clear();
    }
    return 0;
}