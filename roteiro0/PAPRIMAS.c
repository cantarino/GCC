#include <stdio.h>

int primo(int i){
    int d=1;
    while(i>d){
        if(i%d==0){
            return 0;
        }
        d++;
    }
    return 1;
}

int main(){
    char c[20];
    int i,soma;
    while(scanf("%s",c)!= EOF){
        soma=0;
        for(i=0;c[i]!='\0';i++){
            if(64<(int)c[i] && 91>(int)c[i]){
                soma += (int)c[i];
                soma -=38;
            }
            if(96<(int)c[i] && 122>(int)c[i]){
                soma+= (int)c[i];
                soma -= 96;
            }
        }
        if(primo(soma)){
            printf("It is a prime word.\n");
        }
        else{
            printf("It is not a prime word.\n");
        }
    }
}
