#include<stdio.h>
int main()
{
    int N,i,E=0,m,O=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
{   scanf("%d",&m);
        if(m%2==0)
        E++;
        else
        O++;
}
printf("%d %d\n",O,E);
return 0;
}
