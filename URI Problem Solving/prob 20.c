#include<stdio.h>
main()
{
    int N,y,m,d;
    scanf("%d",&N);
    y=N/365;
    N=N%365;
    m=N/30;
    N=N%30;
    d=N/1;
    N=N%1;
    printf("%d ano(s)\n",y);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",d);
    return 0;
}

