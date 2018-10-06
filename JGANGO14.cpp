#include <bits/stdc++.h>

using namespace std;

int main(){
    long int a,b,c,d;
    scanf("%ld %ld %ld %ld",&a,&b,&c,&d);
    if((a*b)==(c*d))
        printf("0\n");
    if((a*b)>(c*d))
        printf("-1\n");
    if((a*b)<(c*d))
        printf("1\n");
    return 0;
}