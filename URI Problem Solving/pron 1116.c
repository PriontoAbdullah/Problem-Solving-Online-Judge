#include<stdio.h>
int main()
{
    int n,i;
    float r,x,y;
    scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     scanf("%f%f",&x,&y);
     if(y==0)
        printf("divisao impossivel\n");
     else
     {
         r=x/y;
         printf("%.1f\n",r) ;
             }
 }
 return 0;
}
