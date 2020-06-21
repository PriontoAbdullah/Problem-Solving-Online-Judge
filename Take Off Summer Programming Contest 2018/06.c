#include<stdio.h>
int main()
{
    int n,i,m,r,sum,T;
    scanf("%d",&T);
   while(T--) {
    scanf("%d",&n);
    r=n%10;
    while(n!=0){
         m=n%10;
          n=n/10;
        }
    sum=m+r;
    printf("sum = %d\n",sum);
}
    return 0;
}
