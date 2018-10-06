#include <bits/stdc++.h>

using namespace std;

int h1,h2,m1,m2,h,m;

int main(){
    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)&&(h1||m1||h2||m2)){
        if(m2>=m1){
            m = m2-m1;
        }
        if(m2<m1){
            m2+=60;
            h2--;
            m = m2-m1;
        }
        if(h2 >= h1){
            h = h2-h1;
        }
        if(h2<h1){
            h2+=24;
            h = h2-h1;
        }
        h=h*60;
        m=m+h;
        printf("%d\n",m);

    }
    return 0;
}