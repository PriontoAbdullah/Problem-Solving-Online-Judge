#include<stdio.h>
main()
{
    double a,b,MEDIA;
    scanf("%lf%lf",&a,&b);
    a=a*3.5;
    b=b*7.5;
    MEDIA=(a+b)/11;
    printf("MEDIA = %.5lf\n",MEDIA);
    return 0;
}
