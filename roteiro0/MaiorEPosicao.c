#include <stdio.h>
 int main(){
 	int n[100];
 	int i,maior,posicao;
 	for(i=0;i<100;i++){
 		scanf("%d",&n[i]);
 	}
 	maior = n[0];
 	posicao = 1;
 	for(i=0;i<100;i++){
 		if(n[i]>maior){
 			maior=n[i];
 			posicao = i+1;
 		}
 	}
 	printf("%d\n%d\n",maior,posicao);
 }