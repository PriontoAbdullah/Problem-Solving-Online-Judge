#include<stdio.h>
main()
{
    int i,pos=0;
    double x,ave,sum=0.0;
    for(i=0;i<6;i++)
    {
        scanf("%lf",&x);
        if(x>0){
            pos++;
        sum=sum+x;  }
    }
    ave=sum/pos;
    printf("%d valores positivos\n",pos);
    printf("%.1lf\n",ave);
    return 0;
}
