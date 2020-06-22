#include<stdio.h>
main()
{
    int a,b,x,y;
    float c,z,p;
    scanf("%d%d%f",&a,&b,&c);
    scanf("%d%d%f",&x,&y,&z);
    p=((b*c)+(y*z));
    printf("VALOR A PAGAR: R$ %.2f\n",p);
    return 0;
}
