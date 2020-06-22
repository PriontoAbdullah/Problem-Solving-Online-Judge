#include<stdio.h>
main()
{
    double l;
    int a,b,c,d,e,f,i,j,k,m,n,o,p;
    scanf("%lf",&l);
    n=l*100;
    a=n/10000;
    n=n%10000;
    b=n/5000;
    n=n%5000;
    c=n/2000;
    n=n%2000;
    d=n/1000;
    n=n%1000;
    e=n/500;
    n=n%500;
    f=n/200;
    n=n%200;
    i=n/100;
    n=n%100;
    j=n/50;
    n=n%50;
    k=n/25;
    n=n%25;
    m=n/10;
    n=n%10;
    o=n/5;
    n=n%5;
    p=n/1;
    ///n=n%1;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",a);
    printf("%d nota(s) de R$ 50.00\n",b);
    printf("%d nota(s) de R$ 20.00\n",c);
    printf("%d nota(s) de R$ 10.00\n",d);
    printf("%d nota(s) de R$ 5.00\n",e);
    printf("%d nota(s) de R$ 2.00\n",f);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",i);
    printf("%d moeda(s) de R$ 0.50\n",j);
    printf("%d moeda(s) de R$ 0.25\n",k);
    printf("%d moeda(s) de R$ 0.10\n",m);
    printf("%d moeda(s) de R$ 0.05\n",o);
    printf("%d moeda(s) de R$ 0.01\n",p);
return 0;
}

