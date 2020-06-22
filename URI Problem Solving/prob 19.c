#include<stdio.h>
main()
{
    int N,h,m,s;
    scanf("%d",&N);
    h=N/3600;
    N=N%3600;
    m=N/60;
    N=N%60;
    s=N/1;
    N=N%1;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
