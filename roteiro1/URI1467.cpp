#include <iostream>

using namespace std;

int main(){
	int a,b,c;
	while(cin>>a>>b>>c){
		if(a==b && b==c)
			printf("*\n");
		if(b==c && a!=b)
			printf("A\n");
		if(a==c && a!=b)
			printf("B\n");
		if(a==b && a!=c)
			printf("C\n");
	}
	return 0;
}