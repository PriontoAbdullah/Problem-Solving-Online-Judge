#include<stdio.h>
int main()
{
   long int n,i,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x%2==0)
            printf("Even\n");
        else
            printf("Odd\n");
    }
return 0;
}
