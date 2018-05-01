#include <stdio.h>
#include <math.h>

//	3 pag - x dias
//	5 pag - (x-16) dias
//	x = 40 dias -> 120 paginas

// Q pag - x dias
// P pag - (x-D) dias
// x = PD/(P-Q)
// pag = x*Q

int main(){
	float q,d,p,x;
	while(1){
		scanf("%f",&q);
		if(q==0){
			return 0;
		}
		scanf("%f",&d);
		scanf("%f",&p);
		x = ((p*d)/(p-q))*q;
		x =floor(x);
		if(x!=1)
			printf("%.0f paginas\n",x);
		if(x==1)
			printf("%.0f pagina\n",x);
	}
}