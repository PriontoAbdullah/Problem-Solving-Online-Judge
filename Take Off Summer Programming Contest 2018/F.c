#include<stdio.h>
int main()
{
    int N,N1,K,K1,F,F1,T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
   {
       scanf("%d%d%d",&N,&K,&F);
    K1=K/2;
    F1=K1*F;
    N1=N/F1;
    printf("Case %d: %d\n",i,N1);
   }
return 0;
}
