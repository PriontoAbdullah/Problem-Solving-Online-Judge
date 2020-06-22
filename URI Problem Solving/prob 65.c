#include<stdio.h>
main()
{
    int x,i,ev=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&x);
        if(x%2==0)
            ev++;
    }
    printf("%d valores pares\n",ev);
    return 0;
}
