#include<stdio.h>
main()
{
    int x,y;
    float z;
    float ar[5]={4.00,4.50,5.00,2.00,1.50};
    scanf("%d%d",&x,&y);
    z=ar[x-1]*y;
    printf("Total: R$ %.2f\n",z);
    return 0;
}
