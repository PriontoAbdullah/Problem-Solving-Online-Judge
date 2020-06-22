#include<stdio.h>
main()
{
    int H,M,h1,m1,h2,m2;
    scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
    if(h2>h1 && m2==m1)
    {
        M=0;
        H=h2-h1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H,M);
    }
    else if(h2>h1 && m2<m1)
    {
        M=60-m1+m2;
        H=h2-h1-1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H,M);
    }
    else if(h2==m1 && h2==m2 && m2==m1)
    {
        M=m1-m2;
        H=24+h1-h2;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H,M);
    }
    else if(h2==h1 && m2>m1)
    {
        M=m2-m1;
        H=h1-h2;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H,M);
    }
    else if(h2==h1 && m2<m1)
    {
        M=60-m1+m2;
        H=24-h1+h2-1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H,M);
    }
    else if(h2<h1 && m2==m1)
    {
        M=0;
        H=24-h1+h2;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H,M);
    }
    else if(h2<h1 && m2<m1)
    {
        M=60+m2-m1;
        H=24+h2-h1-1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H,M);
    }
    else if(h2>h1 && m2>m1)
    {
        M=m2-m1;
        H=h2-h1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H,M);
    }
    else if(h2<h1 && m2>m1)
    {
        M=m2-m1;
        H=24-h1-1+h2;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H,M);
    }
        return 0;
}
