#include<stdio.h>
main()
{
    int x,i,n;
    scanf("%d",&n);
    for(i=0;i<=10000;i++)
    {
        x=n*i+2;
        if(x>10000)
            break;
        printf("%d\n",x);
    }
    return 0;
}
