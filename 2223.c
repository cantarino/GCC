#include <stdio.h>

#define N 100000

int pilha [N][N];
int somas [N][N][N];

int pd(int caso,int inicio,int fim){
    if(somas[caso][inicio][fim]!= -1)
        return somas[caso][inicio][fim];
    somas[caso][inicio][fim] = somas[caso][fim][fim] + 
        pd(caso,inicio,fim-1); 
    return somas[caso][inicio][fim];
}

int main(){
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        int caso_max = 0;
        int n;
        scanf("%d",&n);
        for(int m=0;m<n;m++)
            for(int o=0;o<n;o++)
                somas[0][m][o] = -1;
        for(int j=0;j<n;j++){
            int b;
            scanf("%d",&b);
            pilha[0][j] = b;
            somas[0][j][j] = b;
        }
        int c;
        scanf("%d",&c);
        for(int k=0;k<c;k++){
            int op,inicio,fim,caso;
            scanf("%d",&op);
            if(op==1){
                scanf("%d",&inicio);
                scanf("%d",&fim);
                scanf("%d",&caso);
                printf("%d\n",pd(caso,inicio,fim));
            }
            if(op==2){
                int numero,pos;
                scanf("%d",&pos);
                scanf("%d",&numero);
                int dif = numero - pilha[caso_max][pos-1];
                for(int l=0;l<n;l++){
                    for(int h=0;h<n;h++){
                        if(somas[caso_max][l][h] != -1){
                            if(l<pos){
                                somas[caso_max+1][l][h] = somas[caso_max][l][h] + dif;
                            }
                            else{
                                somas[caso_max+1][l][h] = somas[caso_max][l][h];
                            }
                        }
                    }
                    if(l==pos-1){
                        pilha[caso_max+1][l] = num;
                    }
                    else{
                        pilha[caso_max+1][l] = pilha[caso_max][l];
                    }
                }
                caso_max++;
            }
        }
    }
    return 0;
}