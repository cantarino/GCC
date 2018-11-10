#include <stdio.h>

void preenche(int ** mat,int i,int j){
    if(mat[i-1][j]== -1)
        preenche(mat,i-1,j);
    if(mat[i][j-1] == -1)
        preenche(mat,i,j-1);
    mat[i][j] = mat[i-1][j] + mat[i][j-1];
}

int main(){
    int tam,max=1;
    int mat[10][10];
    scanf("%d",&tam);
    for(int i=0;i<tam;i++){
        mat[0][i] = mat[i][0] = 1;
    }
    for(int i=1;i<tam;i++){
        for(int j=1;j<tam;j++){
            mat[i][j] = mat[i-1][j] + mat[i][j-1];
            if(mat[i][j] > max)
                max = mat[i][j];
        }
    }
    printf("%d\n",max);
     
    return 0;
}