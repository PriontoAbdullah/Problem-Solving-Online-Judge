#include<stdio.h>
main()
{
    double a,b,c,d;
    char x[30];
    scanf("%s",&x);
    scanf("%lf%lf",&a,&b);
    c=b*0.15;
    d=c+a;
    printf("TOTAL = R$ %.2lf\n",d);
    return 0;
}
