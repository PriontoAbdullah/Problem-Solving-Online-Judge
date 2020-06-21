#include<stdio.h>
int main()
{
    int N,i,n,e=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            e=e+1;
        }
    }
    printf("%d",e);
    return 0;
}

