#include<stdio.h>
main()
{
    float a,b,c,MEDIA;
    scanf("%f%f%f",&a,&b,&c);
    a=a*2;
    b=b*3;
    c=c*5;
    MEDIA=(a+b+c)/10;
    printf("MEDIA = %.1f\n",MEDIA);
    return 0;
}
