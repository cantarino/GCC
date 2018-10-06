#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int  ** Aloca_matriz(int ** matriz, int lin,int col){
  matriz = (int **) malloc(lin*sizeof(int*));
  for(int i =0;i<lin;i++){
    matriz[i] = (int *) malloc(col * sizeof(int*));
    for(int j=0;j<col;j++){
      matriz[i][j] = 0;
    }
  }
  return matriz;
}

int compraString (char * s1,char * s2){
  
}

int main(){
  char arquivo[100];
  int ** matriz;
  int l =5,c = 5;
  printf("Digite o nome do arquivo de entrada: ");
  gets(arquivo);
  FILE *fp;
  fp = fopen(arquivo,"r");
  if(!fp){
    printf("ERRO");
    exit(1);
  }
  int n,dist;
  fscanf(fp,"%d",&n);
  Aloca_matriz(matriz,n,n);
  char cidades[n][20],cidade1[20],cidade2[20];
  fscanf("%s",&cidades[0]);
  fscanf("%s",&cidades[1]);
  fscanf("%d",&dist);
  for(int i=1;i<n;i++){

  }
  fclose(fp);

  return 0;
}
