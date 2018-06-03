#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long int n,num,aux;
    vector<long long int> v;
    while(cin>>n>>num && (n | num)){
        while(num){
            aux=num%10;
            while(aux>10){
                aux=aux%10;
            }
            v.push_back(aux);
            num /=10;
        }
        for(int i=0;i<v.size();i++){
            if(v[i]==n){
                v.erase(v.begin()+i);
                i=-1;
            }
        }
        if(v.size()==0){
            cout<<"0\n";
            continue;
        }
        cout<<v[v.size()-1];
        for(int i=0;i<v.size()-1;i++){
            if(v[v.size()-1-i]== 0 && v[v.size()-i-2]==v[v.size()-i-1])
                continue;
            cout<<v[v.size()-i-2];
        }
        cout<<"\n";
        v.clear();
        
    }
    return 0;
}
