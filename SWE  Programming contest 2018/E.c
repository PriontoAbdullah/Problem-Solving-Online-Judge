#include<stdio.h>
int main()
{
    int n,i,j;
    while(scanf("%d",&n)==1)
    {
        char s1[n];
        char s2[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&s1[i]);
        }
         for(i=0;i<n;i++)
        {
            scanf("%d",&s2[i]);
        }
        int k,l,c=0;
        for(k=0;k<n;k++)
        {
            for(l=0;l<n;l++)
            {
                if(s1[k]==s2[l])
                {
                    c=c+1;
                }
            }
        }
        printf("%d\n",c);
    }
    return 0;
}

