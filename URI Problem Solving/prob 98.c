#include<stdio.h>
int main()
{
    float i,j;
    int a,b;
    for(i=0.0;i<2.1;i+=0.2){
        for(j=1.0+i;j<3.1+i;j=j+1){
                if(i>0.0 && i<1.0 || i>1.0 && i<2.0 ){
            printf("I=%.1f J=%.1f\n",i,j); }
            else {
                a=i;
                b=j;
            printf("I=%d J=%d\n",a,b);
           }
        }
    }
return 0;
}
