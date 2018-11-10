#include <stdio.h>
#include <math.h>

int main(){
    int c;
    scanf("%d",&c);
    for(int i=0;i<c;i++){
        char n [200];
        int l=0;
        scanf("%s",n);
        for(int j=0;n[j]!='\0';j++){
            int a = n[j] - '0';
            if(a==0)
                l+=6;
            if(a==1)
                l+=2;
            if(a==2)
                l+=5;
            if(a==3)
                l+=5;
            if(a==4)
                l+=4;
            if(a==5)
                l+=5;
            if(a==6)
                l+=6;
            if(a==7)
                l+=3;
            if(a==8)
                l+=7;
            if(a==9)
                l+=6;
        }
        printf("%d leds\n",l);
    }
    return 0;
}