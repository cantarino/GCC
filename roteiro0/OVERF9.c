#include <stdio.h>

int main(){
    int ov,n1,n2,opr;
    char op;
    scanf("%d",&ov);
    scanf("%d %c %d",&n1,&op,&n2);
    if(op=='+'){
        opr = n1+n2;
    }
    else{
        opr = n1*n2;
    }
    if(ov>=opr){
        printf("OK\n");
    }
    else{
        printf("OVERFLOW\n");
    }
}
