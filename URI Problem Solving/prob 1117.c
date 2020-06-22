#include<stdio.h>
int main()
{
    int n,c=0;
    float x,a,s=0.0;
while(1){
    scanf("%f",&x);
    if(x>10.0 || x<0.0)
    printf("nota invalida\n");
    else{
        s=s+x;
        c++;}
        if(c==2)
            break;
}
a=s/2.0;
printf("media = %.2f\n",a);
return 0;
}
