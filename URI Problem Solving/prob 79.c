#include<stdio.h>
main()
{
    int i,n;
    double a,b,c,ave;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lf%lf%lf",&a,&b,&c);
        a=a*2.0;
        b=b*3.0;
        c=c*5.0;
        ave=(a+b+c)/10.0;
        printf("%.1lf\n",ave);
    }
 return 0;
}
