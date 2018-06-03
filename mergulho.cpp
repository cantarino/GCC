#include<bits/stdc++.h>

using namespace std;

int main(){
    vector <int> v;
    int a,b,c;
    while(scanf("%d",&a)!=EOF){
        for(int i=0;i<a;i++)
            v.push_back(i+1);
        scanf("%d",&b);
        for(int i=0;i<b;i++){
            scanf("%d",&c);
            v.erase(v.begin()+(c-1-i));
        }
        for(int i=0;i<(a-b);i++)
            printf("%d ",v[i]);
        if(a==b)
            printf("*");
        printf("\n");
        v.clear();
    }
    return 0; 
}