#include<stdio.h>
main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n;i<=n+11;i++)
       {  if(i%2!=0)
       printf("%d\n",i); }
    return 0;
}
