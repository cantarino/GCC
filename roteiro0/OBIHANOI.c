#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//torre de hanoi
// 1 -> 1
// 2 -> 2 + 1
// 3 -> 4 + 2 + 1
//...
//Sempre dobra o n de movimentos do ultimo,pois
//tem que deixar no mesmo lugar com metade do espaco

int main(){
    int *h;
    int i,a;
    h = malloc(sizeof(int));
    a=1;
    i=0;
    while(a>0){
        scanf("%d",&a);
        h[i] = a;
        h = realloc(h,sizeof(int));
        i++;
    }
    for(a=0;a<i-1;a++){
        printf("Teste %d\n%.0f\n\n",a+1,pow(2,h[a])-1);
    }
    free(h);
}

//ou

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//torre de hanoi
// 1 -> 1
// 2 -> 2 + 1
// 3 -> 4 + 2 + 1
//...
//Sempre dobra o n de movimentos do ultimo,pois
//tem que deixar no mesmo lugar com metade do espaco

int main(){
    int i,a;
    a=1;
    i=0;
    while(a!=0){
    	if(i>0){
    		printf("Teste %d\n%.0f\n\n",i+1,pow(2,a)-1);
	}
	scanf("%d",&a);
	i++;
    }
}

