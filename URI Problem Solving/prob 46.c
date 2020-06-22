#include<stdio.h>
main()
{
    int a,b,x;
    scanf("%d%d",&a,&b);
    if(a>b)
        x=(b+24)-a;
    else if (a==b)
        x=24;
    else if (b>a)
        x=b-a;
    printf("O JOGO DUROU %d HORA(S)\n",x);
    return 0;
}
