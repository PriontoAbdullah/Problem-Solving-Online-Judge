#include<stdio.h>
int main()
{
    int hr,kh;
    float l;
    scanf("%d%d",&hr,&kh);
    l=(hr*kh)/12.0;
    printf("%.3f\n",l);
    return 0;
}
