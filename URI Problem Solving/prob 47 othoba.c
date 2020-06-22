#include<stdio.h>
main()
{
    int H,M,h1,m1,h2,m2,n,d1,d2;
    scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
d1=(h1*60)+m1;
d2=(h2*60)+m2;
n=d2-d1;
H=n/60;
M=n%60;
printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H,M);
}
