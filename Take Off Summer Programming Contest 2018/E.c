#include<stdio.h>
int main()
{
    int n,i,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    scanf("%d%d%d%d%d%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10);
    if(a1==0 && a1<a2 && a2>a3 && a3<a4 && a4>a5 && a5<a6 && a6>a7 && a7<a8 && a8>a9 &&a9<a10)
        printf("Case %d: Yes\n",i);
    else
        printf("Case %d: No\n",i);
    }
    return 0;
}
