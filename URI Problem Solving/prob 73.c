#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
    {
        j=i*i;
        printf("%d^2 = %d\n",i,j);
    }
    return 0;
}
