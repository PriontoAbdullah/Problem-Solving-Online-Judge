#include<stdio.h>
int main()
{
    double R,v,pi;
    pi=3.14159;
    scanf("%lf",&R);
    v=(4/3.0)*pi*R*R*R;
    printf("VOLUME = %.3lf\n",v);
    return 0;
}
