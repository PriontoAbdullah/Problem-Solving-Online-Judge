#include<stdio.h>
#include<string.h>
main()
{
    int T,i,c=0;
   char s;
   scanf("%d",&T);
   for(i=1;i<=T;i++)
   {
       scanf("%s",&s);
       if(s=='_')
        c++;
       printf("Case %d: %d",i,c);
   }
   return 0;
}
