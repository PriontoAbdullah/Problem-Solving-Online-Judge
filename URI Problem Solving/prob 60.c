#include<stdio.h>
main()
{
    int i,pos=0;
    float n;
    for(i=0;i<6;i++){
        scanf("%f",&n);
        if(n>0)
            pos++;
    }
    printf("%d valores positivos\n",pos);
    return 0;
}
